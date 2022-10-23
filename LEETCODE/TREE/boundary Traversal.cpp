// link-https://www.codingninjas.com/codestudio/problems/boundary-traversal_790725?utm_source=youtube&utm_medium=affiliate&utm_campaign=Striver_Tree_Videos
// striver yotube-https://www.youtube.com/watch?v=0ca1nvR0be4&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=21
// sttiver sheet-https://takeuforward.org/data-structure/boundary-traversal-of-a-binary-tree/


// Approach:
//  Boundary traversal in an anti-clockwise direction can be described 
// as a traversal consisting of three parts:

// Part 1: Left Boundary of the tree (excluding the leaf nodes).
// Part 2: All the leaf nodes travelled in the left to right direction.
// Part 3: Right Boundary of the tree (excluding the leaf nodes), traversed in the reverse direction.

// for all this we will use one vector whi sb krega kamaal dhamaal


// checking that root is leaf or not
bool isLeaf(node * root) {
  return !root -> left && !root -> right;
}

// we have to add all the boundary  values except the leaves
void addLeftBoundary(node * root, vector < int > & res) {
  node * cur = root -> left;
  while (cur) {
    if (!isLeaf(cur)) res.push_back(cur -> data);
    if (cur -> left) cur = cur -> left;
    else cur = cur -> right;
  }
}


// we will one vecotr as temp bcoz we know when we traverse then we will go from top to down
// but this traversal include anticlockwise so thats why at last we will just traverse the temp vector from back

void addRightBoundary(node * root, vector < int > & res) {
  node * cur = root -> right;
  vector < int > tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push_back(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur -> left;
  }
  for (int i = tmp.size() - 1; i >= 0; --i) {
    res.push_back(tmp[i]);
  }
}

// now only add the leaves so we have to check that every value  shoud be leave one that is ...value should not have left or roght 
// its a preorder traversal
void addLeaves(node * root, vector < int > & res) {
  if (isLeaf(root)) {
    res.push_back(root -> data);
    return;
  }
  if (root -> left) addLeaves(root -> left, res);
  if (root -> right) addLeaves(root -> right, res);
}

//main function 
vector < int > printBoundary(node * root) {
  vector < int > res;
//   base and obvious condition
  if (!root) return res;

  if (!isLeaf(root)) res.push_back(root -> data);

  addLeftBoundary(root, res);

  // add leaf nodes
  addLeaves(root, res);

  addRightBoundary(root, res);
  return res;
}