/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:31:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/27 14:25:28 by gmarzull         ###   ########.fr       */
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

void	ft_check_strcpy(void)
{
	char		s1[42] = "Hello World!";
	char		s1_bis[42] = "Hello World!";
	char		*s2 = "Bonjour";
	char		*s2_bis = "Bonjour";
	char		s3[6] = "Hello";
	char		s3_bis[6] = "Hello";
	char		*s4 = "";
	char		*s4_bis = "";

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

void	ft_check_strcmp(void)
{
	char		s1[42] = "Hello World!";
	char		*s2 = "Bonjour";
	char		*s3 = "";
	char		*s4 = "";

	int		r1 = strcmp(s1, s2);
	int		r2;
	r2 = ft_strcmp(s1, s2);
	int		r3 = strcmp(s3, s4);
	int		r4 = ft_strcmp(s3, s4);

	printf("=====================================\n");
	printf("============= ft_strcmp =============\n");
	printf("=====================================\n");
	printf("\ns1 = \"Hello World!\"\n");
	printf("s2 = \"Bonjour\"\n");
	printf("strcmp(s1, s2) = %d\n", r1);
	printf("ft_strcmp(s1, s2) = %d\n\n", r2);
	printf("s3 = \"\"\n");
	printf("s4 = \"\"\n");
	printf("strcmp(s3, s4) = %d\n", r3);
	printf("ft_strcmp(s3, s4) = %d\n\n", r4);
}

void	ft_check_write(void)
{
	char		*s1 = "Hello World!";
	char		*s2 = "1";

	int		r1;
	int		r2;
	const char *src = NULL;
	const char *dst = "Tripouille";

	printf("=====================================\n");
	printf("============= ft_write =============\n");
	printf("=====================================\n");
	printf("\ns1 = \"Hello World!\"\n");

	r1 = write(1, s1, strlen(s1));
	printf("\nValeur de write : %d\n", r1);
	r2 = ft_write(1, s1, strlen(s1));
	printf("\nValeur de ft_write : %d\n\n", r2);
	int result = write(1111, src, 5);
	if (result == -1)
	{
		fprintf(stderr, "Avec write, Error : %s\n", strerror(errno));
		fprintf(stderr, "errno value: %d\n", errno);
	}
	int result2 = write(1111, src, 5);
	if (result2 == -1)
	{
		fprintf(stderr, "Avec ft_write, Error : %s\n", strerror(errno));
		fprintf(stderr, "errno value: %d\n\n", errno);
	}
	int result3 = write(1, src, 5);
	if (result3 == -1)
	{
		fprintf(stderr, "Avec write, Error : %s\n", strerror(errno));
		fprintf(stderr, "errno value: %d\n", errno);
	}
	int result4 = write(1, src, 5);
	if (result4 == -1)
	{
		fprintf(stderr, "Avec ft_write, Error : %s\n", strerror(errno));
		fprintf(stderr, "errno value: %d\n", errno);
	}
}

void	ft_check_strdup(void)
{
	char		*s1 = "Hello World!";
	char		*s2 = "";

	char		*r1 = strdup(s1);
	char		*r2;
	r2 = ft_strdup(s1);
	char		*r3 = strdup(s2);
	char		*r4 = ft_strdup(s2);

	printf("=====================================\n");
	printf("============= ft_strdup =============\n");
	printf("=====================================\n");
	printf("\ns1 = \"Hello World!\", Addresse = %p \n", &s1);
	printf("strdup(s1) = %s, Adresse = %p\n", r1, &r1);
	free (r1);
	printf("ft_strdup(s1) = %s, Adresse = %p\n\n", r2, &r2);
	free(r2);

	printf("s2 = \"\"\n");
	printf("strdup(s3, s4) = %s\n", r3);
	printf("ft_strdup(s3, s4) = %s\n\n", r4);
}

void ft_check_read(void)
{
	int	fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0) {
		perror("Erreur lors de la création du fichier");
		exit(EXIT_FAILURE);
	}
	const char	*s = "Hello World!";
	write(fd, s, strlen(s));
	close(fd);
	fd = open("text.txt", O_RDONLY);
    if (fd < 0) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }
	char buf1[13];
	char buf2[13];
	char buf3[13];
	char buf4[13];
	int r1 = read(fd, buf1, 12);
	buf1[r1] = '\0';
	close(fd);
	int fd2 = open("text.txt", O_RDONLY);
    if (fd2 < 0) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }
	int r2 = ft_read(fd2, buf2, 12);
	buf2[r2] = '\0';
	close(fd2);
	int r3 = read(1111, buf3, 13);
	int r4 = ft_read(1111, buf3, 13);

	printf("=====================================\n");
	printf("============== ft_read ==============\n");
	printf("=====================================\n\n");
	printf("Creation du fichier text.txt et ecriture de \"Hello World!\" a l'interieur...\n");
	printf("Contenu lu avec read: \"%s\", Valeur de retour : %d\n", buf1, r1);
	printf("Contenu lu avec ft_read:  \"%s\", Valeur de retour : %d\n\n", buf2, r2);

	printf("Ouverture sur un mauvais fd...\n");
	printf("Contenu lu avec read: \"%s\", Valeur de retour : %d\n", buf3, r3);
	fprintf(stderr, "Error: %s\n", strerror(errno));
	fprintf(stderr, "errno value: %d\n\n", errno);
	printf("Contenu lu avec ft_read:  \"%s\", Valeur de retour : %d\n", buf4, r4);
	fprintf(stderr, "Error: %s\n", strerror(errno));
	fprintf(stderr, "errno value: %d\n\n", errno);
}

int	main(void)
{
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_write();
	ft_check_read();
	ft_check_strdup();
}

// Test pour le EINVAL (22) sur le test de Tripouille
// int main(void)
// {
//     const char *src = "abcd";

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
//         int result = write(fd, src, 4);
//             fprintf(stderr, "Error during write: %s\n", strerror(errno));
//             fprintf(stderr, "errno value: %d\n", errno);
//         } else {
//             printf("Successfully wrote %d bytes to the file.\n", result);
//         }
//     }

//     close(fd);
//     return EXIT_SUCCESS;
// }
