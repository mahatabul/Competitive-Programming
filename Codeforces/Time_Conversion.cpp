#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    // Extract the period (AM/PM)
    char ap = s[s.size() - 2];

    // Extract the hour part of the time
    int hour = stoi(s.substr(0, 2));

    // Remove AM/PM
    s.erase(8, 2);

    if (ap == 'A')
    {
        if (hour == 12)
        {
            // Convert 12 AM to 00
            s.replace(0, 2, "00");
        }
    }
    else if (ap == 'P')
    {
        if (hour != 12)
        {
            // Convert PM hours to 24-hour format
            hour += 12;
            string hourStr = (hour < 10 ? "0" : "") + to_string(hour);
            s.replace(0, 2, hourStr);
        }
    }

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
