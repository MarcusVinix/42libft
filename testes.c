#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>

void	printa();
void	printaf(char *c);
char    ft_fchar(unsigned int ic, char c)
{
	if (ic < 10 && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

int	main(void)
{
	printaf("memset");
	char dest[50];
	char dest2[50];

	strcpy(dest, "HELLAHHI'm THE DEST");
	strcpy(dest2, "HELLAHHI'm THE DEST");

	char *teste = ft_memset(dest2, '@', 5);
	char *test = memset(dest, '@', 5);

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test, teste);

	char *teste2 = ft_memset(dest2, 'm', strlen(dest2));
	char *test2 = memset(dest,'m', strlen(dest));

	printf("Expected: %s  | Received: %s\n\n", test2, teste2);
	
	printa();
	printaf("memcpy");
	char dest_cpy[50];
	char dest_cpy2[50];

	strcpy(dest_cpy, "HELLAHHI'm THE DEST");
	strcpy(dest_cpy2, "HELLAHHI'm THE DEST");

	char *teste_cpy = ft_memcpy(dest_cpy2, "SRC O HERE", 0);
	char *test_cpy = memcpy(dest_cpy, "SRC O HERE", 0);

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test_cpy, teste_cpy);

	char *teste_cpy2 = ft_memcpy(dest_cpy2, "SRC O HERE", 8);
	char *test_cpy2 = memcpy(dest_cpy, "SRC O HERE", 8);

	printf("Expected: %s  | Received: %s\n\n", test_cpy2, teste_cpy2);

	printa();
	printaf("memccpy");

	char dest_ccpy[50];
	char dest_ccpy2[50];

	strcpy(dest_ccpy, "HELLAHHI'm THE DEST");
	strcpy(dest_ccpy2, "HELLAHHI'm THE DEST");

	char *teste_ccpy = ft_memccpy(dest_ccpy2, "SRC O HERE", 0, 0);
	char *test_ccpy = memccpy(dest_ccpy, "SRC O HERE", 0, 0);

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test_ccpy, teste_ccpy);

	char *teste_ccpy2 = ft_memccpy(dest_ccpy2, "SRC O HERE", 'C', 8);
	char *test_ccpy2 = memccpy(dest_ccpy, "SRC O HERE", 'C', 8);

	printf("Expected: %s  | Received: %s\n\n", test_ccpy2, teste_ccpy2);

	printa();
	printaf("memmove");
	char		dest_move[] = "oldstring";
	const char	src_move[] = "newstring";
	char		dest_move2[] = "DEST ANTIGO NOVO TESTE";
	const char	src_move2[] = "SRC old New TEST";

	char *teste_move = memmove(dest_move, src_move, 9);
	char *ft_teste_move = ft_memmove(dest_move, src_move, 9);
	printf("\nTESTES:\n");
	printf("Expected: %s || Received: %s\n", teste_move, ft_teste_move);
	char *teste_move2 = memmove(dest_move2, src_move2, 10);
	char *ft_teste_move2 = ft_memmove(dest_move2, src_move2, 10);
	printf("Expected: %s || Received: %s\n\n", teste_move2, ft_teste_move2);

	printa();
	printaf("memchr");

	char dest_chr[50];
	char dest_chr2[50];

	strcpy(dest_chr, "HELLAHHI'm THE DEST");
	strcpy(dest_chr2, "HELLAHHI'm THE DEST");

	char *teste_chr = ft_memchr(dest_chr2, 0, 0);
	char *test_chr = memchr(dest_chr, 0, 0);

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test_chr, teste_chr);

	char *teste_chr2 = ft_memchr(dest_chr2, 'm', strlen(dest_chr2));
	char *test_chr2 = memchr(dest_chr,'m', strlen(dest_chr));

	printf("Expected: %s  | Received: %s\n\n", test_chr2, teste_chr2);

	printa();
	printaf("memcmp");

	char	str_cmp1[] = "abcdef";
	char	str_cmp2[] = "ABCDEF";
	char	str_cmp3[] = "abcda12efasd";
	char	str_cmp4[] = "ABCDEFasd";
	char	str_cmp5[] = "abcd132ef";
	char	str_cmp6[] = "zabc";

	printf("\nTestes\n");
	int		teste_cmp = memcmp(str_cmp1, str_cmp2, 5);
	int		ft_teste_cmp = ft_memcmp(str_cmp1, str_cmp2, 5);
	printf("Expected: %d || Received: %d\n", teste_cmp, ft_teste_cmp);

	int		teste_cmp2 = memcmp(str_cmp1, str_cmp2, 0);
	int		ft_teste_cmp2 = ft_memcmp(str_cmp1, str_cmp2, 0);
	printf("Expected: %d || Received: %d\n", teste_cmp2, ft_teste_cmp2);

	int		teste_cmp3 = memcmp(str_cmp3, str_cmp4, 3);
	int		ft_teste_cmp3 = ft_memcmp(str_cmp3, str_cmp4, 3);
	printf("Expected: %d || Received: %d\n", teste_cmp3, ft_teste_cmp3);

	int		teste_cmp4 = memcmp(str_cmp5, str_cmp6, 10);
	int		ft_teste_cmp4 = ft_memcmp(str_cmp5, str_cmp6, 10);
	printf("Expected: %d || Received: %d\n\n", teste_cmp4, ft_teste_cmp4);

	printa();
	printaf("strlcpy");

	char	str_strlcpy1[] = "abcdef";
	char	str_strlcpy2[] = "ABCDEF";
	char	str_strlcpy3[] = "abcda12efasd";
	char	str_strlcpy4[] = "ABCDEFasd";
	char	str_strlcpy5[] = "abcd132ef";
	char	str_strlcpy6[] = "zabc";

	printf("\nTestes\n");
	int		teste_strlcpy = strlcpy(str_strlcpy1, str_strlcpy2, 5);
	printf("SRC: %s\nSize: 5\n", str_strlcpy2);
	printf("BDest: %s\n", str_strlcpy1);
	int		ft_teste_strlcpy = ft_strlcpy(str_strlcpy1, str_strlcpy2, 5);
	printf("Expected: %d || Received: %d\n", teste_strlcpy, ft_teste_strlcpy);
	printf("ADest: %s\n\n", str_strlcpy1);
	

	int		teste_strlcpy3 = strlcpy(str_strlcpy3, str_strlcpy4, 3);
	printf("SRC: %s\nSize: 3\n", str_strlcpy4);
	printf("BDest: %s\n", str_strlcpy3);
	int		ft_teste_strlcpy3 = ft_strlcpy(str_strlcpy3, str_strlcpy4, 3);
	printf("Expected: %d || Received: %d\n", teste_strlcpy3, ft_teste_strlcpy3);
	printf("ADest: %s\n\n", str_strlcpy3);

	int		teste_strlcpy4 = strlcpy(str_strlcpy5, str_strlcpy6, 10);
	printf("SRC: %s\nSize: 10\n", str_strlcpy6);
	printf("BDest: %s\n", str_strlcpy5);
	int		ft_teste_strlcpy4 = ft_strlcpy(str_strlcpy5, str_strlcpy6, 10);
	printf("Expected: %d || Received: %d\n", teste_strlcpy4, ft_teste_strlcpy4);
	printf("ADest: %s\n\n", str_strlcpy5);

	printa();
	printaf("strchr");

	char dest_strchr[50];
	char dest_strchr2[50];

	strcpy(dest_strchr, "HELLAHHI'm THE DEST");
	strcpy(dest_strchr2, "HELLAHHI'm THE DEST");

	char *teste_strchr = ft_strchr(dest_strchr2, 'Y');
	char *test_strchr = strchr(dest_strchr, 'Y');

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test_strchr, teste_strchr);

	char *teste_strchr2 = ft_strchr(dest_strchr2, 'm');
	char *test_strchr2 = strchr(dest_strchr,'m');

	printf("Expected: %s  | Received: %s\n", test_strchr2, teste_strchr2);

	char *teste_strchr3 = ft_strchr(dest_strchr2, 0);
	char *test_strchr3 = strchr(dest_strchr, 0);

	printf("Expected: %s  | Received: %s\n\n", test_strchr3, teste_strchr3);

	printa();
	printaf("strrchr");

	char dest_strrchr[50];
	char dest_strrchr2[50];

	strcpy(dest_strrchr, "HELLAHHI'm THE DEST");
	strcpy(dest_strrchr2, "HELLAHHI'm THE DEST");

	char *teste_strrchr = ft_strrchr(dest_strrchr2, 'Y');
	char *test_strrchr = strrchr(dest_strrchr, 'Y');

	printf("\nTESTES:\n");
	printf("Expected: %s  | Received: %s\n", test_strrchr, teste_strrchr);

	char *teste_strrchr2 = ft_strrchr(dest_strrchr2, 'E');
	char *test_strrchr2 = strrchr(dest_strrchr,'E');

	printf("Expected: %s  | Received: %s\n", test_strrchr2, teste_strrchr2);

	char *teste_strrchr3 = ft_strrchr(dest_strrchr2, 0);
	char *test_strrchr3 = strrchr(dest_strrchr, 0);

	printf("Expected: %s  | Received: %s\n\n", test_strrchr3, teste_strrchr3);

	printa();
	printaf("isalpha");
	printf("esperado numero maiores que 0 se for verdade e 0 se não for\n");
	printf("Expectd: %d | Received: %d\n", isalpha('a'), ft_isalpha('a'));
	printf("Expectd: %d | Received: %d\n", isalpha('z'), ft_isalpha('z'));
	printf("Expectd: %d | Received: %d\n", isalpha('A'), ft_isalpha('A'));
	printf("Expectd: %d | Received: %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("Expectd: %d | Received: %d\n", isalpha('7'), ft_isalpha('7'));

	printa();
	printaf("isdigit");
	printf("esperado numero maiores que 0 se for verdade e 0 se não for\n");
	printf("Expectd: %d | Received: %d\n", isdigit(48), ft_isdigit(48));
	printf("Expectd: %d | Received: %d\n", isdigit(57), ft_isdigit(57));
	printf("Expectd: %d | Received: %d\n", isdigit('9'), ft_isdigit('9'));
	printf("Expectd: %d | Received: %d\n", isdigit(0), ft_isdigit(0));
	printf("Expectd: %d | Received: %d\n", isdigit('a'), ft_isdigit('a'));

	printa();
	printaf("isalnum");
	printf("esperado numero maiores que 0 se for verdade e 0 se não for\n");
	printf("Expectd: %d | Received: %d\n", isalnum(48), ft_isalnum(48));
	printf("Expectd: %d | Received: %d\n", isalnum(57), ft_isalnum(57));
	printf("Expectd: %d | Received: %d\n", isalnum('A'), ft_isalnum('A'));
	printf("Expectd: %d | Received: %d\n", isalnum(0), ft_isalnum(0));
	printf("Expectd: %d | Received: %d\n", isalnum('a'), ft_isalnum('a'));


	printa();
	printaf("isascii");
	printf("esperado numero maiores que 0 se for verdade e 0 se não for\n");
	printf("Expectd: %d | Received: %d\n", isascii(48), ft_isascii(48));
	printf("Expectd: %d | Received: %d\n", isascii(128), ft_isascii(128));
	printf("Expectd: %d | Received: %d\n", isascii('A'), ft_isascii('A'));
	printf("Expectd: %d | Received: %d\n", isascii(0), ft_isascii(0));
	printf("Expectd: %d | Received: %d\n", isascii(127), ft_isascii(127));
	printf("Expectd: %d | Received: %d\n", isascii(-1), ft_isascii(-1));


	printa();
	printaf("isprint");
	printf("esperado numero maiores que 0 se for verdade e 0 se não for\n");
	printf("Expectd: %d | Received: %d\n", isprint(48), ft_isprint(48));
	printf("Expectd: %d | Received: %d\n", isprint(128), ft_isprint(128));
	printf("Expectd: %d | Received: %d\n", isprint('A'), ft_isprint('A'));
	printf("Expectd: %d | Received: %d\n", isprint(0), ft_isprint(0));
	printf("Expectd: %d | Received: %d\n", isprint(127), ft_isprint(127));
	printf("Expectd: %d | Received: %d\n", isprint(-1), ft_isprint(-1));
	printf("Expectd: %d | Received: %d\n", isprint(32), ft_isprint(32));

	printa();
	printaf("toupper");
	printf("Expectd: %d | Received: %d\n", toupper(122), ft_toupper(122));
	printf("Expectd: %d | Received: %d\n", toupper(97), ft_toupper(97));
	printf("Expectd: %d | Received: %d\n", toupper('A'), ft_toupper('A'));
	printf("Expectd: %d | Received: %d\n", toupper(90), ft_toupper(90));
	printf("Expectd: %d | Received: %d\n", toupper(70), ft_toupper(70));
	printf("Expectd: %d | Received: %d\n", toupper(-1), ft_toupper(-1));

	printa();
	printaf("tolower");
	printf("Expectd: %d | Received: %d\n", tolower(122), ft_tolower(122));
	printf("Expectd: %d | Received: %d\n", tolower(97), ft_tolower(97));
	printf("Expectd: %d | Received: %d\n", tolower('A'), ft_tolower('A'));
	printf("Expectd: %d | Received: %d\n", tolower(90), ft_tolower(90));
	printf("Expectd: %d | Received: %d\n", tolower(70), ft_tolower(70));
	printf("Expectd: %d | Received: %d\n", tolower(-1), ft_tolower(-1));

	printa();
	printaf("CALLOc");

	int f = 10, i = 0, *a, *b, n = 3;

	a = (int *)calloc(n, sizeof(int));
	b = (int *)ft_calloc(n, sizeof(int));
	while(i < n)
	{
		a[i] = f + 10;
		b[i] = f + 10;
		i++;
	}
	i = 0;
	while (i++ < n)
		printf("Expected: %d  | Received: %d\n", a[i], b[i]);
	free(a);
	free(b);

	printa();
	printaf("STRDUP");

	char *str = "TESTANDO STRDUP";
	char *cpy1;
	char *cpy2;

	cpy1 = strdup(str);
	cpy2 = ft_strdup(str);
	printf("Expected %s | Received: %s\n", cpy1, cpy2);
	printf("strcmp: %d\n", strcmp(cpy1, cpy2));
	free(cpy1);
	free(cpy2);

	printa();
	printaf("ATOI");

	int test_atoi1 = atoi("\n54");
	int test_atoi2 = ft_atoi("\n54");
	printf("Expected: %d | Received: %d\n", test_atoi1, test_atoi2);

	printa();
	printaf("strlcat");
    char destcat[] = "largatixa";
    char srccat[] = "malasiatica";
    int retorno = ft_strlcat(destcat, srccat, 20);

    printf("dest: %s ... retorno: %d\n", destcat, retorno);

	printa();
	printaf("STRTRIM");

	char s1_trim[] = " \nBLABL ABL0\n \n";
	char set_trim[] = " L  \n";

	char *teste_trim1 = ft_strtrim(s1_trim, set_trim);
	printf("teste1: %s\n", teste_trim1);
	free(teste_trim1);

	printa();
	printaf("SPLIT");

	char const teste_split1[] = "teste teste_split1 teste3 ster";
	char **resul_split = ft_split(teste_split1, ' ');
	for(int i = 0; i < 4; i++)
		printf("teste: %s\n", resul_split[i]);
	free(resul_split);

	printa();
	printaf("STRMAPI");
	char    test_mapi[15] = "harry potter";
	char    *result_mapi = ft_strmapi(test_mapi, ft_fchar);
	printf("%s\n", result_mapi);

	printa();
	printaf("ft_putchar_fd");
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);

	printa();
	printaf("ft_putstr_fd");
	ft_putstr_fd("HELLO WORLD\n", 1);

	printa();
	printaf("ft_putendl_fd");
	ft_putendl_fd("HELLO TO TESTANDOI AQ", 1);

	printa();
	printaf("ft_putnbr_fd");
	ft_putnbr_fd(1563, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-153, 1);
	ft_putchar_fd('\n', 1);
	write(1, "te", 2);

	return (0);
}

void	printa()
{
	int i = 0;
	while (i < 100)
	{
		printf("*");
		i++;
	}
	printf("\n");
}

void	printaf(char *c)
{
	printf("function %s\n", c);
}
