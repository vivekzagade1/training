

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/


void decode_huff(node * root, string s) {
  int size = s.size();
  node* temp = root;
  string result;
    for(int i = 0;i < size; i++)
    {
      if(s[i] == '1')
      {
        temp = temp->right;
        if(!temp->right && !temp->left)
        {
          result.push_back(temp->data);
          temp = root;
        }
      }
      else if(s[i] == '0')
      {
        temp = temp->left;
        if(!temp->right && !temp->left)
        {
          result.push_back(temp->data);
          temp = root;
        }
      }
    }
    cout << result;
}

