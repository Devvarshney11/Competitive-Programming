#include <iostream>
#include <vector>

using namespace std;

int maxConsecutiveAnswers(string answerKey, int k)
{
    int l = answerKey.length();
    int True = 0;
    int False = 0;
    int j = 0;
    int ans = 0;
    for (int i = 0; i < l; i++)
    {
        (answerKey[i] == 'T') ? True++ : False++;
        if (True <= k || False <= k)
        {
            ans = max(ans, True + False);
        }
        else if (True > k && False > k)
        {
            while (True > k && False > k)
            {
                (answerKey[j++] == 'T') ? True-- : False--;
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}