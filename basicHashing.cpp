//I will show you some basic of Hashing with some examples here.Then we will go through contest problems.
// Problem 01(Given nums and target, return indices i, j with nums[i]+nums[j]=target.)


#include <bits/stdc++.h> // GCC-only header that pulls in almost all standard headers.
using namespace std;// Avoids writing std:: everywhere (e.g., vector, unordered_map).

vector<int> twoSum(const vector<int>& p , int target){
    unordered_map<int,int> pos;
    for(int i=0;i < (int)p.size();i++){
        int rest = target - p[i];
        if(pos.count(rest)) return {pos[rest],i};
        pos[p[i]] = i;
        
    }
    return {};
}

// Problem 02(Are strings s and t anagrams?)

bool isAnagram(const string& s, const string& t){
    if ( s.size() != t.size()) return false;
    array<int,256> count{};
    for (char c : s) count[(unsigned char)c]++;
    for (char c:t) if (--count[(unsigned char)c]<0)return false;
    return true;
}

// Problem 03(

