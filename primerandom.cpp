#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{ if(n==0||n==1) return 0;
if(n==2) return 1;
if(n%2==0) return 0;
for(int i=2;i<=sqrt(n)+10;i++)
    if(n%i==0) return 0;
return 1;


}
int main()
{ srand(time(NULL));
    vector <int> a;
  while(a.size()<2)
  { int n=rand()%1000;
      if(isprime(n))
      {
          a.push_back(n);
      }
  }
  cout<<a[0]<<" "<<a[1];



}
