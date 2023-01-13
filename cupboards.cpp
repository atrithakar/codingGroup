/*
----------CODEFORCES PROBLEM--------------

One foggy Stockholm morning, Karlsson decided to snack on some jam in his friend Lillebror Svantenson's house. Fortunately for Karlsson, there wasn't anybody in his friend's house. Karlsson was not going to be hungry any longer, so he decided to get some food in the house.

Karlsson's gaze immediately fell on n wooden cupboards, standing in the kitchen. He immediately realized that these cupboards have hidden jam stocks. Karlsson began to fly greedily around the kitchen, opening and closing the cupboards' doors, grab and empty all the jars of jam that he could find.

And now all jars of jam are empty, Karlsson has had enough and does not want to leave traces of his stay, so as not to let down his friend. Each of the cupboards has two doors: the left one and the right one. Karlsson remembers that when he rushed to the kitchen, all the cupboards' left doors were in the same position (open or closed), similarly, all the cupboards' right doors were in the same position (open or closed). Karlsson wants the doors to meet this condition as well by the time the family returns. Karlsson does not remember the position of all the left doors, also, he cannot remember the position of all the right doors. Therefore, it does not matter to him in what position will be all left or right doors. It is important to leave all the left doors in the same position, and all the right doors in the same position. For example, all the left doors may be closed, and all the right ones may be open.

Karlsson needs one second to open or close a door of a cupboard. He understands that he has very little time before the family returns, so he wants to know the minimum number of seconds t, in which he is able to bring all the cupboard doors in the required position.

Your task is to write a program that will determine the required number of seconds t.

Input
The first input line contains a single integer n — the number of cupboards in the kitchen (2 ≤ n ≤ 104). Then follow n lines, each containing two integers li and ri (0 ≤ li, ri ≤ 1). Number li equals one, if the left door of the i-th cupboard is opened, otherwise number li equals zero. Similarly, number ri equals one, if the right door of the i-th cupboard is opened, otherwise number ri equals zero.

The numbers in the lines are separated by single spaces.

Output
In the only output line print a single integer t — the minimum number of seconds Karlsson needs to change the doors of all cupboards to the position he needs.
*/
#include <iostream>
using namespace std;
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;

    if (n >= 2 && n <= 10000)
    {
        int count, l_zero = 0, r_zero = 0, l_one = 0, r_one = 0;
        short l, r;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            if (l == 0)
            {
                l_zero++;
            }
            if (r == 0)
            {
                r_zero++;
            }
            if (l == 1)
            {
                l_one++;
            }
            if (r == 1)
            {
                r_one++;
            }
        }
        count = min(l_zero, l_one) + min(r_zero, r_one);
        cout << count;
    }
    return 0;
}