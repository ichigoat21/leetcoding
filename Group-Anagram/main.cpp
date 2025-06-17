#include<iostream> 
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>
//this is my 9th leetcode PROBLEM 

//MY FIRST APPROACH I HAVE in steps are;

/*
1. Sort the strings in the VECTOR // bad approach 

2. STORE IT IN A DATA STRUCTURE, I WILL USE UNORDERED MAP

3. ITERATE OVER IT, FIND THE SAME STRINGS 

4. STORE THEM AGAIN, RETURN THE VECTOR 

5. PUSH IT TO THE GLOBAL VECTOR
*/ 

//hashmap the string elements
//check for the same mapping 
//group them 


int main(){
   std::vector<std::string> str = {"eat", "ate", "tea", "nat", "tan", "bat"};
   std::unordered_map<int, std::vector<std::string>> res;
   for (const auto& s : str) {
      std::vector<int> count(26, 0);
      for (char c : s) {
          count[c - 'a']++;
      }
      int key = (count[0]);
      for (int i = 1; i < 26; ++i) {
          key += (count[i]);
      }
      res[key].push_back(s);
      std::cout << key << std::endl;
  }
   std::vector<std::vector<std::string>> result;
   for (const auto & i : res){
      result.push_back(i.second);
   }
}


