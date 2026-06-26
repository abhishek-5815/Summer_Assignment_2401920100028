/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void preorder(TreeNode* root, string &s){

        if(root == NULL){
            s += "N ";
            return;
        }

        s += to_string(root->val) + " ";

        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {

        string s = "";

        preorder(root, s);

        return s;
    }

    TreeNode* build(vector<string>& arr, int &i){

        if(arr[i] == "N"){
            i++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(arr[i]));
        i++;

        root->left = build(arr, i);
        root->right = build(arr, i);

        return root;
    }

    TreeNode* deserialize(string data) {

        vector<string> arr;

        string temp = "";

        for(char ch : data){

            if(ch == ' '){
                arr.push_back(temp);
                temp = "";
            }
            else{
                temp += ch;
            }
        }

        int i = 0;

        return build(arr, i);
    }
};