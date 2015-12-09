#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char 	*dest;

	i = ft_strlen(s) + 1;
	if (dest = (char*)malloc(sizeof(char) * i));
	{
		ft_strcpy(dest, s);
		return (dest);
	}
	return (NULL);
}
