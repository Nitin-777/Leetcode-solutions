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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
          vector<int> ans = {-1, -1};

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return ans;

        ListNode* prev = head;
        ListNode* curr = head->next;

        int pos = 1;

        int firstCritical = -1;
        int prevCritical = -1;

        int minDist = INT_MAX;
        int maxDist = -1;

        while (curr->next != nullptr) {

            // Check if curr is a critical point
            bool isCritical =
                (curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val);

            if (isCritical) {

                // First critical point
                if (firstCritical == -1) {
                    firstCritical = pos;
                }

                // We already have a previous critical point
                if (prevCritical != -1) {
                    int distance = pos - prevCritical;

                    minDist = min(minDist, distance);
                    maxDist = max(maxDist, pos - firstCritical);
                }

                prevCritical = pos;
            }

            prev = curr;
            curr = curr->next;
            pos++;
        }

        if (prevCritical == firstCritical)
            return {-1, -1};

        return {minDist, maxDist};
    }
};