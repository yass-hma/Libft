#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	while (len > i)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str)
{
    int i = 0;
	while (str[i] && str[i] != '\n')
		i++;
    if (str[i] == '\0')
        return (0);
    return (i + 1);
}
static void	ft_strcpy(char *dest, char const *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (src[j])
		j++ ;
	while (i < j + 1)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	ft_strcat(char *dest, char const *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*str_return;

	i = 0;
	j = 0;
	if (!s1 ||!s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	str_return = malloc(sizeof(char) * (size + 1));
	if (!str_return)
		return (NULL);
	ft_strcpy(str_return, s1);
	ft_strcat(str_return, s2);
	return (str_return);
}

char    *get_next_line(int fd)
{
    int buffer_size = 1000, size = 0, i = 1, j,nb;
    static int appel = 0;
    static char *str;
    char *buff;

    if ((str[buffer_size - 1] == '\n' && appel == 1) || appel == 0)
    {
        str = malloc(buffer_size);
        nb = read(fd,str,buffer_size);
        str[nb] = '\0';
        j = ft_strrchr(str);
        if (j > 0)
        {
            buff = malloc(buffer_size + 1);
            ft_strcpy(buff,str);
            buff[j] = '\0';
            appel++;
            return buff;
        }
        buff = malloc(buffer_size);
        ft_strcpy(buff,str);
    }
    else
        buff= str;

    //printf("%s\n",str);
    while(1)
    {
        size = buffer_size * i++;
        str = malloc(buffer_size + 1);
        nb = read(fd,str,buffer_size);
        str[nb] = '\0';
        printf("%s\n",str);
        j = ft_strrchr(str);
        printf("exite : %d\n",j);
        printf("size = %d\n",size);
        if (j > 0)
        {
            buff = ft_strjoin(buff,str);
            buff[size + j] = '\0';
            appel++;
            return buff;
        }
        else
            buff = ft_strjoin(buff,str);
    }
    return NULL;
}
int main()
{
    int fd = open("test.txt",0);
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    return 0;
}
