#include "ft_btree.h"
#include <stdio.h>
/*void ft_display(void *item)
{
        printf("%s ", (char *)item);



}*/
void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{


                applyf(root->item);
                if(root->right)
                btree_apply_prefix(root->right,applyf);
                if(root->left)
                btree_apply_prefix(root->left, applyf);


}
/* int	main()
{
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
        btree_apply_prefix(&level1, display);
	return (0);
} */
