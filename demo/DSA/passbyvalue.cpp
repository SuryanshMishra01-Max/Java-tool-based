#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* int passbyvalue(int num)
     {
        cout << num << endl;
        num += 5;
        cout << num << endl;
        num += 5;
        cout << num << endl;
    }
    int main()
    {
        int num = 10;
        passbyvalue(num);
        cout << num << endl;
        return 0;
    }  */

    /* int main()
    {
        int n;
        cout << "enter number";

        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        cout << "you entered :";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    } */

    /* void printNumber(int num)
    {

        cout << num;
    }
    int main()
    {
        int num;
        cout << "enter a number";
        cin >> num;

        printNumber(num);

        return 0;
    } */

    /*     do
        {
            cout << "hello bro";
        } while (3 > 5);
        return 0;
    } */

    /* for (i=0; i<=n i++){
        if(n%==0)
    }
        }
    } */

    int n = 7;
    bool isprime = true;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % 2 == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "prime number";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}
