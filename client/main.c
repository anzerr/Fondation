/*
** main.c for main in /home/anzer_r/project/dicowesh/anzer_r/discowesh/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 10:36:53 2015 ANZER ryan
** Last update Sat Apr 18 13:55:35 2015 ANZER ryan
*/
#include "header.h"

int main(int argc, char **argv)
{
	int sockfd;
	
	if ((sockfd = connectSocket(argc, argv)) < 0)
    {
		// error do something
    } else {
		
	}

	
  return (0);
}
