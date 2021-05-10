#include <iostream>

#include "list.h"
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

ListNode* removeNthFromEnd(ListNode* head, int n) {
   ListNode *fast = head;
   for (int i = 0; i < n; ++i) {
      if (fast->next == NULL) {
	 if (i == n-1) {
	    head = head->next;
	 }
	 return head;
      }
   }
   ListNode* slow = head;
   while (fast->next != NULL) {
      slow = slow->next;
      fast = fast->next;
   }

   slow->next = slow->next->next;
   return head;
}
/*   
//Type your answer here:
if (head == NULL || head->next == NULL)
return NULL; 
ListNode* slow = head;
ListNode* fast = head;
int i = 0;
int N = 0;

while (fast != NULL) {
if (i == n){
slow = slow->next;
}
else {
++i;
}
fast = fast->next;
}
if (i != n)
return head;
if (i == N)
head = head->next;

slow->next = slow->next->next;
return head;
}
*/
