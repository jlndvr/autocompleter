#include "bst.h"
#include <iostream>
#include <algorithm> 
using namespace std;

BST::BST() {
    root = nullptr; 
}

//insert h
void BST::insertR(Node*& p, const string& value){   //O(h)= insert h=height //if perfect= O(log n)
    if (p == nullptr) {
    Node* n = new Node(value);  //worst case= O(n) n=number of nodes
    p = n;  
    } 
    else {
    if (p->data >= value) {
    insertR(p->left, value); 
    }
    else{
    insertR(p->right, value);
    }
    }
}

//insert
void BST::insert(const string& value){
insertR(root, value); //inserts from root
}
//size helper
int BST::sizeR(Node* p){
if (p == nullptr){
return 0;
}
else{
return 1 + sizeR(p->left) + sizeR(p->right);
}
}

//return size
int BST::size(){
return sizeR(root);    //return size= O(n) counts every node 
}

//height h
int BST::heightR(Node* p){
if (p == nullptr){
    return -1;
}
return 1 + max(heightR(p->left), heightR(p->right));
}

//return height
int BST::height(){ //start from root
return heightR(root);      //goes through every node to find height O(n)
}

//Search function h
void BST::completionsR(Node* p, const string& prefix){
    if (p == nullptr){
    return;
    }
    if (p->data.substr(0, prefix.size()) == prefix){         //O(n) goes through every node in the tree to find match
    cout << p->data << " ";  
}
    completionsR(p->left, prefix);
    completionsR(p->right, prefix);
}

void BST::completions(const string& prefix){
    completionsR(root, prefix);
}
