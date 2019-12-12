#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long calculate_compound(double percentPerDay, long long initialFund, int days)
{
    long long sum = initialFund * pow((1 + percentPerDay / 100), days);
}

int main()
{
    double percentPerDay;
    long long initialFund;
    int days;

    cout << "Compound Calculator" << endl;
    cout << "enter day/month/year: ";
    cin >> days;
    cout << "enter initial fund: $";
    cin >> initialFund;
    cout << "enter percent per day/month/year(%): ";
    cin >> percentPerDay;

    long long result = calculate_compound(percentPerDay, initialFund, days);
    if (result < 0 || result > 9223372036854775807)
    {
        cerr << "invalid inputs" << endl;
        exit(1);
    }

    int digit = to_string(result).length();

    string top = "\n####";
    string top1 = "#    ";
    string bottom1 = "#    ";
    string bottom = "####";
    for (int i = 0; i < digit + 1; i++)
    {
        top += "#";
        top1 += " ";
        bottom1 += " ";
        bottom += "#";
    }
    top += "####\n";
    top1 += "  #\n";
    bottom1 += "  #\n";
    bottom += "####\n";
    cout << top << top1 << "#   $" << result << "   #\n";
    cout << bottom1 << bottom << endl;

    cout << "Trade Safe!!" << endl;
    return 0;
}