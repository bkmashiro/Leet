// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


string tree2str(TreeNode* root) {
	if (root==nullptr)
	{
		return "";
	}
	//左子树为空，右子树不为空
	if (root->left==nullptr&&root->right!=nullptr)
	{
		return std::to_string( root->val) + "()("+tree2str(root->right)+")";
	}
	//左子树不为空，右子树为空
	if (root->left!=nullptr&&root->right==nullptr)
	{
		return std::to_string( root->val )+"(" + tree2str(root->left) + ")";
	}
	//左右子树都为空
	if (root->left==nullptr&&root->right==nullptr)
	{
		return std::to_string(root->val);
	}
	else {
		return std::to_string(root->val)+"(" + tree2str(root->left)+")(" + tree2str(root->right)+")";
	}
}

int main()
{
	std::cout << "Hello World!\n";
	TreeNode t1 = TreeNode(1);
	TreeNode t2 = TreeNode(2);
	TreeNode t3 = TreeNode(3);
	TreeNode t4 = TreeNode(4);
	t1.left = &t2;
	t1.right = &t3;
	t2.left = &t4;

	std::cout << tree2str(&t1);
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
