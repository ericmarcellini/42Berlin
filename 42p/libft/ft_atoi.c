/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:56:28 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/17 14:51:27 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

// int main() {
//     const char *str1 = "12345"; // A positive integer
//     const char *str2 = "-6789"; // A negative integer
//     const char *str3 = "42 is the answer"; // Non-numeric characters
//     const char *str4 = "--230";
//     const char *str5 = "+-+-42";
//     const char *str6 = "     --420";
//     // Using ft_atoi to convert strings to integers
//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);
//     int num4 = ft_atoi(str4);
//     int num5 = ft_atoi(str5);
//     int num6 = ft_atoi(str6);

//     // Printing the results
//     printf("String 1: %s -> Integer: %d\n", str1, num1);
//     printf("String 2: %s -> Integer: %d\n", str2, num2);
//     printf("String 3: %s -> Integer: %d\n", str3, num3);
//     printf("String 1: %s -> Integer: %d\n", str4, num4);
//     printf("String 2: %s -> Integer: %d\n", str5, num5);
//     printf("String 3: %s -> Integer: %d\n", str6, num6);
//     return 0;
// }
