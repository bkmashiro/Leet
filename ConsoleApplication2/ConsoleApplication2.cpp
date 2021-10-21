// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <map>  

#include <string>  
#include <stack>
#include <iostream>  
#include <vector>
#include <unordered_map>
#include <iterator>
#include <queue>

using namespace std;

//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};



#pragma region MyRegion

//int helper(vector<int>& nums, int low, int high) {
//	if (low == high)
//	{
//		return nums[low];
//	}
//	int mid = (low + high) / 2;
//	int lmax = helper(nums, low, mid);
//	int rmax = helper(nums, mid + 1, high);
//	int lrmax = max(lmax, rmax);
//
//	int leftsum = 0;
//	int maxleftsum = -2147483647;
//	for (int i = mid; i >= low; i++)
//	{
//		leftsum += nums[i];
//		if (leftsum > maxleftsum)
//		{
//			maxleftsum = leftsum;
//		}
//	}
//
//	int rightsum = 0;
//	int maxrightsum = -INFINITY;
//	for (int i = mid + 1; i <= high; i++)
//	{
//		rightsum += nums[i];
//		if (rightsum > maxrightsum)
//		{
//			maxrightsum = rightsum;
//		}
//	}
//	return max(lrmax, maxleftsum + maxrightsum);//跨越中点的和左右最大的
//}
//
//int maxSubArray(vector<int>& nums) {
//	int maxSum = -2147483648;
//	int pre = 0;
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		pre = max(pre + nums[i], nums[i]);
//		if (pre > maxSum)
//		{
//			maxSum = pre;
//		}
//	}
//	return maxSum;
//}
//
//class MinStack {
//public:
//	/** initialize your data structure here. */
//	MinStack() {
//		stack1 = stack<int>();
//		stack2 = stack<int>();
//	}
//	stack<int> stack1;
//	stack<int> stack2;
//	int minint = 2147483647;
//	void push(int x) {
//		stack1.push(x);
//		if (!stack2.empty())
//		{
//			stack2.push(std::min(stack2.top(), x));
//		}
//		else
//		{
//			stack2.push(x);
//		}
//	}
//
//	void pop() {
//		stack1.pop();
//		stack2.pop();
//	}
//
//	int top() {
//		return stack1.top();
//	}
//
//	int min() {
//		return stack2.top();
//	}
//};
//
//bool isPalindrome(int x) {
//	if (x < 0 || (x % 10 == 0 && x != 0))
//	{
//		return false;
//	}
//	int y = x;
//	int z = 0;
//	while (y != 0)
//	{
//		z *= 10;
//		z += y % 10;
//		y /= 10;
//	}
//	return z == x;
//}
//
//double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//	int p1 = 0;
//	int p2 = 0;
//	int size1 = nums1.size();
//	int size2 = nums2.size();
//	int l = 0;
//	int r = 0;
//	for (size_t x = 0; x <= (size1 + size2) / 2; x++)
//	{
//
//		l = r;//左中位数
//		////右中位数
//		////移动更小的
//		//if	(p1<size1 && //p1超出数组1
//		//	(p2>=size2 || 
//		//	nums1[p1]<nums2[p2]))
//		//{
//		//	
//		//}
//		//(i < m && (j >= n || nums1[i] < nums2[j]))
//		if (p1 < size1	//移动更小的
//			&& (p2 >= size2	//如果p1已经在nums1的末尾，仅移动p2，舍弃nums1内的数值
//				|| nums1[p1] < nums2[p2])			//若p2在数组末尾，仅移动p1
//			)
//		{
//			r = nums1[p1++];
//			cout << p1 << endl;
//		}
//		else
//		{
//			r = nums2[p2++];
//			cout << p2 << endl;
//		}
//	}
//	return (size1 + size2) % 2 == 0 ? ((double)l + (double)r) / 2.0 : r;
//}
//
//double myPow(double x, int n) {
//	if (n < 0) {
//		n = -n;
//		x = 1 / x;
//	}
//	if (n == 0) {
//		return 1;
//	}
//	else if (n % 2 == 1) {
//		return myPow(x, n - 1) * x;
//	}
//	else {
//		double temp = myPow(x, n / 2);
//		return temp * temp;
//	}
//	throw;
//}
//
//int divide(int dividend, int divisor) {
//	typedef long long LL;
//	vector<LL> exp;
//	int x = dividend, y = divisor;
//
//	bool minus = false;
//	if (x < 0 && y > 0 || x > 0 && y < 0) minus = true;
//	// 记录符号
//
//	LL a = abs((LL)x), b = abs((LL)y);
//	for (LL i = b; i <= a; i = i + i) exp.push_back(i);
//	// exp 每次放入 b * (2 的几次方)
//
//	LL ans = 0;
//	for (int i = exp.size() - 1; i >= 0; i--) {
//		if (a >= exp[i]) { // 如果大于那一个值，由进制原理得，那一位数字为 1 
//			a -= exp[i];   // 减去
//			ans += 1LL << i; // 1 << i == 2 的 i 次方， 1LL 是 longlong 类型的 1
//		}
//	}
//
//	if (minus) ans = -ans; // 加上符号
//
//	if (ans > INT_MAX || ans < INT_MIN) ans = INT_MAX; // 特殊数据处理
//	return ans;
//}
//
////Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//TreeNode* getxnode(TreeNode* root, int x) {
//	
//	if (root->val == x)
//	{
//		return root;
//	}
//	if (root->left != nullptr)
//	{
//		TreeNode* t = getxnode(root->left, x);
//		if (t!=nullptr)
//		{
//			return t;
//		}
//	}
//	if (root->right != nullptr)
//	{
//		TreeNode* t = getxnode(root->right, x);
//		if (t != nullptr)
//		{
//			return t;
//		}
//	}
//}
//int getcount(TreeNode* tr) {
//	int cnt = 1;
//	if (tr->left != nullptr)
//	{
//		cnt += getcount(tr->left);
//	}
//	if (tr->right != nullptr)
//	{
//		cnt += getcount(tr->right);
//	}
//	return cnt;
//}
//bool btreeGameWinningMove(TreeNode* root, int n, int x) {
//	//找到一个节点，使得这个节点上的节点数目大于n/2
//	//左右子树
//	TreeNode* t = getxnode(root, x);
//	int l = 0, r = 0;
//	if (t->left != nullptr)
//	{
//		l = getcount(t->left);
//		cout << l << endl;
//	}
//	if (t->right != nullptr)
//	{
//		r = getcount(t->right);
//		cout << r << endl;
//	}
//	if (l > n / 2 || r > n / 2)
//	{
//		return true;
//	}
//	if (l + r < n / 2)
//	{
//		return true;
//	}
//	return false;
//}
#pragma endregion


