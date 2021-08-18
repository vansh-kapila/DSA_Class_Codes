#include <iostream>
#include <string.h>
#define alpha_size 26
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])

using namespace std;
 
struct TrieNode
{
	struct TrieNode* children[alpha_size];

	bool isLeaf;
};
 
struct TrieNode* createNode()
{
	struct TrieNode* pNode = new TrieNode;

	for (int i = 0; i < alpha_size; i++)
		pNode->children[i] = NULL;

	pNode->isLeaf = false;

	return pNode;
}; 
void insert_node(struct TrieNode* root, char* key)
{
	int level;
	int length = strlen(key);
	struct TrieNode* pCrawl = root;

	for (level = 0; level < length; level++)
	{
		int index = key[level] - 'a';

		if (pCrawl->children[index] == NULL)
			pCrawl->children[index] = createNode();

		pCrawl = pCrawl->children[index];
	}

	pCrawl->isLeaf = true;
}
 
bool isLeafNode(struct TrieNode* root)
{
	return root->isLeaf != false;
}
 
void display(struct TrieNode* root, char str[], int level)
{ 
	if (isLeafNode(root))
	{
		str[level] = '\0';
		cout << str << endl;
	}

	int i;
	for (i = 0; i < alpha_size; i++)
	{ 
		if (root->children[i])
		{
			str[level] = i + 'a';
			display(root->children[i], str, level + 1);
		}
	}
}
 
int main()
{ 
	char keys[][8] = { "the", "a", "there", "answer",
					"any", "by", "bye", "their" };

	struct TrieNode* root = createNode();
 
	for (int j = 0; j < ARRAY_SIZE(keys); j++)
		insert_node(root, keys[j]);

	int level = 0;
	char str[20];
 
	cout << "Content of Trie: " << endl;
	display(root, str, level);
}
