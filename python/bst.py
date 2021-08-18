class node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right

# modification and searching
def insert(root, data):
    '''Inserts a node in the BST'''
    if not root:
        print(f"Inserted {data}")
        return node(data)
    if data <= root.data:
        root.left=insert(root.left,data)
    else:
        root.right=insert(root.right,data)
    return root

def search(root,data):
    if root is None: return False
    if root.data==data: return True
    elif root.data<data: return search(root.right,data)
    else: return search(root.left,data)

def findMin(root,data):
    if root is None: return
    if root.left is None: return root
    return findMin(root.left)

def delete(root,data):
    if root is None: return
    elif root.data==data:
        if root.left is None and root.right is None:
            root = None 
            return root
        elif root.left is None:
            temp = root 
            root = root.right
            del temp 
        elif root.right is None:
            temp = root
            root = root.left 
            del temp
        else:
            temp = findMin(root)
            root.data = temp.data 
            root.right = delete(root.right,temp.data)
    elif root.data<data: 
        root.right = delete(root.right,data)
    else:
        root.left = delete(root.left,data)
    return root

# Depth first traversal
def preorder(root):
    '''Performs the preorder traversal of the BST'''
    if root:
        print(root.data,end=' ')
        preorder(root.left)
        preorder(root.right)

def inorder(root):
    '''Performs the inorder traversal of the BST'''
    if root:
        inorder(root.left)
        print(root.data,end=' ')
        inorder(root.right)

def postorder(root):
    '''Performs the postorder traversal of the BST'''
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.data,end=' ')

def main():
    root = node(5)
    root = insert(root,6)
    root = insert(root,3)
    root = insert(root,4)

    if search(root,4): print("4 was found")
    print("Preorder: ",end='');preorder(root);print()
    print("Inorder: ",end='');inorder(root);print()
    print("Postorder: ",end='');postorder(root);print()
    
    root = delete(root,4)
    print("Preorder: ",end='');preorder(root);print()
    print("Inorder: ",end='');inorder(root);print()
    print("Postorder: ",end='');postorder(root);print()
    

if __name__=="__main__":
    main()