//vector<int> twoSum(vector<int>& nums, int target) {
//	unordered_map<int, int> map;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		auto it = map.find(nums[i] - target);
//		if (it!=map.end())
//		{
//			return {i, it->second };
//		}
//		map[nums[i]] = i;
//	}
//}
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//	int p1 = m - 1;
//	int p2 = n - 1;
//	int cur = nums1.size() - 1;
//	if (p2 < 0)
//	{
//		return;
//	}
//	//比较nums1末尾非零元素（最大数）与nums2中的最大数
//	while ((p1>=0||p2>=0)&&cur>=0)
//	{
//		if (p1>=0&&p2>=0) {
//			if (nums1[p1]>=nums2[p2])
//			{
//				nums1[cur--] = nums1[p1--];
//			}
//			else
//			{
//				nums1[cur--] = nums2[p2--];	
//			}
//		}
//		else
//		{
//			if (p1>0)//p2<0
//			{
//				nums1[cur--] = nums1[p1--];
//			}
//			else//p1<0
//			{
//				nums1[cur--] = nums2[p2--];
//			}
//		}
//	}
//}

 // Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//
//	ListNode* middleNode(ListNode* head) {
//        int cnt = 0;
//		ListNode* fast = head;
//		ListNode* slow = head;
//		while (fast->next!=nullptr&&fast->next->next!=nullptr)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		return slow;
//	}


//Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};

//Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//
//vector<int> reversePrint(ListNode* head) {
//	stack<int> stk;
//	ListNode* cur = head;
//	while (cur!=nullptr)
//	{
//		stk.push(cur->val);
//		cur = cur->next;
//	}
//	vector<int> v;
//	while (!stk.empty())
//	{
//		v.push_back(stk.top());
//		stk.pop();
//	}
//	return v;
//}


//Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//
//ListNode* reverseList(ListNode* head) {
//	if (head==nullptr)
//	{
//		return nullptr;
//	}
//	if (head->next==nullptr)
//	{
//		return head;
//	}
//
//	ListNode* curl = head;
//	ListNode* curr = head->next;
//
//	ListNode* tmp = nullptr;
//	while (curr!=nullptr)
//	{
//		if (curr->next!=nullptr)
//		{
//			tmp = curr->next;
//		}
//		else
//		{
//			curr->next = curl;
//			break;
//		}
//		curr->next = curl;
//		curl = curr;
//		curr = tmp;
//	}
//	head->next = nullptr;
//	return curr;
//}

// Definition for a Node.
//class Node {
//public:
//	int val;
//	Node* next;
//	Node* random;
//
//	Node(int _val) {
//		val = _val;
//		next = NULL;
//		random = NULL;
//	}
//};
//
//Node* copyRandomList(Node* head) {
//	Node dummy = Node(0);
//	Node* cur = head;
//	Node* prev = &dummy;
//	while (cur!=nullptr)
//	{
//		Node n = Node(cur->val);
//		prev->next = &n;
//		prev = &n;
//		cur = cur->next;
//	}
//
//	return dummy.next;
//}
//int tribonacci(int n) {
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 1;
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	for (size_t i = 0; i < n; i++)
//	{
//		a = b;
//		b = c;
//		c = d;
//		d = a + b + c;
//	}
//	return d;
//}
//int climbStairs(int n) {
//	if (n==0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	for (size_t i = 0; i < n-2; i++)
//	{
//		a = b; b = c;
//		c = a + b;
//	}
//	return c;
//
//}

//int minCostClimbingStairs(vector<int>& cost) {
//	int n = cost.size();
//	vector<int> vct(n+1);
//	vct[0] = 0;
//	vct[1] = 0;
//	int cnt=1;
//	for (size_t i = 2; i <= n; i++)
//	{
//		vct[i] = min(vct[i - 1] + cost[i - 1], vct[i - 2] + cost[i - 2]);
//	}
//	return vct[n];
//}

//string destCity(vector<vector<string>>& paths) {
//	unordered_map<string, string> map;
//	for (int i = 0; i < paths.size(); i++)
//	{
//		map[paths[i][0]] = paths[i][1];
//	}
//	for (int i = 0; i < paths.size(); i++)
//	{
//		if (map.find(paths[i][1])==map.end())
//		{
//			return paths[i][1];
//		}
//	}
//	return paths[0][1];
//}
//int arrangeCoins(int n) {
//	long sum = 0;
//	int level = 1;
//	while (n>=sum)
//	{
//		++level;
//		sum = level * (level + 1) / 2;
//	}
//	return level;
//}
//string longestCommonPrefix(vector<string>& strs) {
//	if (strs.size()==1)
//	{
//		return strs[0];
//	}
//	int m = -1;
//	bool isDone = false;
//	while (!isDone)
//	{
//		++m;
//		
//		for (int j = 0; j < strs.size()-1; j++)
//		{
//			if (strs[j]=="")
//			{
//				return "";
//			}
//			if (m<strs[j].length()&& m < strs[j+1].length() &&strs[j][m] != strs[j + 1][m]|| m == strs[j].length() || m == strs[j + 1].length())
//			{
//				isDone = true;
//				break;
//			}
//		}
//	}
//	return strs[0].substr(0, m);
//}

