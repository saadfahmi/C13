#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
t_btree *btree_create_node(void *item)
{

    t_btree *node;
    node = (t_btree *)mmalloc(sizeof(t_btree));
    node->item = item;
    node->right = NULL;
    node->left = NULL;
    return(node);
    






}