#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
/*t_btree	*btree_create_node(void	*item)

{
        t_btree *node;
        node = (t_btree *)malloc(sizeof(t_btree));
        node->item = NULL;
        node->right = NULL;
        node->left = NULL;
        return(node);



}
int ft_strcmp(void *s1, void *s2)
{
    retunr((char *)s1 - (char *)s2);

}*/
void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
        t_btree node;
        if ((*root) == NULL)
		*root = btree_create_node(item);
	node = *root;
	if ((cmpf)(item, (*root)->item) < 0)
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}

        

        /*void ft_dipslay(void *item)
        {
            printf(" %s", (char *)item);

        }
void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{


                applyf(root->item);
                if(root->right)
                btree_apply_prefix(root->right,applyf);
                if(root->left)
                btree_apply_prefix(root->left, applyf);


}*/


 



