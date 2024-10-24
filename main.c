/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:31:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/24 14:26:08 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

// int main() {
//     const char *str = NULL;
//     size_t len = ft_strlen(str);   // Appel de ft_strlen
// 	//size_t len = strlen(str);
//     if (len == -1) {
//         printf("Error: NULL string passed to ft_strlen.\n");
//     } else {
//         printf("Length: %ld\n", len);   // Affiche la longueur
//     }
//     return 0;
// }

#include <errno.h>

// int main(void)
// {
// 	const char *src = NULL;
// 	const char *dst = "Tripouille";
// 	int result = write(1111, src, 5);
// 	if (result == -1)
// 	{
// 		fprintf(stderr, "Error : %s\n", strerror(errno));
// 		fprintf(stderr, "errno value: %d\n", errno);
// 	}
// 	return (0);
// }

// int main(void)
// {
//     const char *src = "Tripouille";

//     // Ouvrir un fichier en lecture seule (O_RDONLY) et essayer d'écrire dessus
//     int fd = open("testfile", O_RDONLY | O_CREAT, 0644);
//     if (fd == -1) {
//         perror("open");
//         return 1;
//     }

//     // Essayer d'écrire dans un fichier ouvert en lecture seule
//     int result = write(fd, src, 5);
//     if (result == -1) {
//         fprintf(stderr, "Error: %s\n", strerror(errno));
//         fprintf(stderr, "errno value: %d\n", errno);
//     }

//     close(fd);  // Fermer le fichier
//     return 0;
// }

int main(void)
{
	const char *src = "Tripouille";
	const char *new = ft_strdup(src);
	printf("Le dup: %s", new);
	return (0);
}