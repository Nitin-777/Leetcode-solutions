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
    void reorderList(ListNode* head) {
        ListNode * temp=head;
        vector<int>trial;
        while(temp != NULL){
            trial.push_back(temp->val);
            temp=temp->next;
        }

        int i=1, j=trial.size()-1;
        temp=head->next;
        while(i <= j){
            temp->val= trial[j];
            temp=temp->next;
            if(temp == NULL) break;
            temp->val=trial[i];
            temp=temp->next;
            i++;
            j--;
        }
        
        
    }
};