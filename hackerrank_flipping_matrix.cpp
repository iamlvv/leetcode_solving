#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <stack>
using namespace std;

template <class T>

void printVector(vector<T> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

int flippingMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size();
    int half = n / 2;
    int sum = 0;

    for (int row = 0; row < half; ++row)
    {
        for (int col = 0; col < half; ++col)
        {
            /*
             * Compare each number that could share location and pick the largest
             * one of these.

             * In the matrix from the example:
             *
             * 112 42 83 119
             *  56 125 56 49
             *  15 78 101 43
             *  62 98 114 108
             *
             * Note that the numbers 112, 42, 56, and 125 are all in the upper quadrant.
             * Now think about which numbers could end up in any of those locations.
             * There is a connection here, and this connection is what this solution relies on. We ask ourselves the question: which numbers can share location? And simply pick the largest one of these. We do this for each location in the quadrant.
             *
             *  So, for this example matrix we would first compare 112, 119, 62, and 108. These could all be placed where 112 is, by means of reversing rows or columns any number of times. Since 119 is largest we pick that.
             * Next up is 42, 83, 98, and 114. Pick 114.
             * 56, 49, 15, 43 -> 56.
             * 125, 56, 78, 101 -> 125.
             *
             * 119 + 114 + 56 + 125 = 414
             *
             * In my head I imagine this as drawing squares/rectangles of different shapes,
             * in the comments below I refer to the top left, top right, bottom left, and bottom right corners of these squares/rectangles.
             */
            sum += std::max({matrix[row][col],                   // Top left
                             matrix[row][n - 1 - col],           // Top right
                             matrix[n - 1 - row][col],           // Bottom left
                             matrix[n - 1 - row][n - 1 - col]}); // Bottom right
        }
    }
    return sum;
}

int main()
{
    cout << flippingMatrix({{1, 2}, {3, 4}});
    return 0;
}