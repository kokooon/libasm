/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:31:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/24 19:24:28 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>

void	ft_check_strlen(void)
{
	char	*s1 = "Hello World!";
	char	*s2 = "\0";

	printf("=====================================\n");
	printf("============= ft_strlen =============\n");
	printf("=====================================\n");
	printf("\ns1 = \"Hello World!\"\n");
	printf("len de s1 (strlen) = %ld\n", strlen(s1));
	printf("len de s1 (ft_strlen) = %ld\n", ft_strlen(s1));
	printf("\ns2 = \"\\0\" \n");
	printf("len de s2 (strlen) = %ld\n", strlen(s2));
	printf("len de s2 (ft_strlen) = %ld\n\n", ft_strlen(s2));
}

char *ft_strcpy(char * dest, const char *src)
{
	return (dest);
}

void	ft_check_strcpy(void)
{
	char		s1[42] = "Hello World!";
	char		s1_bis[42] = "Hello World!";
	const char	*s2 = "Bonjour";
	const char	*s2_bis = "Bonjour";
	char		s3[6] = "Hello";
	char		s3_bis[6] = "Hello";
	const char	*s4 = "";
	const char	*s4_bis = "";

	char		*r1 = strcpy(s1, s2);
	char		*r2;
	r2 = ft_strcpy(s1_bis, s2_bis);
	char		*r3 = strcpy(s3, s4);
	char		*r4 = ft_strcpy(s3_bis, s4_bis);

	printf("=====================================\n");
	printf("============= ft_strcpy =============\n");
	printf("=====================================\n");
	printf("\ns1 = \"Hello World!\"\n");
	printf("s2 = \"Bonjour\"\n");
	printf("strcpy(s1, s2) = %s\n", r1);
	printf("ft_strcpy(s1, s2) = %s\n\n", r2);
	printf("s3 = \"Hello\"\n");
	printf("s4 = \"\"\n");
	printf("strcpy(s3, s4) = %s\n", r3);
	printf("ft_strcpy(s3, s4) = %s\n\n", r4);
}

int	main(void)
{
	//ft_check_strlen();
	ft_check_strcpy();
	// ft_check_strcmp();
	// ft_check_write();
	// ft_check_strdup();
}



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
//     const char *src = "abcd";

//     // Ouvrir un fichier en lecture seule (O_RDONLY) et essayer d'écrire dessus
//     int fd = open("testfile", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1) {
//         perror("open");
// 		return EXIT_FAILURE;
//     }
// 	printf("\n fd = %d", fd);
//     if (lseek(fd, -5, SEEK_SET) == -1) {
//         fprintf(stderr, "Error: %s\n", strerror(errno));
//         fprintf(stderr, "errno value: %d\n", errno);
//     } else {
//         // Essayer d'écrire dans le fichier
//         int result = write(fd, src, 4);  // Essayer d'écrire 4 octets
//         if (result == -1) {
//             fprintf(stderr, "Error during write: %s\n", strerror(errno));
//             fprintf(stderr, "errno value: %d\n", errno);
//         } else {
//             printf("Successfully wrote %d bytes to the file.\n", result);
//         }
//     }

//     close(fd);  // Fermer le fichier
//     return EXIT_SUCCESS;
// }

// int main(void)
// {
// 	const char *src = "Tripouille";
// 	const char *new = ft_strdup(src);
// 	printf("Le dup: %s", new);
// 	return (0);
// }