#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int next[101];
void getnext(char s[])
{
    int i=0,j=-1;
    next[0]=-1;
    int len=strlen(s);
    while(i<len)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
            if(s[i]!=s[j]) next[i]=j;
            else next[i]=next[j];
        }
        else j=next[j];
    }
}
int kmp(char s1[],char s2[])
{
    int i,j;
    i=j=0;
    int len1=strlen(s1);
    int len2=strlen(s2);
    while(i<len1&&j<len2)
    {
        if(j==-1||s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else j=next[j];
    }
    if(j==len2)
        return i-len2+1;
    else return -1;
}
int main()
{
    char s1[101],s2[101];
    while(cout<<"ÊäÈëÔ´×Ö·û´®:"<< endl  <<"ÊäÈëÄ¿µÄ×Ö·û´®:"<<endl,
		cin>>s1>>s2)
    {
        getnext(s2);
        int x=kmp(s1,s2);
        if(x!=-1) cout<<"1\n";
        else cout<<"-1\n";
    }
    return 0;
}

