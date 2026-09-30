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
    bool isPalindrome(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* temp=head;
        vector<int> v1;
        vector<int> v2;
        while(temp!=NULL){
            v1.push_back(temp->val);
            v2.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
        // ListNode* original=head;
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // ListNode* next=NULL;
        // while(curr!=NULL){
        //     next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }
        // curr=original;
        // ListNode* temp=prev;

        // while(curr!=NULL && temp!=NULL){
        //     if(curr->val!=temp->val){
        //         return false;
        //     }
        //         curr=curr->next;
        //         temp=temp->next;

        // }
        // return true;
    }
};