#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int cou=0;

        if (b>a)
        {
            cou++;
        }
        if (c>a)
        {
            cou++;
        }
        if (d>a)
        {
            cou++;
        }
        cout<<cou<<endl;
    }
    
    return 0;
}