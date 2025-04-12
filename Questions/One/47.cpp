/* 47. 文件data.txt中存放大量整数，
输入要读取的整数的个数，
打开该文件并在屏幕上显示读取结果，
再对这些整数从小到大排序，
将排序结果存入res.txt文件。 */
#include <iostream>
#include <fstream>

using namespace std;

// 冒泡排序函数
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main( )
{
    int count;
    cout << "请输入要读取的整数的个数: ";
    cin >> count;

    ifstream inFile("data.txt");
    if (!inFile)
    {
        cerr << "无法打开 data.txt 文件。" << endl;
        return 1;
    }

    int* numbers = new int[count];
    int num;
    for (int i = 0; i < count && inFile >> num; ++i)
    {
        numbers[i] = num;
    }
    inFile.close( );
    cout << "读取的整数为: ";
    for (int i = 0; i < count; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    // 调用自定义的冒泡排序函数
    sort(numbers, count);
    ofstream outFile("res.txt");
    if (!outFile)
    {
        cerr << "无法打开 res.txt 文件。" << endl;
        delete[] numbers;
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        outFile << numbers[i] << " ";
    }
    outFile.close( );
    cout << "排序结果已存入 res.txt 文件。" << endl;
    // 释放动态分配的内存
    delete[] numbers;
    return 0;
}