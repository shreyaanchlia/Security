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
long long foo(long long a,long long b,long long n)
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
long long p=a[0];long long q=a[1];
long long N=p*q;
long long E=0;long long D=1;
long long t=(p-1)*(q-1);
srand(time(NULL));
while(E==0)
{long long m=rand()%100;
 if(t%m!=0)
    E=m;
}
cout<<"encryp"<<E;
while((D*E)%t!=1)
    D=D+1;
cout<<"decryp"<<D;
}
