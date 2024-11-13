/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:48:03 by dev               #+#    #+#             */
/*   Updated: 2024/11/12 17:22:35 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)haystack;
	i = 0;
	j = 0;
	if (*needle == 0)
		return (ptr);
	while (i < len)
	{
		j = 0;
		if (ptr[i] == needle[j])
		{
			while (ptr[i + j] == needle[j] && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return (ptr + i);
			}
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *haystack = "Bonjour tout le monde";
//     const char *needle = "";
//     char *result = ft_strnstr(haystack, needle, 7);

//     if (result) {
//         printf("Sous-chaîne trouvée : %s\n", result);
//     } else {
//         printf("Sous-chaîne non trouvée\n");
//     }

//     return (0);
// }
