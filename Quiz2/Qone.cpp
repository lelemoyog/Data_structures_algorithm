// Given head, the head of a linked list, determines if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false.
// Example 1:
 
// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
// Example 2:
 
// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 3:
 
// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.
// Constraints:
// ●	The number of the nodes in the list is in the range [0, 104].
// ●	-105 <= Node.val <= 105
// ●	pos is -1 or a valid index in the linked-list.
// Follow up: Can you solve it using O(1) (i.e. constant) memory?


#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to check if there is a cycle in the linked list
bool hasCycle(ListNode *head) {
    // Initialize two pointers, slow and fast
    ListNode *slow = head;
    ListNode *fast = head;
    // Loop until fast reaches the end of the list
    while (fast != NULL && fast->next != NULL) {
        // Move slow one step and fast two steps
        slow = slow->next;
        fast = fast->next->next;
        // If there is a cycle, the two pointers will meet
        if (slow == fast) {
            return true;  // Return true if there is a cycle
        }
    }
    return false;  // Return false if there is no cycle
}

int main() {
    // Create a linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;  // Create a cycle

    // Check if there is a cycle in the linked list
    bool result = hasCycle(head);
    // Print the result
    if (result) {
        cout << "There is a cycle in the linked list" << endl;
    } else {
        cout << "There is no cycle in the linked list" << endl;
    }

    return 0;
}

