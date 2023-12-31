/*

    Binary Tree: 
        Each node can have at most 2 children.

    Strict/Proper Binary tree:
        Each node can have either 2 or 0 children.
        left child and right child.

    Complete Binary tree:
        All levels except possibly the last are completely filled 
        and all nodes are as left as possible.
    Max no of nodes at level i=2^i

    Perfect Binary tree:
        All levels are completely filled.

    Maximum no of nodes in a binary tree with height h 
    = 2^0 + 2^1 + ... + 2^h
    = 2^(h+1)-1
    = 2^(no of levels)- 1

    height of perfect binary tree with n nodes:
        = ln(n+1)-1
    
    Height of complete binary tree:
        = floor(ln(n))
    
    Implementations:
        Dynamically created nodes
        Arrays (used for heaps)

    for node at index i
        left child index= 2i+1
        right child index= 2i+2
        
*/