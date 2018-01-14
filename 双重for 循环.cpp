#include<iostream>
#include<string>
using namespace std;
class Solution 
{
public:
    int strStr(string haystack, string needle) 
	{
        if (haystack.empty() && needle.empty()) return 0;
        if (haystack.empty()) return -1;
        if (needle.empty()) return 0;
        // in case of overflow for negative
        if (haystack.size() < needle.size()) return -1;

        for (int i = 0; i < haystack.size() - needle.size() + 1; i++) 
		{
            string::size_type j = 0;
            for (; j < needle.size(); j++) 
			{
                if (haystack[i + j] != needle[j]) break;
            }
            if (j == needle.size()) return i;
        }
        return -1;
    }
};
int main()
{
	string haystack;
	string needle;
	Solution A;
	cout<<"ÊäÈëÔ´×Ö·û´®£º"<<endl;
	cin>>haystack;
	cout<<"ÊäÈëÄ¿µÄ×Ö·û´®£º"<<endl;
	cin>>needle;
	cout<<A.strStr(haystack,needle)<<endl;
 return 0;
}

