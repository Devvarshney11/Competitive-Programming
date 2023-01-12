// Leetcode
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void createRoman(unordered_map<int, char> &roman, string &ans, int num, int mul)
{
    if (num == 0)
        return;
    createRoman(roman, ans, num / 10, 10 * mul);
    int temp = num % 10;
    if (temp == 4)
    {
        ans = ans + roman[mul] + roman[5 * mul];
    }
    else if (temp >= 1 && temp < 4)
    {
        for (int i = 1; i <= temp; i++)
        {
            ans += roman[mul];
        }
    }
    else if (temp >= 5 && temp < 9)
    {
        ans += roman[5 * mul];
        for (int i = 6; i <= temp; i++)
        {
            ans += roman[mul];
        }
    }
    else if (temp == 9)
    {
        ans = ans + roman[mul] + roman[10 * mul];
    }
}
string integerToRoman(int num)
{
    unordered_map<int, char> roman;
    roman[1] = 'I';
    roman[5] = 'V';
    roman[10] = 'X';
    roman[50] = 'L';
    roman[100] = 'C';
    roman[500] = 'D';
    roman[1000] = 'M';
    
    string ans = "";
    int mul = 1;
    createRoman(roman,ans,num,mul);
    return ans;
}
int main()
{
    return 0;
}