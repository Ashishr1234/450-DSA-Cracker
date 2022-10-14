  vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;  // Answer array
        
        if(!root)
            return res;
        
        queue<TreeNode*> q; // Use this to store levels. 
        q.push(root); 
        
        while(!q.empty()){
            int size = q.size(); // Get # of items in queue
            
            vector<int> temp; // Use this to store level. 
            for(int i = 0; i < size; i++){ // Empty out the current level, adding each node's child(ren)
                TreeNode* n = q.front();
                q.pop(); 
                temp.push_back(n->val); 
                
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            res.push_back(temp); // Append level to answer array
        }
        
        return res;
    }
