class node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right

def preorder(root):
    '''Performs the preorder traversal of the Binary Tree'''
    if root:
        print(root.data,end=' ')
        preorder(root.left)
        preorder(root.right)

def inorder(root):
    '''Performs the inorder traversal of the Binary Tree'''
    if root:
        inorder(root.left)
        print(root.data,end=' ')
        inorder(root.right)

def postorder(root):
    '''Performs the postorder traversal of the Binary Tree'''
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.data,end=' ')

def main():
    root = node(5)
    root.left = node(4)
    root.right = node(3)
    root.right.left = node(2)
    root.left.right = node(1)
    root.right.right = node(7)
    root.left.left = node(6)

    print("Preorder: ",end = '')
    preorder(root)
    print()
    print("Inorder: ",end = '')
    inorder(root)
    print()
    print("Postorder: ",end = '')
    postorder(root)
    print()


if __name__=="__main__":
    main()