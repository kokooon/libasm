/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:31:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/10 16:43:15 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main() {
    const char *str = NULL;
    size_t len = ft_strlen(str);   // Appel de ft_strlen
	//size_t len = strlen(str);
    if (len == -1) {
        printf("Error: NULL string passed to ft_strlen.\n");
    } else {
        printf("Length: %ld\n", len);   // Affiche la longueur
    }
    return 0;
}
