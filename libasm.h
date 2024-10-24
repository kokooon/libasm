/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:30:22 by gmarzull          #+#    #+#             */
/*   Updated: 2024/10/24 19:22:06 by gmarzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);
int		ft_strcmp(char *dest, const char *src);
int		ft_write(int fd, const char *buff, size_t len);
char	*ft_strdup(const char *s);
ssize_t	ft_read(int fd, char *buf, size_t count);


#endif