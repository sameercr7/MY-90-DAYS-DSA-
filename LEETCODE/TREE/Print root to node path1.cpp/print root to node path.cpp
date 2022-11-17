//  youtube link-https://www.youtube.com/watch?v=fmflMqVOC7k&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=27
// striver link-https://takeuforward.org/data-structure/print-root-to-node-path-in-a-binary-tree/

// just simply use any traversal in this we used INORDER TRAVERSAL
// simply when you visit the node push into the vector nsme arr
// then go to its left and then right and if root is not equal then return false 
// main step is if not euqal then remove that particular root means pop_back()

// refer to ss placed in TREE

bool getPath(node * root, vector < int > & arr, int x) {
  // if root is NULL
  // there is no path
  if (!root)
    return false;

  // push the node's value in 'arr'
  arr.push_back(root -> data);

  // if it is the required node
  // return true
  if (root -> data == x)
    return true;

  // else check whether the required node lies
  // in the left subtree or right subtree of
  // the current node
  if (getPath(root -> left, arr, x) ||
    getPath(root -> right, arr, x))
    return true;

  // required node does not lie either in the
  // left or right subtree of the current node
  // Thus, remove current node's value from
  // 'arr'and then return false   
  arr.pop_back();
  return false;
}