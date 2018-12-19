void autoComplete(struct TrieNode* root, string currPrefix) 
{ 
    if (root->isWordEnd) 
    { 
        cout << currPrefix; 
        cout << endl; 
    } 
  
    if (isLastNode(root)) 
        return; 
  
    for (int i = 0; i < ALPHABET_SIZE; i++) 
    { 
        if (root->children[i]) 
        { 
            currPrefix.push_back(97 + i); 
  
            autoComplete(root->children[i], currPrefix); 
        } 
    } 
} 
  
