/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node == NULL)
        {
            return -1;
        }
        int lheight = height(node->left);
        int rheight = height(node->right);
        return max(lheight,rheight) + 1;
    }
};