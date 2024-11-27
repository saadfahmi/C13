#include "ft_btree.h"
#include <stdio.h>
/*void ft_display(void *item)
{

        printf("%s ", (char *)item);
}*/
void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
        if(root->left)
        btree_apply_infix(root->left,applyf);
        applyf(root->item);
        if(root->right)
        btree_apply_infix(root->right,applyf);





}
/* int	main()
{
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
    btree_apply_infix(&level1, display);
	return (0);
} */