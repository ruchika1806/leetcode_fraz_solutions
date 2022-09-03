//T.C:O(n^2)
//S.C:O(1)

public:
    int diameterOfBinaryTree(TreeNode* root) {        
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    private:
    int height (TreeNode* root, int &diameter){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left,diameter);
        int rh=height(root->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
    
