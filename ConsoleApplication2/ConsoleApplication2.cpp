// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <map>  

#include <string>  

#include <iostream>  
#include <vector>
#include <unordered_map>
#include <iterator>

using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};



int lengthOfLongestSubstring(string s) {
	int character[128];
	memset(character, -1, sizeof(character));//初始化数组
	int left = 0;//窗口左指针
	int right = 0;//窗口右指针
	int length = s.length();
	int ans = 0;
	int max = 0;//最大窗口长度
	if (length==0)
	{
		return 0;//特殊处理
	}
	character[s[0]] = 0;
	while (right<length-1)//注意：字符串最后一个char是\0
	{
		right++;
		if (left<=character[s[right]])
		{
			//如果right位置上出现的字母在left鸡left的右侧（窗口内出现重复字母），将left调整到该字母的右侧
			left = character[s[right]]+1;
		}
		//更新字母最新出现的位置
		character[s[right]] = right;
		//更新区间长度
		ans = right - left;
		if (ans>max)
		{
			max = ans;
		}
	}

	return max+1;
}

int main()
{
	lengthOfLongestSubstring("au");

	return 0;
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
