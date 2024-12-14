#include <stdio.h>
#include "ft_btree.h"
int btree_level_count(t_btree *root)
{
    int countl;
    int countr;
    if(root)
    {
        countl = btree_level_count(root->right);
        countr = btree_level_count(root->left);

    
    if(countl > countr)
    
                return (countl + 1);

    else
                return(countr + 1);
    }


    else
                return(0);
}