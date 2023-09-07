//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends

#include<bits/stdc++.h>

string maximumFrequency(string s){   // !         WA
        // Complete the function
        // Complete the function
        string temp;
        vector <string> v;
        
        for(int i = 0; i <(int)s.size(); i++)
        {
            if(s[i] ==' ')
            {
                v.push_back(temp);
                temp.clear();
            }
            else temp+=s[i];
        }
        map<string,int> mp;
        for(auto u : v)
        {
            mp[u]++;
        }
        int m =INT_MIN;
        string key ;
        map<string,int>:: iterator it;
        
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(m < it->second)
            {
                m = it->second;
                key = it->first;
            }
        }
        
        key = key + " " + (char)(m+'0');
        return key;
}

