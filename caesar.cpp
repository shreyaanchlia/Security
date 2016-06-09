#include<bits/stdc++.h>
using namespace std;
int main()
{ string s="comehere";int k;cin>>k;
  for(int i=0;i<s.length();i++)
  {  s[i]=((s[i]-'a'+k)%26)+'a';
  }
  cout<<s;
  for(int i=0;i<s.length();i++)
  {
      s[i]=((s[i]-'a'-k+26)%26)+'a';

  }
  cout<<endl<<s;
}
