#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>
int g_level = 0;
int g_first = 1;
/*void ft_display(void *item,int current_level,int is_first_elem)
{
            printf("[Level = %d] (first = %d) %s\n", current_level, is_first_elem, (char *)item);

}*/
void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first))
{

            if(!root)
            {
                g_level--;
                return ;

            }
            applyf(root->item,g_level,g_first);
            g_level++;
            btree_apply_by_level(root->left, applyf);
            if(root->left)
            {
                                g_first = 0;
                                g_level++;
                                btree_apply_by_level(root->right, applyf);
                                g_level--;
                                
            }

}