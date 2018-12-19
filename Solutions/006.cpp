struct Node 
{ 
    int data; 
    struct Node* npx; /* XOR of next and previous node */
}; 
  
/* returns XORed value of the node addresses */
struct Node* XOR (struct Node *a, struct Node *b) 
{ 
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b)); 
} 
  
/* Insert a node at the begining of the  
   XORed linked list and makes the newly 
   inserted node as head */
void add(struct Node **head_ref, int data) 
{ 
    // Allocate memory for new node 
    struct Node *new_node = (struct Node *) malloc (sizeof (struct Node) ); 
    new_node->data = data; 
  
    /* Since new node is being inserted at the  
       begining, npx of new node will always be 
       XOR of current head and NULL */
    new_node->npx = XOR(*head_ref, NULL); 
  
    /* If linked list is not empty, then npx of  
       current head node will be XOR of new node 
       and node next to current head */
    if (*head_ref != NULL) 
    { 
        // *(head_ref)->npx is XOR of NULL and next.  
        // So if we do XOR of it with NULL, we get next 
        struct Node* next = XOR((*head_ref)->npx, NULL); 
        (*head_ref)->npx = XOR(new_node, next); 
    } 
  
    // Change head 
    *head_ref = new_node; 
} 
