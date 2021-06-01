# 42libft

This is my C functions library, my first project as a cadet at School 42 São Paulo. It has functions to manipulate strings, memory, and linked list, and I will expand this in the future when necessary.

## Included Functions

### First section

| Name  | Description  |
| :------------: | :--------------- |
| [ft_memset](/ft_memset.c) | Fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| [ft_bzero](/ft_bzero.c)   | Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes, (bytes containing '\0') to that area. |
|  [ft_memcpy](/ft_memcpy.c) |  Copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap. |
|  [ft_memccpy](/ft_memccpy.c) |  Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. |
|  [ft_memmove](/ft_memmove.c) |  Copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. |
|  [ft_memchr](/ft_memchr.c) |  Scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char. |
|  [ft_memcmp](/ft_memcmp.c) |  Returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. |
|  [ft_strlen](/ft_strlen.c) |  Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0'). |
|  [ft_strlcpy](/ft_strlcpy.c) | Copies up to size - 1 characters from the NULL-terminated string src to dst, NULL-terminating the result. |
|  [ft_strlcat](/ft_strlcat.c) | Appends the NULL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NULL-terminating the result. |
|  [ft_strchr](/ft_strchr.c) |  Returns a pointer to the first occurrence of the character c in the string s. |
|  [ft_strrchr](/ft_strrchr.c) |  Returns a pointer to the last occurrence of  the character c in the string s. |
|  [ft_strnstr](ft_strnstr.c) |  Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. |
|  [ft_strncmp](/ft_strncmp.c) |  Compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if  s1  is  found, respectively, to be less than, to match, or be greater than s2. |
|  [ft_atoi](/ft_atoi.c) |  Converts the initial portion of the string pointed to by nptr to int. |
|  [ft_isalpha](/ft_isalpha.c), [ft_isdigit](/ft_isdigit.c), [ft_isalnum](/ft_isalnum.c), [ft_isascii](/ft_isascii.c), [ft_isprint](/ft_isprint.c) |  Check  whether  c,  which  must  have the value of an unsigned char or EOF, falls into a certain character class according to the  specified  locale. |
|  [ft_toupper](/ft_toupper.c), [ft_tolower](ft_tolower.c) |  Convert lowercase letters to uppercase, and vice versa. |
|  [ft_calloc](/ft_calloc.c) |  Lllocates size bytes and returns a pointer to the allocated memory. |
|  [ft_strdup](/ft_strdup.c) |  Returns  a  pointer to a new string which is a duplicate of the string s. |
