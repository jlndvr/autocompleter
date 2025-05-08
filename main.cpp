#include <iostream>
#include <string>
#include "bst.h"
using namespace std;

int main() {
BST bst;
string values[]={"aardvark","albatross","alpaca","armadillo","cat","camel","crocodile","crow","giraffe","goat","goose","goatfish","gorilla"};

int size=13;
for(int i=0;i<size;i++) {
 bst.insert(values[i]);
}

 //cin from user
    cout<<"Enter a prefix: ";
    string userPrefix;
    cin>>userPrefix;

    cout<<"Completions:"<<userPrefix<<endl;
    bst.completions(userPrefix);
    cout << endl;
 //return
    cout<<"Size of tree: "<<bst.size()<<endl;
    cout<<"Height of tree: "<<bst.height()<<endl;
}
