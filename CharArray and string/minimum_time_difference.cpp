#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + min;
        minutes.push_back(totalMinutes);
    }

    sort(minutes.begin(), minutes.end());
    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    int lastdiff1 = (minutes[0] + 1440) - minutes[n - 1];
    int lastdiff2 = minutes[n - 1] - minutes[0];
    int lastdiff = min(lastdiff1, lastdiff2);
    mini = min(mini, lastdiff);
    return mini;
}

int main()
{
    int n;
    cout << "Enter number of time points: ";
    cin >> n;
    
    vector<string> timePoints(n);
    cout << "Enter time points (HH:MM format):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> timePoints[i];
    }

    int result = findMinDifference(timePoints);
    cout << "Minimum time difference: " << result << " minutes\n";

    return 0;
}