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
    int getDecimalValue(ListNode* head) {
        ListNode* p=head;
        vector<int>vc;
        int s=0;
        while(p!=NULL)
        {
            vc.push_back(p->val);
            p=p->next;
        }
        reverse(vc.begin(),vc.end());
        for(int i=0;i<vc.size();i++)
        {
            s+=vc[i]*pow(2,i);
            // cout<<vc[i]<<" ";
        }
        return s;
    }
};
