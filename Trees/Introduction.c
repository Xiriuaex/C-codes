/*
    What needs to be stored?
    cost of operations?
    Memory usage
    Ease of implementation

    Tree is efficient to store data that are hierarchical.

    top most node is called root of the tree.
    A node may have links to other nodes called its children.

    Root 
    Children
    Parent
    Children of same parent are called Sibling

    Root does not have a Parent.

    Any Node that does not have a child is called Leaf node.

    Parent of Parent node is called Grandparent.

    If we can go from node A to node B, A is ancestor of B,
    B is descendent of A.

    Nodes not having same parent but same grandparent node are called Cousins




    Tree can be called a Recursive data structure.

    In a tree of N nodes, there are N-1 links/edges.

    DEPTH AND HEIGHT:

    Depth of x node= length of path from root to x
                     or 
                     No of edges in path from root to x
    
    Depth of root is 0

    Height of x node= No of edges in longest path from x to a leaf
    
    height of leaf node is 0
    
    Binary Tree:
        A tree in which each node can have at most 2 children 

    define a binary Tree:

        struct Node{
            int data;
            Node* left;
            Node* right;
        };


    Applications:

    1. Storing naturally hierarchical data.
    2. Organize data for quick search, insertion, deletion
    3. Trie
    4. Network Routing algorithm

*/