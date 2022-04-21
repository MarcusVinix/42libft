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

### CTYPE

> **[ft_isalpha](ctype/ft_isalpha.c), [ft_isdigit](ctype/ft_isdigit.c), [ft_isalnum](ctype/ft_isalnum.c), [ft_isascii](ctype/ft_isascii.c), [ft_isprint](ctype/ft_isprint.c)**  
> Check  whether  c,  which  must  have the value of an unsigned char or EOF, falls into a certain character class according to the  specified  locale.
>
> **[ft_isallspace](ctype/ft_isallspace.c)**  
> Check if the char passed is all space.
>
> **[ft_toupper](ctype/ft_toupper.c), [ft_tolower](ctype/ft_tolower.c)**  
> Convert lowercase letters to uppercase, and vice versa.

### FREE

> **[ft_free_ptr](free/ft_free_ptr.c)**  
> Free a pointer.
>
> **[ft_free_split](free/ft_free_split.c)**  
> Free a double pointer char.
>
> **[ft_free_triple](free/ft_free_triple.c)**  
> Free a triple pointer char.
>
> **[ft_set_free_and_null](free/ft_set_free_and_null.c)**  
> Set free and null in a char pointer.
>

### LINKED LIST

> **[ft_lstnew](linked_list/ft_lstnew.c)**  
> Allocates (with malloc) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
>
> **[ft_lstadd_front](linked_list/ft_lstadd_front.c)**  
> Adds the element ’new’ at the beginning of the list.
>
> **[ft_lstsize](linked_list/ft_lstsize.c)**  
> Counts the number of elements in a list.
>
> **[ft_lstlast](linked_list/ft_lstlast.c)**  
> Returns the last element of the list.
>
> **[ft_lstadd_back](linked_list/ft_lstadd_back.c)**  
> Adds the element ’new’ at the end of the list.
>
> **[ft_lstdelone](linked_list/ft_lstdelone.c)**  
> Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
>
> **[ft_lstclear](linked_list/ft_lstclear.c)**  
> Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
>
> **[ft_lstiter](linked_list/ft_lstiter.c)**  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
>
> **[ft_lstmap](linked_list/ft_lstmap.c)**  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.
>

### STDIO

> **[ft_putchar_fd](stdio/ft_putchar_fd.c)**  
> Outputs the character ’c’ to the given file descriptor.
>
> **[ft_putstr_fd](stdio/ft_putstr_fd.c)**  
> Outputs the string ’s’ to the given file descriptor.
>
> **[ft_putendl_fd](stdio/ft_putendl_fd.c)**  
> Outputs the string ’s’ to the given file descriptor, followed by a newline.
>
> **[ft_putnbr_fd](stdio/ft_putnbr_fd.c)**  
> Outputs the integer ’n’ to the given file descriptor.
>
> **[ft_putnbr_base_fd](stdio/ft_putnbr_base_fd.c.c)**  
> Outputs the integer ’n’ converted to the specified base to the given file descriptor.
>

### STDLIB

> **[ft_atoi](stdlib/ft_atoi.c)**  
> Converts the initial portion of the string pointed to by nptr to int.
>
> **[ft_calloc](stdlib/ft_calloc.c)**  
> Allocates size bytes and returns a pointer to the allocated memory.
>
> **[ft_itoa](stdlib/ft_itoa.c)**  
> Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.
>
> **[ft_itoa_base](stdlib/ft_itoa_base.c)**  
> Allocates (with malloc) and returns a string converted for the base received representing the integer received as an argument. Negative numbers must be handled.
>

### STRINGS

> **[ft_bzero](strings/ft_bzero.c)**  
> Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes, (bytes containing '\0') to that area.
>
> **[ft_memset](strings/ft_memset.c)**  
> Fills the first n bytes of the memory area pointed to by s with the constant byte c.
>
> **[ft_memcpy](strings/ft_memcpy.c)**  
> Copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap.
>
> **[ft_memccpy](strings/ft_memccpy.c)**  
> Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.
>
> **[ft_memmove](strings/ft_memmove.c)**  
> Copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
>
> **[ft_memchr](strings/ft_memchr.c)**  
> Scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char.
>
> **[ft_memcmp](strings/ft_memcmp.c)**  
> Returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.
>
> **[ft_strlen](strings/ft_strlen.c)**  
> Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
>
> **[ft_strlen_split](strings/ft_strlen_split.c)**  
> Calculates the length of a splitted string pointed to by s, excluding the terminating null byte ('\0').
>
> **[ft_strlcpy](strings/ft_strlcpy.c)**  
> Copies up to size - 1 characters from the NULL-terminated string src to dst, NULL-terminating the result.
>
> **[ft_strlcat](strings/ft_strlcat.c)**  
> Appends the NULL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NULL-terminating the result.
>
> **[ft_strchr](strings/ft_strchr.c)**  
> Returns a pointer to the first occurrence of the character c in the string s.
>
> **[ft_strrchr](strings/ft_strrchr.c)**  
> Returns a pointer to the last occurrence of  the character c in the string s.
>
> **[ft_strnstr](ft_strnstr.c)**  
> Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.
>
> **[ft_strncmp](strings/ft_strncmp.c)**  
> Compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if  s1  is  found, respectively, to be less than, to match, or be greater than s2.
>
> **[ft_strdup](strings/ft_strdup.c)**  
> Returns a pointer to a new string which is a duplicate of the string s. Return NULL if has some error.
>
> **[ft_strdup2](strings/ft_strdup2.c)**  
> Returns a pointer to a new string which is a duplicate of the string s. Return an empty string if has some error.
>
> **[ft_substr](strings/ft_substr.c)**  
> Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
>
> **[ft_strjoin](strings/ft_strjoin.c)**  
> Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
>
> **[ft_strtrim](strings/ft_strtrim.c)**  
> Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
>
> **[ft_split](strings/ft_split.c)**  
> Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
>
> **[ft_split_rev](strings/ft_split_rev.c)**  
> Join a splited string.
>
> **[ft_concatenate_join](strings/ft_conactenate_join.c)**  
> Concatenate the first argument with the second using join.
>

### UTILS

> **[ft_strmapi](utils/ft_strmapi.c)**  
> Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
>
> **[ft_find_index](utils/ft_find_index.c)**  
> Go through the first parameter and find the c passed as second parameter. If the c is find it return the position otherwise returns -1.
>
> **[ft_line](utils/ft_line.c)**  
> Take the s parameter and copy n characters specified in second parameter and put the terminate null '\0'. 
>
> **[ft_line](utils/ft_swap.c)**  
> Swap to int pointers.
>
> **[get_next_line](utils/get_next_line.c)**  
> Return a line of the file descriptor passed. Return 1 if find a line, -1 if has an error, 0 if is the last line.
>
