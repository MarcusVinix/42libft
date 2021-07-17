# 42libft

> This is my C functions library, my first project as a cadet at School 42 São Paulo. It has functions to manipulate strings, memory, and linked list, and I will expand this in the future when necessary.
***

## Makefile

> **[Makefile](/Makefile)**  
> The Makefile will compile the static library `libft.a`  
>
> **Rules**  
>
> 1. all - Make the `libft.a` of the mandatory functions
> 2. bonus - Make the `libft.a` of the bonus functions
> 3. clean - Delete all the objects(.o) of the folder.
> 4. fclean - Make clean and delete the `libft.a`
> 5. re - Remake the `libft.a`

***

## Included Functions

### First section

> **[ft_memset](/ft_memset.c)**  
> Fills the first n bytes of the memory area pointed to by s with the constant byte c.
>
> **[ft_bzero](/ft_bzero.c)**  
> Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes, (bytes containing '\0') to that area.
>
> **[ft_memcpy](/ft_memcpy.c)**  
> Copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap.
>
> **[ft_memccpy](/ft_memccpy.c)**  
> Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.
>
> **[ft_memmove](/ft_memmove.c)**  
> Copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
>
> **[ft_memchr](/ft_memchr.c)**  
> Scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char.
>
> **[ft_memcmp](/ft_memcmp.c)**  
> Returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.
>
> **[ft_strlen](/ft_strlen.c)**  
> Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
>
> **[ft_strlcpy](/ft_strlcpy.c)**  
> Copies up to size - 1 characters from the NULL-terminated string src to dst, NULL-terminating the result.
>
> **[ft_strlcat](/ft_strlcat.c)**  
> Appends the NULL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NULL-terminating the result.
>
> **[ft_strchr](/ft_strchr.c)**  
> Returns a pointer to the first occurrence of the character c in the string s.
>
> **[ft_strrchr](/ft_strrchr.c)**  
> Returns a pointer to the last occurrence of  the character c in the string s.
>
> **[ft_strnstr](ft_strnstr.c)**  
> Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.
>
> **[ft_strncmp](/ft_strncmp.c)**  
> Compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if  s1  is  found, respectively, to be less than, to match, or be greater than s2.
>
> **[ft_atoi](/ft_atoi.c)**  
> Converts the initial portion of the string pointed to by nptr to int.
>
> **[ft_isalpha](/ft_isalpha.c), [ft_isdigit](/ft_isdigit.c), [ft_isalnum](/ft_isalnum.c), [ft_isascii](/ft_isascii.c), [ft_isprint](/ft_isprint.c)**  
> Check  whether  c,  which  must  have the value of an unsigned char or EOF, falls into a certain character class according to the  specified  locale.
>
> **[ft_toupper](/ft_toupper.c), [ft_tolower](ft_tolower.c)**  
> Convert lowercase letters to uppercase, and vice versa.
>
> **[ft_calloc](/ft_calloc.c)**  
> Allocates size bytes and returns a pointer to the allocated memory.
>
> **[ft_strdup](/ft_strdup.c)**  
> Returns  a  pointer to a new string which is a duplicate of the string s.
>

***

### Second section

> **[ft_substr](/ft_substr.c)**  
> Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
>
> **[ft_strjoin](/ft_strjoin.c)**  
> Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
>
> **[ft_strtrim](/ft_strtrim.c)**  
> Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
>
> **[ft_split](/ft_split.c)**  
> Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
>
> **[ft_itoa](/ft_itoa.c)**  
> Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.
>
> **[ft_strmapi](/ft_strmapi.c)**  
> Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
>
> **[ft_putchar_fd](/ft_putchar_fd.c)**  
> Outputs the character ’c’ to the given file descriptor.
>
> **[ft_putstr_fd](/ft_putstr_fd.c)**  
> Outputs the string ’s’ to the given file descriptor.
>
> **[ft_putendl_fd](ft_putendl_fd.c)**  
> Outputs the string ’s’ to the given file descriptor, followed by a newline.
>
> **[ft_putnbr_fd](ft_putnbr_fd.c)**  
> Outputs the integer ’n’ to the given file descriptor.
>

***

### Bonus Section

> **[ft_lstnew](/ft_lstnew.c)**  
> Allocates (with malloc) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
>
> **[ft_lstadd_front](/ft_lstadd_front.c)**  
> Adds the element ’new’ at the beginning of the list.
>
> **[ft_lstsize](/ft_lstsize.c)**  
> Counts the number of elements in a list.
>
> **[ft_lstlast](/ft_lstlast.c)**  
> Returns the last element of the list.
>
> **[ft_lstadd_back](/ft_lstadd_back.c)**  
> Adds the element ’new’ at the end of the list.
>
> **[ft_lstdelone](/ft_lstdelone.c)**  
> Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
>
> **[ft_lstclear](/ft_lstclear.c)**  
> Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
>
> **[ft_lstiter](/ft_lstiter.c)**  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
>
> **[ft_lstmap](/ft_lstmap.c)**  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.
>
***

### Functions necessary for others projects

>**[ft_putnbr_base_fd](/ft_putnbr_base_fd.c)**  
> Outputs the integer ’n’ converted for the base passed to the given file descriptor.  
>**[ft_itoa_base_fd](/ft_itoa_base_fd.c)**  
> Allocates (with malloc) and returns a string converted for the base received representing the integer received as an argument. Negative numbers must be handled.