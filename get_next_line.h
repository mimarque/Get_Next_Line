/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:07:15 by mimarque          #+#    #+#             */
/*   Updated: 2022/04/05 23:41:40 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef NUM_OF_FD
#  define NUM_OF_FD 256
# endif
# include <unistd.h> //read
# include <stdlib.h> //malloc

char	*ft_strchr(const char *s, int c);
char	*ft_strldup(char *s1, int start, int end);
char	*ft_strjoinfree(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*cycle(char **backup, int fd, char *buf);
char	*returner(char **backup, int fd);
char	*get_next_line(int fd);
#endif