/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsui <ymatsui@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:47:04 by ymatsui           #+#    #+#             */
/*   Updated: 2024/02/29 20:50:31 by ymatsui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_check_input(argv[1]);
	}
	return (0);
}