//vector<string> singles = { "", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine" };
//vector<string> teens = { " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen" };
//vector<string> tens = { "", " Ten", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety" };
//vector<string> thousands = { "", " Thousand", " Million", " Billion" };
//
//string numberToWords(int num) {
//	//按照3位分割
//	vector<int> nums;
//	while (num>0)
//	{
//		nums.push_back(num % 1000);
//		num /= 1000;
//	}
//	return "";
//}
//string helper(int num) {
//	if (num<10)
//	{
//		return singles[num];
//	}
//	if (num<20)
//	{
//		return teens[num%10];
//	}
//	if (num<100)
//	{
//		return tens[num / 10] + singles[num % 10];
//	}
//	if (num<1000)
//	{
//		return singles[num / 100] + helper(num % 100);
//	}
//	return "";
//}
//int maxProfit(vector<int>& prices) {
//
//	vector<int> diff = vector<int>(prices.size());
//	diff[0] = prices[0];
//	for (int i = 1; i < prices.size(); i++)
//	{
//		diff[i] = prices[i] - prices[i - 1];
//	}
//
//	int maxProfit = 0;
//
//	for (int i = 0; i < diff.size(); i++)
//	{
//		maxProfit = min(maxProfit, maxProfit + diff[i]);
//	}
//	return maxProfit;
//}
//int rob(vector<int>& nums) {
//	int m = 0;
//	if (nums.empty())
//	{
//		return 0;
//	}
//	if (nums.size()==1)
//	{
//		return nums[0];
//	}
//	if (nums.size()==2)
//	{
//		return max(nums[0], nums[1]);
//	}
//	vector<int> dp = vector<int>(nums.size(),0);
//	dp[0] = nums[0]; dp[1] = max(nums[0], nums[1]);
//	for (int i = 2; i < nums.size(); i++)
//	{
//		nums[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
//	}
//	return dp[nums.size()];
//
//}
//unordered_map<char, char> mapping { {')','('},{']','['}, {'}','{'}};
//bool isValid(string s) {
//	stack<char> stk;
//	for (int i = 0; i < s.length(); i++)
//	{
//		char c = s.at(i);
//		if (c=='('||c=='{'||c=='[')
//		{
//			stk.push(c);
//		}
//		else
//		{
//			if (stk.empty())
//			{
//				return false;
//			}
//			else
//			{
//				if (stk.top()==mapping.find(c)->second)
//				{
//					stk.pop();
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//	}
//	return stk.empty();
//}

//Definition for singly-linked list.
//int removeDuplicates(vector<int>& nums) {
//	if (nums.size() < 2)
//	{
//		return nums.size();
//	}
//	int p1 = 1; int p2 = 1;
//	while (p2 < nums.size()){
//		if (nums[p2] != nums[p2 - 1]){
//			nums[p1] = nums[p2];
//			++p1;
//		}
//		++p2;
//	}
//
//	return p1;
//}
//int removeDuplicates(vector<int>& nums) {
//	int n = nums.size();
//	if (n == 0) {
//		return 0;
//	}
//	int fast = 1, slow = 1;
//	while (fast < n) {
//		if (nums[fast] != nums[fast - 1]) {
//			nums[slow] = nums[fast];
//			++slow;
//		}
//		++fast;
//	}
//	return slow;
//}

