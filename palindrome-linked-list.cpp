/*
Palindrome Linked List

Given the head of a singly linked list, return true if it is a palindrome.
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
    
    ListNode* temp;
    
    bool isPalindrome(ListNode* head) {
        temp = head;
        return rec(head);
    }
    
    bool rec(ListNode* head) {
        if(head == NULL) return true;
        
        bool isPal = rec(head->next) & (temp->val == head->val);
        temp = temp->next;
        return isPal;
    }
    
//     bool isPalindrome(ListNode* head) {
//         unsigned int val = 0;
        
//         while(head!=NULL) {
//             val = val * 10 + head->val;
//             head = head->next;
//         }
        
//         int temp = val;
//         int pall = temp%10;

        
//         while(temp/=10) {
//             pall = pall * 10 + temp % 10;
//         }
        

//         cout << pall << " " << val << endl;
        
//         if(pall==val) return true;
//         else return false;
//     }
};