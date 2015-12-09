#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t k;
	size_t needle_len;

	i = 0;
	k = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (haystack);
	while (haystack && haystack[i])
	{
		while (haystack[i + k] == needle_len[k])
		{
			if (k == needle_len - 1)
				return (haystack + i);
			k++;
		}
		k = 0;
		i++;
	}
	return (NULL);
}
