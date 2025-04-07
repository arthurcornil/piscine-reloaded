/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:51:54 by arcornil          #+#    #+#             */
/*   Updated: 2025/04/07 21:53:35 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 4

void	*ft_memset(void *b, int c, size_t len);
void	ft_putstrfd(int fd, char *str);

#endif