//int maxProfit(vector<int>& prices) {
//	int cur = 0;
//	for (int i = 0; i < prices.size()-1; i++){
//		cur += prices[i + 1] > prices[i] ? prices[i + 1] - prices[i] : 0;
//	}
//	return cur;
//}
//vector<int> plusOne(vector<int>& digits) {
//	int last = digits.size() - 1;
//	for (int i = digits.size()-1; i >=0; i--)
//	{
//		if (digits[last] == 9)
//		{
//			digits[last] = 0;
//		}
//		else
//		{
//			digits[last]++;
//			return digits;
//		}
//	}
//	vector<int> ans = vector<int>(digits.size());
//	ans[0] = 1;
//	return ans;
//}
//vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//	int target = image[sr][sc];
//
//}
//void helper(vector<vector<int>>& image,int target,int newColor,int x,int y) {
//	if (image[x][y]==target)
//	{
//		image[x][y] = newColor;
//	}
//}
//int jump(vector<int>& nums) {
//	int size = nums.size();
//	if (size < 3) return 0;
//	int cnt = 0;
//	int index =size-1;
//	int left = 0;
//	while (index>0)
//	{
//		if (nums[left]>=index-left)
//		{
//			index = left;
//			left = -1;
//			++cnt;
//		}
//		left++;
//	}
//	return cnt;
//
//}
//vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
//	if (r*c!=mat.size()*mat[0].size())
//	{
//		return mat;
//	}
//	vector<vector<int>> vct(r,vector<int>(c));
//	int cnt = 1;
//	for (vector<int> v : mat) {
//		for (int num : v) {
//			vct[(cnt - 1) / c][(cnt - 1) % c] = num;
//			++cnt;
//		}
//	}
//	return vct;
//}
//int maxAreaOfIsland(vector<vector<int>>& grid) {
//	vector<int> x1 = {1,0,-1,0};
//	vector<int> y1 = {};
//}
//class Node {
//public:
//	int val;
//	Node* left;
//	Node* right;
//	Node* next;
//
//	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val, Node* _left, Node* _right, Node* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//Node* connect(Node* root) {
//
//}
//void helper(Node* root) {
//	if (root->left!=nullptr)
//	{
//		helper(root->left);
//	}
//	if (root->right != nullptr)
//	{
//		helper(root->right);
//	}
//	root->left->next == root->right;
//}


////Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//	if (root1==nullptr)
//	{
//		return root2;
//	}
//	if (root2 == nullptr)
//	{
//		return root1;
//	}
//	auto m = TreeNode(root1->val + root2->val);
//	m.left = mergeTrees(root1->left, root2->left);
//	m.right = mergeTrees(root1->right, root2->right);
//	return &m;
//}
//class Solution {
//private:
//    static constexpr int dirs[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
//        int m = matrix.size(), n = matrix[0].size();
//        vector<vector<int>> dist(m, vector<int>(n));
//        vector<vector<bool>> seen(m, vector<bool>(n));//
//        queue<pair<int, int>> q;
//        // 将所有的 0 添加进初始队列中
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                if (matrix[i][j] == 0) {
//                    q.emplace(i, j);
//                    seen[i][j] = true;
//                }
//            }
//        }
//        int i, j;
//        // 广度优先搜索
//        while (!q.empty()) {
//            i = q.front().first;
//            j = q.front().second;
//            q.pop();
//            for (int d = 0; d < 4; ++d) {
//                int ni = i + dirs[d][0];//从中心节点(i,j)向四个方向搜索
//                int nj = j + dirs[d][1];
//                if (ni >= 0 && ni < m && nj >= 0 &&nj < n && //防止越界
//                    !seen[ni][nj]) {//标记该节点是否遇到
//                    dist[ni][nj] = dist[i][j] + 1;//超级0节点 到(i,j)毗邻的节点 的路程 是 超级0节点 到 (i,j)的距离+1
//                    q.emplace(ni, nj);//搜索新遇到的节点
//                    seen[ni][nj] = true;//标记该节点为遇到过
//                }
//            }
//        }
//
//        return dist;
//    }
//};
//
//bool isAnagram(string s, string t) {
//	if (s.length()!=t.length())
//	{
//		return false;
//	}
//	int cnt[26];
//	memset(cnt, 0, sizeof(cnt));
//	for (char c : s) {
//		cnt[c - 'a']++;
//	}
//
//
//}
//
//int peakIndexInMountainArray(vector<int>& arr)
//{
//	int l = 0, m = 0,r = arr.size(),size = arr.size();
//	while (l < r)
//	{
//		m = (l + r) / 2;
//		if (arr[m] > arr[m - 1]&&arr[m+1]>arr[m])
//		{
//			l = m;
//		}
//		if (arr[m] < arr[m - 1] && arr[m + 1] < arr[m])
//		{
//			r = m;
//		}
//		if (arr[m]>arr[m-1]&&arr[m]>arr[m+1])
//		{
//			return m;
//		}
//	}
//}
//string countAndSay(int n) {
//	queue<int> num;
//	queue<int> cnt;
//	queue<int> tmp;
//	stack<int> rev;
//	num.push(1);
//	cnt.push(1);
//	for (int i = 0; i < n; i++)
//	{
//		//生成新文字
//		for (int j = 0; j < num.size(); j++)
//		{
//			tmp.push(num.front()); 
//			num.pop();
//			int c = cnt.front(); 
//			cnt.pop();
//			while (c>0)
//			{
//				rev.push(c % 10);
//				c /= 10;
//			}
//			for (int z = 0; z < rev.size(); z++)
//			{
//				tmp.push(rev.top());
//				rev.pop();
//			}
//			int prenum = tmp.front(); tmp.pop();
//			int count = 1;
//			while (!tmp.empty())
//			{
//				if (prenum!=tmp.front())
//				{
//					prenum = tmp.front();
//					tmp.pop();
//					num.push(prenum);
//					cnt.push(count);
//					count = 0;
//				}
//				else
//				{
//					++count;
//					tmp.pop();
//				}
//			}
//			num.push(prenum);
//			cnt.push(count);
//			count = 0;
//		}
//	}
//	return "";
//}




////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//
//ListNode* reverseList(ListNode* head) {
//	ListNode* prev = nullptr;
//	ListNode* curr = head;
//	while (curr != nullptr) {
//		ListNode* next = curr->next;
//		curr->next = prev;
//		prev = curr;
//		curr = next;
//	}
//	return prev;
//}
//

////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//bool hasCycle(ListNode* head) {
//	if (head==nullptr)
//	{
//		return false;
//	}
//	ListNode* fast = head;
//	ListNode* slow = head;
//	while (fast!=nullptr&&fast->next!=nullptr)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast==slow)
//		{
//			return true;
//		}
//	}
//	return false;
//}

//Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//ListNode* removeElements(ListNode* head, int val) {
//	if (!head)
//		return nullptr;
//	ListNode dummy = ListNode(0,head);
//	head = &dummy;
//	while (head->next!=nullptr)
//	{
//		if (head->next->val==val)
//		{
//			head->next = head->next->next;
//		}
//		else
//		{
//			head = head->next;
//		}
//	}
//	return dummy.next;
//}

//vector<vector<int>> combine(int n, int k) {
//	vector<vector<int>> ans;
//	if (k <= 0 || n < k)
//		return ans;
//	deque<int> path;
//	dfs(n, k, 1, path, ans);
//	return ans;
//}
//void dfs(int n, int k, int index, deque<int> path, vector<vector<int>>& res) {
//	if (path.size() == k) {
//		res.push_back(vector<int>(path.begin(),path.end()));
//		return;
//	}
//
//	// 只有这里 i <= n - (k - path.size()) + 1 与参考代码 1 不同
//	for (int i = index; i <= n - (k - path.size()) + 1; i++) {
//		path.push_back(i);
//		dfs(n, k, i + 1, path, res);
//		path.pop_back();
//	}
//}

//vector<string> letterCasePermutation(string s) {
//
//}
//void dfs(vector<vector<int>>& nums, vector<int>& ans, int start,int len) {
//	if (start==len)
//	{
//		nums.emplace_back(ans);//达到搜索的极限，加入答案数组
//		return;
//	}
//	for (int i = start; i < len; i++)
//	{
//		swap(ans[start], ans[i]);
//		dfs(nums, ans, start + 1, len);//锁定前start位，搜索后面的可能性
//		swap(ans[i], ans[start]);
//	}
//
//}
//vector<vector<int>> permute(vector<int>& nums) {
//	vector<vector<int>> ans;
//	dfs(ans, nums, 0, nums.size());
//	return ans;
//}

//void rotate(vector<vector<int>>& matrix) {
//	int n = matrix.size();
//	for (int i = 0; i < n / 2; i++)
//	{
//		for (int j = 0; j < n / 2; j++)
//		{
//			swap(matrix[i][j], matrix[i][n - j - 1]);
//			swap(matrix[n - 1 - i][j], matrix[n - i - 1][n - j - 1]);
//			swap(matrix[i][j], matrix[n - 1 - i][n - j - 1]);
//		}
//	}
//}

//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//int kthSmallest(TreeNode* root, int k) {
//	countNodes(root);
//	return getSmallest(k,root);
//}
//
//unordered_map<TreeNode*, int> nodeNum;
//int getSmallest(int k, TreeNode* root) {
//	TreeNode* node = root;
//	while (node!=nullptr)
//	{
//		int left = getCount(node->left);
//		if (left<k-1)
//		{
//			node = node->right;
//			k -= left + 1;
//		}
//		else if (left>k-1) {
//			node = node->left;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return node->val;
//}
//int countNodes(TreeNode* root) {
//	if (root == nullptr){
//		return 0;
//	}
//	nodeNum[root] = 1 + countNodes(root->left) + countNodes(root->right);
//	return nodeNum[root];
//}
//
//int getCount(TreeNode* node) {
//	if (node != nullptr && nodeNum.count(node)) {
//		return nodeNum[node];
//	} else {
//		return 0;
//	}
//}

//int minimumTotal(vector<vector<int>>& triangle) {
//	int depth = triangle.size();
//	vector<int> dp(triangle.back());
//	for (int i = depth - 2; i >= 0; i--)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
//		}
//	}
//	return dp[0];
//}

//Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* deleteDuplicates(ListNode* head) {
//	if (!head) {
//		return head;
//	}
//
//	ListNode* cur = head;
//	while (cur->next) {
//		if (cur->val == cur->next->val) {
//			cur->next = cur->next->next;
//		}
//		else {
//			cur = cur->next;
//		}
//	}
//
//	return head;
//}
//class MyQueue {
//public:
//	MyQueue() {
//
//	}
//	stack<int> s1;
//	stack<int> s2;
//	int front;
//	void push(int x) {
//		front = x;
//		while (!s1.empty()){ s2.push(s1.top()); s1.pop(); }
//		s2.push(x);
//		while (!s2.empty()){ s1.push(s2.top()); s2.pop(); }
//	}
//
//	int pop() {
//		int p = s1.top();
//		if (!s1.empty())
//		{
//			front = s1.top();
//			s1.pop();
//		}
//		return p;
//	}
//
//	int peek() {
//		return s1.top();
//	}
//
//	bool empty() {
//		return s1.empty();
//	}
//};
//int maxX, maxY;
//int dir[4][2] = { {1,0},{0,-1},{-1,0},{0,1} };
//void bfs(vector<vector<int>>& image, pair<int, int> p, queue<pair<int, int>>* q, int newColor, int oldColor) {
//	if (image[p.first][p.second] == oldColor)
//	{
//		image[p.first][p.second] = newColor;
//	}
//	else
//	{
//		return;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		int x = p.first + dir[i][0];
//		int y = p.second + dir[i][1];
//		if (x >= 0 && y >= 0 && x < maxX && y < maxY)
//		{
//			if (image[x][y] == oldColor)
//			{
//				q->push(make_pair(x, y));
//			}
//		}
//	}
//}
//
//
//vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//	queue<pair<int, int>> unfind;
//	int colorOld = image[sr][sc];
//	if (colorOld == newColor) return image;
//	maxX = image.size(); maxY = image[0].size();
//	unfind.push(make_pair(sr, sc));
//	while (!unfind.empty())
//	{
//		bfs(image, unfind.front(), &unfind, newColor, colorOld);
//		unfind.pop();
//	}
//	return image;
//}


//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//vector<int> postorderTraversal(TreeNode* root) {
//
//}
//class Trie {
//private:
//    vector<Trie*> children;
//    bool isEnd;
//
//    Trie* searchPrefix(string prefix) {
//        Trie* node = this;
//        for (char ch : prefix) {
//            ch -= 'a';
//            if (node->children[ch] == nullptr) {
//                return nullptr;
//            }
//            node = node->children[ch];
//        }
//        return node;
//    }
//
//public:
//    Trie() : children(26), isEnd(false) {}
//
//    void insert(string word) {
//        Trie* node = this;
//        for (char ch : word) {
//            ch -= 'a';
//            if (node->children[ch] == nullptr) {
//                node->children[ch] = new Trie();
//            }
//            node = node->children[ch];
//        }
//        node->isEnd = true;
//    }
//
//    bool search(string word) {
//        Trie* node = this->searchPrefix(word);
//        return node != nullptr && node->isEnd;
//    }
//
//    bool startsWith(string prefix) {
//        return this->searchPrefix(prefix) != nullptr;
//    }
//};
//struct TrieNode {
//	vector<TrieNode*> child;
//	bool isEnd;
//	TrieNode() {
//		this->child = vector<TrieNode*>(26, nullptr);
//		this->isEnd = false;
//	}
//};
//void Insert(TrieNode* t,string s) {
//	TrieNode* node = t;
//	for (auto c : s) {
//		if (t->child[c-'a']==nullptr)
//		{
//			t->child[c - 'a'] = new TrieNode();
//		}
//		t = t->child[c - 'a'];
//	}
//	t->isEnd = true;
//}
//
//class WordDictionary {
//public:
//	TrieNode root;
//	WordDictionary() {
//		root = TrieNode();
//	}
//
//	void addWord(string word) {
//		Insert(&root, word);
//	}
//
//	bool search(string word) {
//		return dfs(word, 0, &root);
//	}
//	bool dfs(const string& word, int index, TrieNode* node) {
//		if (index == word.size()) {
//			return node->isEnd;
//		}
//		char ch = word[index];
//		if (ch >= 'a' && ch <= 'z') {
//			TrieNode* child = node->child[ch - 'a'];
//			if (child != nullptr && dfs(word, index + 1, child)) {
//				return true;
//			}
//		}
//		else if (ch == '.') {
//			for (int i = 0; i < 26; i++) {
//				TrieNode* child = node->child[i];
//				if (child != nullptr && dfs(word, index + 1, child)) {
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//};
//int countDigitOne(int n) {
//	// mulk 表示 10^k
//	// 在下面的代码中，可以发现 k 并没有被直接使用到（都是使用 10^k）
//	// 但为了让代码看起来更加直观，这里保留了 k
//	long long mulk = 1;
//	int ans = 0;
//	for (int k = 0; n >= mulk; ++k) {
//		ans += (n / (mulk * 10)) * mulk + min(max(n % (mulk * 10) - mulk + 1, 0LL), mulk);
//		mulk *= 10;
//	}
//	return ans;
//}
//int singleNumber(vector<int>& nums) {
//	int ans = 0;
//	for (int v : nums) {
//		ans ^= v;
//	}
//	return ans;
//}

//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//int getLength(TreeNode* root) {
//	int l = 0, r = 0;
//	if (root->left != nullptr)
//		l = maxDepth(root->left) + 1;
//	if (root->right != nullptr)
//		r = maxDepth(root->right) + 1;
//	return max(l, r);
//}
//int maxDepth(TreeNode* root) {
//	return getLength(root)+1;
//}

//Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//TreeNode* invertTree(TreeNode* root) {
//	if (root==nullptr)
//	{
//		return nullptr;
//	}
//	swap(root->left, root->right);
//	invertTree(root->left);
//	invertTree(root->right);
//}
vector<int> plusOne(vector<int>& digits) {

}
int main()
{
	//ListNode l1 = ListNode(1);
	//ListNode l2 = ListNode(2);
	//ListNode l3 = ListNode(3);
	//ListNode l4 = ListNode(4);

	//l1.next = &l2;
	//l2.next = &l3;
	//l3.next = &l4;

	//reverseList(&l4);
	//vector<string> v = { "ab","a" };
	//longestCommonPrefix(v);
	//vector<int> v2 = { 2,3,1,1,4 };
	//jump(v2);
	//removeDuplicates(v2);
	//countAndSay(4);
	//vector<vector<int>> v1;
	//v1.push_back(vector<int>{0, 0, 0});
	//v1.push_back(vector<int>{0, 1, 1});
	//floodFill(v1, 1, 1, 1);
	//Trie t;
	//t.insert("abcc");
	//t.insert("abdd");
	//t.insert("a");
	//cout<<countDigitOne(100);
	//WordDictionary wd;
	//wd.addWord("a");
	//wd.addWord("a");
	//wd.search(".");
	//wd.search("a");
	//wd.search("aa");
	//wd.search("a");
	//wd.search(".a");
	//wd.search("a.");
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
