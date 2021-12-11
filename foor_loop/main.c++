#include <iostream>
#include <cstdio>

using namespace std;

void print_english_rep(int a)
{
         switch (a) 
         {   case 1:
                cout << "one " << endl;
                break;
            case 2:
                cout << "two " << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four " << endl;
                break;
            case 5:
                cout << "five " << endl;
                break;
            case 6:
                cout << "six " << endl;
                break;
            case 7:
                cout << "seven " << endl;
                break;
            case 8:
                cout << "eight " << endl;
                break;
            case 9:
                cout << "nine " << endl;
                break;
         }
        
    
}

int main() {
    // Complete the code.
    int a, b;
    cin >> a ;
    cin >> b ;
    /*if (a == b)
    {
        if (a >= 1 && a <= 9)
            print_english_rep(a);
        else if (a > 9 && (a % 2 == 0 ))
            cout << "even";
        else if (a > 9 && (a % 2 == 1 ))
            cout << "odd";
            
    }*/
    for (; a <= b ; a++)    
    {
        if (a >= 1 && a <= 9)
            print_english_rep(a);
         else if (a > 9 && (a % 2 == 0 ))
            cout << "even" << endl;
        else if (a > 9 && (a % 2 == 1 ))
            cout << "odd" << endl;
    }
    return 0;
}
