//
// Created by 刘日亮 on 2023/4/16.
//
#include <iostream>
#include <vector>
template<class T, class I ,class V>
T BinarySearch(I begin, I end, T target ,V nums){
    I mid = begin + (end - begin)/2;
    while(begin <= end){
        if(nums[mid]==target)return nums[mid];
        else if(nums[mid]>target) end--;
        else begin++;
        mid = begin + (end - begin)/2;
    }

    return nums[mid];
}
using namespace std;
int main(){
    vector<int> numbers{1,2,3,4,5};
    int a = BinarySearch<int,int, vector<int> >(0,numbers.size()-1,3,numbers);
    cout<<a<<endl;

    return 0;
}