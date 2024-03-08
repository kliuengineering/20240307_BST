#include <iostream>

template <class T>
class BST
{
private:

	// node structure
	struct Node
	{
		T data;
		Node* left;
		Node* right;

		// node constructor
		Node(const T &data, Node *left = nullptr, Node *right = nullptr) : data(data), left(left), right(right) {}
	};

	// private variables
	Node* root;

public:

	// default constructor
	BST()
	{
		root = nullptr;
	}

	void Insert(const T& data)
	{
		// base case -> empty tree
		if (!root)
		{
			root = new Node(data);
		}

		// inductive case -> the tree is already occupied with some data
		else
		{
			bool flag_insertion = false;			
			Node* current = root;					// set an interator
		
			// while the data is not yet inserted
			while (!flag_insertion)
			{
				if (data < current->data)
				{
					// does the left subtree exist?
					if (current->left)
					{
						current = current->left;
					}
					else
					{
						Node* new_node = new Node(data);
						current->left = new_node;
						flag_insertion = true;
					}
				}

				else
				{
					// does the right subtree exist?
					if (current->right)
					{
						current = current->right;
					}
					else
					{
						Node* new_node = new Node(data);
						current->right = new_node;
						flag_insertion = true;
					}
				}
			}
		}
	}

	void Search(const T& data)
	{

	}

	void PrintBFS(void)
	{

	}

	void PrintInOrder(void)
	{

	}

	void PrintPreOrder(void)
	{

	}

	~BST()
	{

	}
};


int main(void)
{

	return 0;
}