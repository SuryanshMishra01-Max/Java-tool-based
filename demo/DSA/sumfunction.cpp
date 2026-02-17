#include <bits/stdc++.h>
using namespace std;
/* int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int main()
{
    int num1, num2;
    cout << "enter num1" << endl;
    cin >> num1;
    cout << "enter num2" << endl;
    cin >> num2;
    int result = sum(num1, num2);
    cout << "the result is:";
    cout << result;
}
 */

/* int maxx(int num1, int num2)
{                                     
    if (num1 >= num2)
    {
        return num1;
    }
    return num2;
}
int main()
{
    int num1, num2;
    cout << "enter number1:";
    cin >> num1;
    cout << "enter number2:";
    cin >> num2;
    int maximum = maxx(num1, num2);
    cout << maximum;
    return 0;
} */

/* int main(){
    int n=50;
    int sum=0;
    for (int i=0; i<=n; i++){
        sum += i;
    }
    cout<<" sum ="<< sum<<endl;
}
 */
/* int main(){
    int n=50;
    int sum=0;
    int i=0;
    while(i<=n){
        sum += i;
        cout<<"sum is"<<sum<<endl;
        i++;
        }
} */
 int main(){
    int sum=0,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=0;i<=n; i++){
        if(i%2 !=0){
            sum += i;
            cout<<"sum is :"<<sum<<endl;
            
            i++;
            
        }
        else if(i%2==0){
            cout<<"number you entered is even try a odd number"<<endl;
        }
        else{
            cout<<"invalid input";
        }
    }
 }