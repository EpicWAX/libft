char	*ft_strcpy(char *dest, const char *src)
{
//	unsigned int i;
	int i;

	i = -1;
	while (src && src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
