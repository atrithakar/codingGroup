#include <iostream>
#include <string>
using namespace std;
class Remember
{
public:
    string pastActivity = "Used to speak human language and interact with humans.";
    void showPast()
    {
        cout << pastActivity << endl;
    }
};
class Now
{
public:
    string now = "Interacts with computers and speaks programming language.";
    void showNow()
    {
        cout << now << endl
             << "Gone are those days!" << endl;
        }
};
int main()
{
    Remember thoseDays;
    thoseDays.showPast();
    Now today;
    today.showNow();
    return 0;
}