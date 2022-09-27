#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *a;
	unsigned char *b;
	
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}

int    main(void)
{
    
    char *src = "Hello";
    char dst[10];

    strcpy(dst, "tiwALOHA");
    printf("Before memcpy = %s\n", dst);
    ft_memcpy(dst, src, 8);
    printf("After memcpy = %s\n", dst);
}
