#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

ll calculatePoints(vector<string> &grid)
{
    ll sum = 0;

    // Points for each ring (0-indexed)
    // Ring 0 (outermost) = 1 point
    // Ring 1 = 2 points
    // etc.

    for (int ring = 0; ring < 5; ring++)
    {
        // Top and bottom rows of this ring
        for (int j = ring; j < 10 - ring; j++)
        {
            // Top row
            if (grid[ring][j] == 'X')
                sum += (ring + 1);

            // Bottom row (if not the same as top row)
            if (ring != 9 - ring && grid[9 - ring][j] == 'X')
                sum += (ring + 1);
        }

        // Left and right columns of this ring (excluding corners already counted)
        for (int i = ring + 1; i < 9 - ring; i++)
        {
            // Left column
            if (grid[i][ring] == 'X')
                sum += (ring + 1);

            // Right column
            if (grid[i][9 - ring] == 'X')
                sum += (ring + 1);
        }
    }

    return sum;
}

void solve()
{
    vector<string> grid(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> grid[i];
    }

    ll result = calculatePoints(grid);
    cout << result << endl;
}

int main()
{
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}