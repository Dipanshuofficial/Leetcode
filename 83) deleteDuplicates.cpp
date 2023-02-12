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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        map<int,ListNode*> mp;
        while(head){
            mp[head->val]=head;
            head=head->next;
        }
        ListNode* ans=mp.begin()->second;
        ListNode* tail=ans;
        map<int,ListNode*>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it==mp.begin()){
                continue;
            }
            tail->next=it->second;
            tail=tail->next;
        }
        if(mp.size()==1){
            return mp.begin()->second;
        }
        return ans;
    }
};
