/*
A linked list is said to contain a cycle if any node is visited more than once while traversing the list. Given a pointer to the head of a linked list, determine if it contains a cycle. If it does, return . Otherwise, return .

Example

 refers to the list of nodes 

The numbers shown are the node numbers, not their data values. There is no cycle in this list so return .

 refers to the list of nodes 

There is a cycle where node 3 points back to node 1, so return .

Function Description

Complete the has_cycle function in the editor below.

It has the following parameter:

SinglyLinkedListNode pointer head: a reference to the head of the list
Returns

int:  if there is a cycle or  if there is not
Note: If the list is empty,  will be null.

Input Format

The code stub reads from stdin and passes the appropriate argument to your function. The custom test cases format will not be described for this question due to its complexity. Expand the section for the main function and review the code if you would like to figure out how to create a custom case.

Constraints


*/



// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
  SinglyLinkedListNode*fast=head;
  SinglyLinkedListNode*slow=head;
  if(head==NULL)
  {
    return 0;
  }
  while(fast!=NULL && fast->next!=NULL)
  {
    
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow)
    {
      return 1;
    }
  }

  return 0;
}

