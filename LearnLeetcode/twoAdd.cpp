//两数相加
#include"stdafx.h"
#include<iostream>
#include<vector>
#include<list>
using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int temp = 0,a=0,b=0,result=0;
		ListNode* p = l1;
		ListNode* q = l2;
		ListNode* head = new ListNode(0);
		if (p == nullptr && q == nullptr)
		{
			return head;
		}
		ListNode* pResult = head, *pTemp = nullptr;
		for (; p != nullptr || q != nullptr;)
		{
			if (p != nullptr) {
				a = p->val;
				p = p->next;
			}
			else{
				a = 0;
			}
			if (q != nullptr) {
				b = q->val;
				q = q->next;
			}
			else {
				b = 0;
			}
			result = a + b + temp;
			temp = result / 10;
			pResult->val = result % 10;
			pResult->next = new ListNode(0);
			pTemp = pResult;
			pResult = pResult->next;
		}
		if (temp != 0)
		{
			pResult->val = temp;
		}
		else
		{
			pTemp->next = nullptr;
			delete pResult;
		}

		return head;
	}
};