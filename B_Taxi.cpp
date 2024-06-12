#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int group[5]={0};

    while (n--)
    {
        int size;
        cin>>size;
        group[size]++;
    }
    int taxi=0;

    taxi+=group[4];

    taxi+=group[3];
    group[1]-=min(group[3],group[1]);

    taxi+=group[2]/2;
    group[2]%=2;

    if (group[2]>0)
    {
        taxi++;
        group[1]-=min(2,group[1]);
    }

    taxi+=(group[1]+3)/4;
    cout<<taxi<<endl;
    
}