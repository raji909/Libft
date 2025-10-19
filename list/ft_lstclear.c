/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:17:13 by adraji            #+#    #+#             */
/*   Updated: 2025/10/19 21:17:16 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst[0]->next)
		ft_lstclear(&(*lst)->next, del);
	del(lst[0]->content);
	free(*lst);
}
void f(void *p)
{
	free(p);
}

void a() {
	system("leaks ./a.out");
} 
int main()
{

	atexit(a);
	char *p = malloc(2);
	p[0] = 'a';
	p[1] = '\0';
	t_list	*list = ft_lstnew(p);
	ft_lstclear(&list, f);
}
