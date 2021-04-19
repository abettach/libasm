/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <abettach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:03:19 by abettach          #+#    #+#             */
/*   Updated: 2021/03/06 18:22:41 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void ft_strcpy_test()
{
    printf(YEL);
    printf("***********************************\n");
    printf("          ft_strcpy_test           \n");
    printf("***********************************\n");
    printf(WHT);
    char *Mydst1 = malloc(sizeof(char) * 1);
    char *dst1 = malloc(sizeof(char) * 1);
    // char Mydst1[2];
    // char dst1[2];
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strcpy(Mydst1, "test"), strcpy(dst1, "test"));
    free(Mydst1);
    free(dst1);
    char *Mydst2 = malloc(sizeof(char) * 1);
    char *dst2 = malloc(sizeof(char) * 1);
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strcpy(Mydst2, ""), strcpy(dst2, ""));
    free(Mydst2);
    free(dst2);
    char *Mydst3 = malloc(sizeof(char) * 252);
    char *dst3 = malloc(sizeof(char) * 252);
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strcpy(Mydst3, "Cette fonction permet de copier le contenu d'une chaîne de caractères dans une autre.Bien entendu, la chaîne de caractère devant recevoir le contenu de l'autre doit être allouée de manière à être suffisament grande pour contenir tout le texte."), strcpy(dst3, "Cette fonction permet de copier le contenu d'une chaîne de caractères dans une autre.Bien entendu, la chaîne de caractère devant recevoir le contenu de l'autre doit être allouée de manière à être suffisament grande pour contenir tout le texte."));
    free(Mydst3);
    free(dst3);
}

void ft_strcmp_test()
{
    printf(YEL);
    printf("***********************************\n");
    printf("          ft_strcmp_test           \n");
    printf("***********************************\n");
    printf(WHT);
    printf("NON ORIGINAL : %d \nORIGINAL     : %d\n\n", ft_strcmp("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères.", "Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."), strcmp("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères.", "Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."));
    printf("NON ORIGINAL : %d \nORIGINAL     : %d\n\n", ft_strcmp("", ""), strcmp("", ""));
    printf("NON ORIGINAL : %d \nORIGINAL     : %d\n\n", ft_strcmp("test", "tesz"), strcmp("test", "tesz"));
    printf("NON ORIGINAL : %d \nORIGINAL     : %d\n\n", ft_strcmp("Cette fonction permet de comparer une chaîne de caractères.", "Cette fonction permet de comparer une chaîne de caractères."), strcmp("Cette fonction permet de comparer une chaîne de caractères.", "Cette fonction permet de comparer une chaîne de caractères."));
}

void ft_strlen_test()
{
    printf(YEL);
    printf("***********************************\n");
    printf("          ft_strlen_test           \n");
    printf("***********************************\n");
    printf(WHT);
    printf("NON ORIGINAL : %zu \nORIGINAL     : %zu\n\n", ft_strlen("test"), strlen("test"));
    printf("NON ORIGINAL : %zu \nORIGINAL     : %zu\n\n", ft_strlen(""), strlen(""));
    printf("NON ORIGINAL : %zu \nORIGINAL     : %zu\n\n", ft_strlen("testtesttest"), strlen("testtesttest"));
    printf("NON ORIGINAL : %zu \nORIGINAL     : %zu\n\n", ft_strlen("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."), strlen("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."));
}

void ft_write_test()
{
    printf(YEL);
    printf("***********************************\n");
    printf("          ft_write_test           \n");
    printf("***********************************\n");

    ft_write(1, WHT, 7);

    ft_write(1, "NON ORIGINAL : ", 15);
    printf("\n\e[1;34mreturn : %zd\n", ft_write(1, "test", 4));
    ft_write(1, WHT, 7);

    write(1, "ORIGINAL     : ", 15);
    printf("\n\e[1;32mreturn : %zd\n", write(1, "test", 4));
    ft_write(1, WHT, 7);

    ft_write(1, "\nNON ORIGINAL : ", 16);
    printf(BLU);
    printf("\n\e[1;34mreturn : %zd\n", ft_write(1, "testtest", 8));
    ft_write(1, WHT, 7);

    write(1, "ORIGINAL     : ", 15);
    printf("\n\e[1;32mreturn : %zd\n", write(1, "testtest", 8));
    ft_write(1, WHT, 7);

    ft_write(1, "\nNON ORIGINAL : ", 16);
    printf("\n\e[1;34mreturn : %zd\n", ft_write(1, "Cette fonction permet de calculer la longueur, exprimée en nombre de caractères.", 83));
    ft_write(1, WHT, 7);

    write(1, "ORIGINAL     : ", 15);
    printf("\n\e[1;32mreturn : %zd\n", write(1, "Cette fonction permet de calculer la longueur, exprimée en nombre de caractères.", 83));
    ft_write(1, WHT, 7);
}

void ft_strdup_test()
{
    printf(YEL);
    printf("\n***********************************\n");
    printf("          ft_strdup_test           \n");
    printf("***********************************\n");
    printf(WHT);
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strdup(""), strdup(""));
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strdup("testtest"), strdup("testtest"));
    printf("NON ORIGINAL : %s \nORIGINAL     : %s\n\n", ft_strdup("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."), strdup("Cette fonction permet de calculer la longueur, exprimée en nombre de caractères."));
}

void ft_read_test()
{
    int fd = open("/Users/abettach/Desktop/libasm_test/main.c", O_RDONLY);
    char buff1[891];
    int ret = 1;
    printf(YEL);
    printf("\n***********************************\n");
    printf("          ft_read_test           \n");
    printf("***********************************\n");

    printf(CYN);
    printf("%s: \n", "main.c header");

    printf(WHT);

    ret = read(fd, buff1, 890);
    buff1[ret] = 0;

    printf(GRN);
    printf("return : %d", ret);

    printf(MAG);
    printf("\n%s\n", "ORIGINAL");

    printf(WHT);
    printf("\n%s\n\n", buff1);
    close(fd);

    int j = -1;
    printf(RED);
    while (++j < 80)
        printf("_");

    fd = open("/Users/abettach/Desktop/libasm_test/main.c", O_RDONLY);
    printf(CYN);
    printf("\n\n%s: \n", "main.c header");
    printf(WHT);

    ret = ft_read(fd, buff1, 890);
    buff1[ret] = 0;

    printf(GRN);
    printf("return : %d", ret);

    printf(MAG);
    printf("\n%s\n", "NON ORIGINAL");

    printf(WHT);
    printf("\n%s\n", buff1);
    close(fd);
}

int main()
{
    ft_strcmp_test();
    ft_strlen_test();
    ft_read_test();
    ft_write_test();
    ft_strcpy_test();
    ft_strdup_test();
    return 0;
}
