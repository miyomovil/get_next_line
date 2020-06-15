/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:25:31 by antomart          #+#    #+#             */
/*   Updated: 2020/02/08 08:48:38 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

int		get_next_line(int fd, char **line);
char	*strjoin_and_free(char *s1, char *s2);
int		find_index(const char *s, int c);
int		get_line(char **str, char **line, int i);
char	*ft_substr(char const *s, int start, int len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif
