#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

    int n;cin>>n;

    string s;

    for (int i = 0; i < n; i++)
    {
        cin>>s;

        for (char &c : s) {
            c = toupper(c);
        }
        if (s=="YES")
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        

    }
    

    return 0;
}