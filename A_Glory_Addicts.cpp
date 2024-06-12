#include<bits/stdc++.h>
#include<vector>
#include<deque>
using namespace std;
typedef long long L;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);
int t;
cin>>t;
while (t--)
{
        int n;
        cin>>n;
        int skill[n];

        vector<L>ones;
        vector<L>zeros;

        L sum=0;

        for (int i = 0; i < n; i++)
        {

           cin>>skill[i];
        }
        for (int i = 0; i < n; i++)
        {

           int p;
           cin>>p;
           if (skill[i]==1)
           {
            ones.push_back(p);
           }
           else zeros.push_back(p);


        }
        sort(ones.begin(),ones.end(),greater<int>());
        sort(zeros.begin(),zeros.end(),greater<int>());

        int o=ones.size();
        int z = zeros.size();

                    if (z>o)
            {

                for (int i = 0; i < o; i++)
                {
                    sum+=ones[i]*2;
                    sum+=zeros[i]*2;
                }
                for (int i = o; i < z; i++)
                {
                    sum+=zeros[i];
                }

                cout<<sum<<endl;

            }
            else if (o>z)
            {


                for (int i = 0; i < z; i++)
                {
                    sum+=ones[i]*2;
                    sum+=zeros[i]*2;
                }
                for (int i = z; i < o; i++)
                {
                    sum+=ones[i];
                }
                cout<<sum<<endl;
            }
            else if (z==o)
            {
                for (int i = 0; i < z; i++)
                {
                    sum+=ones[i]*2;
                    sum+=zeros[i]*2;

                }
                if (ones.back()<=zeros.back())
                {
                    sum-=ones.back();
                }
                else sum-=zeros.back();
                cout<<sum<<endl;


            }
}

}

