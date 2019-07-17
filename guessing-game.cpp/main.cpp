#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int num;
int correct=10;
int i=0;
cout << "enter the number between 0 and 100" << endl;

while(num!=correct && i<5)
{

    cin >> num;
    if(num==correct)
    {
        cout << "You win" << endl;
    }
    else if(num>correct)
    {
        cout << "Guess higher" << endl;
    }
    else if(num < correct)
    {
        cout << "Guess lower" << endl;
    }

    else if (i=4)
    {
        cout << "You lose" << endl;
    }

    i++;


}


    return 0;
}
