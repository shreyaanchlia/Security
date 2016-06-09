#include<bits/stdc++.h>
using namespace std;
char arr[3][6];char d[3][6];
int main()
{ string s="comehometomorrow";
 for(int i=0,ind=0;i<3;i++)
    for(int j=0;j<6&&ind<s.length();j++)
     arr[i][j]=s[ind++];
string crypt="";
 int order[6];int i;
 for(i=0;i<6;i++)
    cin>>order[i];
    i=0;int k;
    for(int j=0;j<6;j++)
    {
        for(int i=0;i<3;i++)
      {
          crypt+=arr[i][order[j]];
      }
}
cout<<crypt<<endl;

s=crypt;

for(int i=0,ind=0;i<3;i++)
    for(int j=0;j<6&&ind<s.length();j++)
     arr[i][j]=s[ind++];
crypt="";
 for(i=0;i<6;i++)
    cin>>order[i];
    i=0;
    for(int j=0;j<6;j++)
    {
        for(int i=0;i<3;i++)
      {
          crypt+=arr[i][order[j]];
      }
}
cout<<crypt<<endl;

for(int j=0,ind=0;j<6;j++)
    {for(int i=0;i<3&&ind<crypt.size();i++)
{
    arr[i][order[j]]=crypt[ind++];

}
    }
    string d;
    cout<<"decryption";
    for(int i=0;i<3;i++)
        for(int j=0;j<6;j++){
        cout<<arr[i][j]<<endl;
        d+=arr[i][j];
        }

for(int j=0,ind=0;j<6;j++)
    {for(int i=0;i<3&&ind<d.size();i++)
{
    arr[i][order[j]]=d[ind++];

}
    }
    cout<<"decryption";
    for(int i=0;i<3;i++)
        for(int j=0;j<6;j++){
        cout<<arr[i][j]<<endl;
        d+=arr[i][j];
        }

}

