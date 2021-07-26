/*
Reverse Linked List

Given the head of a singly linked list, reverse the list, and return the reversed list.
*/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode* temp = head;
        stack<int> stack;
        
        while(temp!=NULL) {
            stack.push(temp->val);
            temp = temp->next;
        }
        
        ListNode* result = new ListNode(0, head);
        temp = result;
        
        while(!stack.empty()) {
            result = result->next;
            result->val = stack.top();
            stack.pop();
        }
        
        
        return temp->next;
    }
    
};