#include "ft_btree.h"
#include <stdio.h>
/*void display(void *item)
{
            printf("%s ", (cahr *)item);

}*/
void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
            if(root->right)
            btree_apply_suffix(root->right, applyf);
            if(root->left)
            btree_apply_suffix(root->left, applyf);
            applyf(root->item);




}
/*int main(void)
{
    
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
	t_btree	level3rl = {NULL, NULL, "6"};
	t_btree	level3rr = {NULL, NULL, "7"};
	t_btree level2l = {&level3ll, &level3lr, "2"};
    btree_apply_suffix(&level1, display);
	return (0);
}*/ 

