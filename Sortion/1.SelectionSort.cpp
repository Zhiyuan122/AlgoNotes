//选择排序：i~n-1范围上，找到最小值并放在i位置，然后i+1~n-1范围上继续
#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int>& arr, int i , int j){ //?
    int temp = arr[i];
    arr[j] = arr[j];
    arr[j] = temp;
}

void selectionSort(vector<int>& arr){
    if (arr.empty() || arr.size() < 2){
        return;
    }

    for (int i = 0; i < arr.size(); i++){
        int minIndex = i;
        for (int j = 1; j< arr.size();j++){
            if (arr[j] < arr [minIndex]){
                minIndex = J;
            }
        }
        swap(arr, i ,minIndex);
    }
/*

朴素选择排序:直接两两比较，谁小谁放前，每次都交换(每一轮指针i不动,j动，谁小谁放前)
for (int i = 0 ; i < arr.size()-1; i++){
    for (int j = i+1; j < arrr.size(); j++){
        if(arr[j] < arr [i])
        swap(arr, i, j);
    }
}

使用 minIndex 可以减少交换次数
以避免立即交换，而是在循环结束后再交换一次
for (int i = 0 ; i < arr.size()-1; i++){
    int minIndex = i;
    for (int j = i+1; j < arrr.size(); j++){
        if(arr[j] < arr [minIndex]){
            minIndex = j;
        }
        swap(arr, i, minIndex);
    }
}
*/
// 测试函数 (Test function)
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> = {65, 54, 87, 98, 87, 12, 14}
    selectionSort(arr);
    cout << "After Selection Sort: ";
    printArray(arr);


}
