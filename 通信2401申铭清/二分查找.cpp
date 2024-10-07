#include <iostream>
#include <vector>
using namespace std;

// 二分查找函数，返回目标值在数组中的索引，如果未找到则返回-1
int binarySearch(const vector<int>& nums, int target) {
    int left = 0; // 定义左边界
    int right = nums.size() - 1; // 定义右边界

    while (left <= right) { // 当左边界小于等于右边界时循环
        int mid = left + (right - left) / 2; // 防止溢出，计算中间位置
        if (nums[mid] == target) { // 如果中间位置的数正好是目标值
            return mid; // 返回该位置的索引
        } else if (nums[mid] < target) { // 如果中间位置的数小于目标值
            left = mid + 1; // 调整左边界为中间位置的下一个位置
        } else { // 如果中间位置的数大于目标值
            right = mid - 1; // 调整右边界为中间位置的前一个位置
        }
    }

    // 循环结束仍未找到目标值，返回-1
    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12}; // 示例数组
    int target = 9; // 要查找的目标值
    int result = binarySearch(nums, target); // 执行二分查找

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}