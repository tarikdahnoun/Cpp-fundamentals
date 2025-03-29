//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include "BinaryNodeTree.h" // ADT binary tree operations
#include <iostream>
#include <string>

using namespace std;

void display(string &anItem) { cout << "Displaying item - " << anItem << endl; } // end display

void check(bool success)
{
    if (success)
        cout << "Done." << endl;
    else
        cout << " Entry not in tree." << endl;
} // end check

int main()
{
    BinaryTreeInterface<string> *tree1 = new BinaryNodeTree<string>();
    BinaryTreeInterface<string> *tree2 = new BinaryNodeTree<string>();

    tree1->add("10");
    tree1->add("20");
    tree1->add("30");
    tree1->add("40");

    tree2->add("10");
    tree2->add("20");
    tree2->add("30");
    tree2->add("40");

    cout << "Tree 1 Inorder Traversal:" << endl;
    tree1->inorderTraverse(display);

    cout << "Tree 1 Preorder Traversal:" << endl;
    tree1->preorderTraverse(display);

    cout << "Tree 2 Inorder Traversal:" << endl;
    tree2->inorderTraverse(display);

    cout << "Tree 2 Preorder Traversal:" << endl;
    tree2->preorderTraverse(display);

    delete tree1;
    delete tree2;

    return 0;
} // end main

/* SAMPLE OUTPUT
Tree 1 Inorder Traversal:
Displaying item - 20
Displaying item - 10
Displaying item - 40
Displaying item - 30
Tree 1 Preorder Traversal:
Displaying item - 10
Displaying item - 20
Displaying item - 30
Displaying item - 40
Tree 2 Inorder Traversal:
Displaying item - 20
Displaying item - 40
Displaying item - 10
Displaying item - 30
Tree 2 Preorder Traversal:
Displaying item - 10
Displaying item - 20
Displaying item - 40
Displaying item - 30
 */
