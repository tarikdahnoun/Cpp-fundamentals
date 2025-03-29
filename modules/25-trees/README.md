# Tree Terminology

* **General tree**: A set of one or more nodes, partitioned into a **root node** and subsets that are **general subtrees** of the root.

* **Parent of node `n`**: The node directly **above** node `n` in the tree.

* **Child of node `n`**: A node directly **below** node `n` in the tree.

* **Root**: The **only node** in the tree with **no parent**.

* **Leaf**: A node with **no children**.

* **Height**: The number of nodes on the **longest path** from the root to a leaf.

* **Siblings**: Nodes that share a **common parent**.

* **Ancestor of node `n`**: A node on the **path from the root** to `n`.

* **Descendant of node `n`**: A node on a **path from `n` to a leaf**.

* **Subtree of node `n`**: A tree that consists of a **child (if any) of `n`** and the child’s **descendants**.

* **Left (right) child of node `n`**: A node directly below and to the **left (right)** of node `n` in a **binary tree**.

* **Left (right) subtree of node `n`**: In a binary tree, the **left (right) child** (if any) of node `n` **plus its descendants**.

* **n-ary tree**: A set of nodes that is either **empty** or partitioned into a **root node** and **at most `n` subsets** that are **n-ary subtrees** of the root. Each node has **at most `n` children**.

* **Binary tree**: A set of nodes that is either **empty** or partitioned into a **root node** and **one or two subsets** that are **binary subtrees** of the root. Each node has at most **two children**, the **left child** and the **right child**.

* **Binary search tree**: A binary tree in which the value in any node `n` is:
  * **Greater than** every value in `n`’s **left subtree**, and  
  * **Less than** every value in `n`’s **right subtree**.

* **Full binary tree**: A binary tree of height `h` with **no missing nodes**. All **leaves are at level `h`**, and all other nodes have **two children**.

* **Complete binary tree**: A binary tree of height `h` that is **full to level `h – 1`**, and has **level `h` filled in from left to right**.

* **Balanced binary tree**: A binary tree in which the **left and right subtrees** of any node have heights that **differ by at most 1**.

* **Maximum height of an n-node binary tree**: n is the maximum height of a binary tree with n nodes
  * `= n`

* **Minimum height of an n-node binary tree**: Except for the last level, each level of a minimum-height binary tree must contain as many nodes as possible
  * `= log2(n + 1)`
