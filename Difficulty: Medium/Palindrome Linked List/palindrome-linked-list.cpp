/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node* temp = head;
        stack<int> s;
        while(temp)
        {
            s.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp)
        {
            if(s.top() != temp->data)
            {
                return false;
            }
            temp = temp->next;
            s.pop();
        }
        return true;
    }
};