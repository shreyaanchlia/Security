#include<bits/stdc++.h>
using namespace std;
char arr[3][6];
int main()
{ string text="comehometomorrow";
  for(int i=0,ind=0;i<3;i++)
    for(int j=0;j<6,ind<text.length();j++)
        arr[i][j]=text[ind++];
  int order[6];
  for(int i=0;i<6;i++)
    cin>>order[i];
  string crypt="";
  for(int j=0;j<6;j++)
    for(int i=0;i<3;i++)
     crypt+=arr[i][order[j]];
  cout<<"encryption"<<crypt;
  text=crypt;

  for(int i=0,ind=0;i<3;i++)
    for(int j=0;j<6,ind<text.length();j++)
        arr[i][j]=text[ind++];

  for(int i=0;i<6;i++)
    cin>>order[i];
  crypt="";
  for(int j=0;j<6;j++)
    for(int i=0;i<3;i++)
     crypt+=arr[i][order[j]];
  cout<<"encryption2"<<crypt;





  //decryption
  for(int j=0,ind=0;j<6;j++)
    for(int i=0;i<3&&ind<crypt.size();i++)
    arr[i][order[j]]=crypt[ind++];
  cout<<"decryption"; string d;
  for(int i=0;i<3;i++)
    for(int j=0;j<6;j++)
  {cout<<arr[i][j];d+=arr[i][j];
  }
  cout<<endl<<d;


string de="";
  for(int j=0,ind=0;j<6;j++)
    for(int i=0;i<3&&ind<d.size();i++)
    arr[i][order[j]]=d[ind++];
  cout<<"decryption2";
  for(int i=0;i<3;i++)
    for(int j=0;j<6;j++)
  {cout<<arr[i][j];d+=arr[i][j];
  }
}
