#include<bits/stdc++.h>
 using namespace std;
bool isprime(long long n)
{ if(n==0||n==1) return 0;
if(n==2) return 1;
if(n%2==0) return 0;
for(long long i=2;i<=sqrt(n)+10;i++)
    if(n%i==0) return 0;
return 1;


}
long long p(long long a,long long b,long long n)
{   long long c=1;
    for(long long i=1;i<=b;i++)
    c=c*a%n;
    return c;
}
int main()
{ srand(time(NULL));
    vector <long long> a;
  while(a.size()<2)
  { long long n=rand()%1000;
      if(isprime(n))
      {
          a.push_back(n);
      }
  }
  cout<<a[0]<<" "<<a[1];

long long g=a[0];long long n=a[1];
srand(time(NULL));
long long x=rand()%100;
long long y=rand()%100;
cout<<endl<<x<<" "<<y;
long long A=p(g,x,n);
long long B=p(g,y,n);
long long k1=p(B,x,n);
long long k2=p(A,y,n);
cout<<"keys are"<<k1<<"  "<<k2;
}

