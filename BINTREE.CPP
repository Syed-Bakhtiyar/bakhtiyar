#include <stdio.h>
#include <stdlib.h>
# include<conio.h>

struct btnode
{
    int value;
    struct btnode *left, *right;
};


void insert(btnode *, btnode *);
void bfs_traverse(btnode *);


btnode *root = NULL;
int val, front = 0, rear = -1, i;
int queue[20];

int main(){
	clrscr();
    btnode *temp;
    int num = 1;
    printf("Enter the elements of the tree(enter 0 to exit)\n");
    while (1)
    {
	scanf("%d",  &num);
	if (num  ==  0)
	    break;
	temp = new btnode;
	temp->left = temp->right = NULL;
	temp->value = num;
	if (root == NULL)
	    root = temp;
	else
	{
	    insert(temp, root);
	}
    }
    printf("elements in a tree in inorder are\n");
    queue[++rear] = root->value;
    bfs_traverse(root);
    for (i = 0;i <= rear;i++)
	printf("%d -> ", queue[i]);
    printf("%d\n", root->right->right->right->value);
getch();
return 0;
}

/* inserting nodes of a tree */
void insert(btnode * temp ,btnode *root)
{
    if (temp->value>root->value)
    {
	if (root->right == NULL)
	    root->right =temp;
	else
	    insert (temp, root->right);
    }
    if (temp->value < root->value)
    {
	if (root->left  ==  NULL)
	    root->left = temp;
	else
	    insert (temp, root->left);
    }
}


void bfs_traverse(btnode *root)
{
    val = root->value;
    if ((front <= rear)&&(root->value == queue[front]))
    {
	if (root->left != NULL);
	    queue[++rear] = root->left->value;
	if (root->right != NULL || root->right  ==  NULL)
	    queue[++rear] = root->right->value;
	front++;
    }
    if (root->left != NULL)
    {
	bfs_traverse(root->left);
    }
}