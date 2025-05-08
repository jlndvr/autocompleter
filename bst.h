#include <iostream>
#ifndef BST_H
#define BST_H
#include <string>
using namespace std;

class BST{
    public:
    BST();
    void insert(const string& value);
    int size();
    int height();
    void completions(const string& prefix);
private:
struct Node{
string data;
Node* left;
Node* right;

Node(string value){//constructor
data = value;
left = nullptr;  
right = nullptr;
}
};
Node* root;

int sizeR(Node* p);

int heightR(Node* p);

void insertR(Node*& p, const string& value);

void completionsR(Node* p, const string& prefix);
};
#endif
