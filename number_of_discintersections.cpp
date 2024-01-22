#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> temp = {1, 5, 2, 1, 4, 0};
    cout << solution(temp) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    // determine the number of intersections in a sequence of discs.
    // A = [1, 5, 2, 1, 4, 0] -> 11
    // N is an integer within the range [0..100,000];
    // each element of array A is an integer within the range [0..2,147,483,647].
    int N = A.size();
    // solve:
    // 1. create a vector of pairs, each pair is (center - radius, center + radius)
    // 2. sort the vector by the first element of the pair
    // 3. for each pair, check if the first element is smaller than the second element of the previous pair
    // 4. if yes, add the number of pairs to the result
    // 5. if no, continue
    // 6. return the result
    vector<pair<long long int, long long int>> pairs;
    for (int i = 0; i < N; i++)
    {
        pairs.push_back(make_pair(i - (long long int)A[i], i + (long long int)A[i]));
    }
    sort(pairs.begin(), pairs.end());
    int result = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N && pairs[i].second >= pairs[j].first; j++)
        {
            result++;
            if (result > 10000000)
                return -1;
        }
    }
    return result;
}