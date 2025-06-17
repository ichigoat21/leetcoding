#include<vector>
#include<algorithm>
#include<unordered_map>
#include<iostream>

int main (){
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    std::unordered_map<int, int> hashMap;
    int k = 2;
    int size = sizeof(nums) / sizeof(nums[0]); 
    for (int i = 0; i < size; i++){
       hashMap[nums[i]]++;
    }
    std::vector <std::pair <int, int>> v;
    for (const auto & i : hashMap){
        v.push_back({i.first, i.second});
    }
    std::sort(v.rbegin(), v.rend()); //doing this bc we want the vector in descending order
    std::vector<int> res;
    for (int i = 0; i < k; i++){
        res.push_back(v[i].second);
    }
    for (const auto & i : res){
        std::cout << i << std::endl;
    }
}