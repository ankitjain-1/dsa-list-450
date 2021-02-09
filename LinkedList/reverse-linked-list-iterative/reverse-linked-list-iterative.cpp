// { Driver Code Starts
//Initial Template for C++

// C program to find n'th Node in linked list
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node* next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};


/* Function to get the middle of the linked list*/
struct Node* reverseList(struct Node* head);

void printList(struct Node* head)
{
  struct Node* temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

/* Driver program to test above function*/
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int T, n, l, firstdata;
  cin >> T;

  while (T--)
  {
    struct Node* head = NULL, * tail = NULL;

    cin >> n;

    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;

    for (int i = 1; i < n; i++)
    {
      cin >> l;
      tail->next = new Node(l);
      tail = tail->next;
    }

    head = reverseList(head);

    printList(head);
    cout << endl;
  }
  return 0;
}

// } Driver Code Ends


/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node* head)
{
  // code here
  Node* prev = nullptr;
  Node* curr = head;
  Node* next = nullptr;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
  // return head of reversed list
  return head;
}