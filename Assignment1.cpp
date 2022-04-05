// Assignment1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;
const int NUM = 26;
const string wordlist[NUM] = { "alabama", "choice", "usually",
"dangerous", "deer", "panda", "love", "health", "exciting",
"interesting", "administrator", "professional", "manage", "nonce", "onset",
"typeid", "quarter", "remote", "lovely", "car", "keeper",
"valid", "where", "mean", "important", "last" };//供游戏的单词库



int main() {
    int x;
    cout << "Welcome to Werdle" << endl;
    cout << "Select an option" << endl;
    cout << "1.Play a game" << endl;
    cout << "2.View statistic" << endl;
    cout << "3.View help" << endl;
    cin >> x;
    while (x == 1)
    {
        string first(wordlist[rand() % NUM]);
        int length = first.length();
        string player(length, '-');

    }
}
void PlayGame() {

}
void guess() {

}
void dictionary() {

}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
