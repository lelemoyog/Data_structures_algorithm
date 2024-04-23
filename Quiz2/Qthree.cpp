// Write a function that takes the head of a linked list and returns the reversed list.



#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


// Function to reverse a linked list
ListNode *reverseList(ListNode *head) {
    ListNode *prev = NULL;  // Initialize the previous node to NULL
    ListNode *curr = head;  // Initialize the current node to the head
    while (curr != NULL) {  // Loop until the current node is NULL
        ListNode *next = curr->next;  // Store the next node
        curr->next = prev;  // Reverse the link
        prev = curr;  // Move the previous node to the current node
        curr = next;  // Move the current node to the next node
    }
    return prev;  // Return the new head of the reversed list
}

int main() {
    // Create a linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);


    // Reverse the linked list
    ListNode *reversed = reverseList(head);
    cout << "The reversed linked list is: ";
    while (reversed != NULL) {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    cout << endl;

    return 0;
}

