/* Deals a random hand of cards */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define TRUE 1
#define FALSE 0

typedef int Bool;

main()
{
	Bool in_hand[NUM_SUITS][NUM_RANKS] = {FALSE};
	int num_cards, rank, suit;
	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
	const char suit_code[] = {'C', 'D', 'H', 'S'};
	
	srand( (unsigned) time(NULL) );
	
	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);
	
	printf("Your hand: ");
	while(num_cards > 0)
	{
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = TRUE;
			num_cards--;
			printf("%c%c  ", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n");
	
	return 0;
}
