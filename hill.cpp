#include<bits/stdc++.h>
using namespace std;
int main()
{ string s;cin>>s;int arr[s.length()];
 for(int i=0;i<s.length();i++)
 { arr[i]=int(s[i])-97;
     cout<<arr[i]<<endl;
 }
    int key[3][3]={ {6,24,1},{13,16,10},{20,17,15}};
  int mul[3] = {0,0,0};
  for(int i=0;i<3;i++)
 { for(int j=0;j<3;j++)
  mul[i]+=arr[j]*key[i][j];
     cout<<mul[i]%26<<endl;
}


int m[3];
for(int i=0;i<3;i++)
m[i]=mul[i]%26;
//yaha pr conversion krna h;
s[0]=m[0]+'a';
cout<<s[0]<<endl;

int ikey[3][3]= { {8,5,10},{21,8,21},{21,12,8}
};
int imul[3] ={0,0,0};
for(int i=0;i<3;i++)
 { for(int j=0;j<3;j++)
  imul[i]+=m[j]*ikey[i][j];
     cout<<imul[i]%26<<endl;
}

}
