/* #include <iostream>
using namespace std;
class a
{
    int n;

public:
    void input()
    {
        cout << "enter a number";
        cin >> n;
        cout << "n=" << n;
    }
};
class b : public a
{
};
class c : public a
{
};
class d : public b, public c
{
};
int main()
    d obj;
obj.input(); */


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
       /*  vector<pair<int, int>>vec={{3,1},{3,1},{2,1},{5,7}};
        sort(vec.begin(),vec.end());
        for (auto p: vec)
        {
            cout<<p.first<<" "<<p.second<<endl;
        }
        return 0;
 }

 */

 // STRING 11/08/25

/* string name;
getline(cin,name);
for(int i=0; i<name.length();i++)
cout<<name[i]<<endl; */


/* string name;
getline(cin,name);
for(int i=0; i<name.length();i++){

cout<<name.substr(0,i+1)<<endl; */

/* string s1="broo" , s2="mance";
s1.swap(s2);
cout<<s1;
return 0; */

    int count = 0, n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        cout << "yes";
    else
        cout << "not a prime number";


        
        bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
}

