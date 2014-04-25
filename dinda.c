#include <stdio.h>
#include <conio.h>

int main(void)
{
	int menu, answer, score, jawaban,nilai1,nilai2;
	


	printf("Test Your Brain Now\n");
	getch();
	do
	{
		system("cls");
		printf("1. Play\n");
		printf("2. Quit\n");
		printf("Choice your menu : ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			score = 0;
			system("cls");
			printf("1. masukan nilai-nilai penjumlahan yang menghasilkan 175 ? \n\n");
			printf("Jawaban : \n");
			printf("Nilai 1:");
			scanf("%d", &nilai1);
			printf("Nilai 2:");
			scanf("%d", &nilai2);
	
			answer = nilai1 + nilai2;
				
			if (answer == 175)
			{
				printf("Benar\n");
				jawaban = 1;
				score = score + 25;
				printf("Score mu : %d", score);
				printf("\nTekan sembarang untuk melanjutkan");
				getch();
				
				if (score == 25)
				{
					system("cls");
					printf("2. masukan nilai-nilai pengurangan yang menghasilkan 54? \n\n");
					printf("Jawaban : \n");
					printf("Nilai 1:");
					scanf("%d", &nilai1);
					printf("Nilai 2:");
					scanf("%d", &nilai2);

					answer = nilai1 - nilai2;
					if (answer == 54)
					{
						printf("Benar\n");
						jawaban = 1;
						score = score + 25;
						printf("Score mu : %d", score);
						printf("\nTekan sembarang untuk melanjutkan");
						getch();

						if (score == 50)
						{
							system("cls");
							printf("3. masukan nilai-nilai perkalian yang menghasilkan 90? \n\n");
							printf("Jawaban : \n");
							printf("Nilai 1:");
							scanf("%d", &nilai1);
							printf("Nilai 2:");
							scanf("%d", &nilai2);

							answer = nilai1 * nilai2;
						}

						if (answer == 90)
						{
							printf("Benar\n");
							jawaban = 1;
							score = score + 25;
							printf("Score mu : %d", score);
							printf("\nTekan sembarang untuk melanjutkan");
							getch();

							if (score == 75)
							{
								system("cls");
								printf("4.  masukan nilai-nilai pengurangan yang menghasilkan 2? \n\n");
								printf("Jawaban : \n");
								printf("Nilai 1:");
								scanf("%d", &nilai1);
								printf("Nilai 2:");
								scanf("%d", &nilai2);

								answer = nilai1 / nilai2;;

								if (answer == 2)
								{
									printf("Benar\n");
									jawaban = 1;
									score = score + 25;
									printf("Score mu : %d", score);
									printf("\nTekan sembarang untuk melanjutkan");
									getch();
									break;
								}
								else
								{
									printf("Ooops, Jawaban salah");
									jawaban = 0;
								}
							}

						}
						else
						{
							printf("Ooops, Jawaban salah");
							jawaban = 0;
						}


					}
					else
					{
						printf("Ooops, Jawaban salah");
						jawaban = 0;
					}

				}
			}
			else
			{
				printf("Ooops, Jawaban salah");
				jawaban = 0;
			}

			getch();
			break;
		case 2:
			system("cls");
			printf("bye");
			break;
		default:
			printf("wrong input");
			getch();
			break;
		}

	} while (menu != 2 || jawaban != 0);
	getch();
	return 0;
}

