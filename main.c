/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:31:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/05/06 17:09:00 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define MAX 10

int ft_len(char *s)
{
    int ret = 0;

    while (s[ret])
        ret++;
    return (ret);
}

int main(void)
{
    //char    s1[] = "Hello";
    //char s1[] = {'H', 'e', 'l', 'l', 'o'};
    // char *tmp;
    // tmp = malloc(1000);
    // for (int i = 0; i < 999; i++)
    //     tmp[i] = '#';
    // free(tmp);
    char *s;
    s = malloc(sizeof(char));
    for (int i = 0; i < 26; i++)
         s[i] = '#';
    // s[0] = 'a';
    // s[1] = 'b';
    // s[2] = 'c';
    // s[3] = 'd';
    // s[4] = 'e';
    // s[5] = 'f';
    // s[6] = 'g';
    // s[7] = 'j';
    int c;
    c = strlen(s);
    printf("ft_strlen : %s, %d", s, c);
    free(s);
    return (0);
}

