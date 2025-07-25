/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        int count = 1;
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        int mid = count / 2;
        temp = head;
        for(int i = 0 ; i < mid ; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
};