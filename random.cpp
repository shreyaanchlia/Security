#include<bits/stdc++.h>
using namespace std;
int freq[100];
int main()
{   for(int i=1;i<=100;i++)
    { int n=rand()%100;
 cout<<n<<endl;
     freq[n]++;
    }
    cout<<"frequencies"<<endl;
    for(int i=0;i<100;i++)
    { if(freq[i]!=0)

    cout<<i<<"has freq of"<<freq[i]<<endl;

    }
}
