#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	ft_strcpy(&dest[ft_strlen(dest)], src);
	return (dest);
}

/*						MY CODE
**	unsigned int i;
**	unsigned int len;
**
**	i = 0;
**	len = ft_strlen(src);
**	while (src && src[i])
**	{
**		dest[len + i] = src[i];
**		i++;
**	}
**	dest[len + i] = '\0';
**	return (dest);
*/
