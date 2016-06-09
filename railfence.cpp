#include<bits/stdc++.h>
using namespace std;
int main()
{ string s;cin>>s;int k=0;int n;
if(s.length()%2!=0)
 n=s.length()/2 +1;
 else n=s.length()/2;

    char arr[2][n];
    arr[1][n-1]='\0';
  for(int i=0;i<n;i++)
  {
      arr[0][i]=s[k];
      k=k+2;
      cout<<arr[0][i]<<endl;
  }
  k=1;
  for(int i=0;i<n;i++)
  {
      arr[1][i]=s[k];
      k=k+2;
      cout<<arr[1][i]<<endl;
  }
  cout<<"encrypted";
  for(int i=0;i<2;i++)
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<endl;
    cout<<"decrypted";
  for(int j=0;j<n;j++)
    for(int i=0;i<2;i++)
    cout<<arr[i][j]<<endl;

}
