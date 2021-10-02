// author : Anuj Maurya

class node{
	string name;
	node* left;
	node* right;

	node(string name) {
		this -> name = name;
		this -> left = NULL;
		this -> right = NULL;
	}
};

node* insert(node* root, string user) {
	node* u = new node(user);
	if(root == NULL) {
		root = u;
		return root; 
	}

	int val = strcmp(user, root -> name);

	if(val > 0) {
		root = insert(root -> right, user);
	}else
	if(val < 0) {
		root = insert(root -> left, user);
	}else {
		return root;
	}

}

int main() {
	node* root = new node()
}