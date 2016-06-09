#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pad="ncbtzqarx";
    string text="howareyou";
    string ct,pt;
    for(int i=0;i<pad.length();i++)
    {
        ct[i]=((text[i]-'a'+pad[i]-'a')%26)+'a';cout<<ct[i]<<endl;
    }
    for(int i=0;i<pad.length();i++)
    {
        pt[i]=(((ct[i]-'a')-(pad[i]-'a')+26)%26)+'a';cout<<pt[i];
    }
}
