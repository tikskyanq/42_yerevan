/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamalya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:38:13 by tkamalya          #+#    #+#             */
/*   Updated: 2024/09/08 21:03:44 by tkamalya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void print_line(char a /* / */, char b /* *  */, char c /* \ */, int x /* erkarutyun */)
{
	if(x<=0)
	{
		return;
	}
	int i = 0;
	while(i<x)
	{
		if(i==0)
			ft_putchar(a);
		else if(i<x-1)
			ft_putchar(b);
		else
			ft_putchar(c);
		i++;
	}

	ft_putchar('\n');
}

void rush(int x,int y)
{
	if(y <= 0)
		return;
	int i = 0;
	while(i<y)
	{
		if(i==0)
			print_line('/', '*', '\\', x);
		else if(i<y-1)
			print_line('*', ' ', '*', x);
		else
			print_line('\\', '*', '/', x);
		i++;
	}
}

int main()
{
	rush(5,3);
}


