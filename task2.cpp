#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    int a,b;
    char c;
     try
        {
            if (typeid(a)==typeid(char))
            {
                throw 1;
            }
           cin>>a>>b>>c;
        }
        catch(int i)
        {
            cout << "enter  a  number,  not  a symbol" << endl;
        }


    switch ( c ) {

        case '+':
            cout<< a + b<<endl;
            break;

        case '-':
            cout<< a - b<<endl;
            break;

        case '*':
            cout<< a * b<<endl;
            break;

        case '/':
             try
        {
            if (b == 0)
            {
                throw 2;
            }
            cout<<a/b<<endl;
        }
        catch(int i)
        {
            cout << "do not divide by 0" << endl;
        }
            break;

        default:
            return 0;
    }

}