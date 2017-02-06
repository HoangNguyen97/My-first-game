#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int soLanDoan = 1;
bool tiepTucGame = 1;
#define max 100
#define min 0
int main()
{
	while (tiepTucGame)
	{// Tao 1 so ngau nhien
		srand(time(NULL));
		int soBiMat = (rand() % (max - min + 1)) + min;
		int luaChon;



		printf("================= Welcome to random number game =================\n");
		printf("================= Hay chon muc do ma ban muon choi =================\n");
		do
		{
			// Yeu cau doan so bi mat
			printf("So can tim la bao nhieu: ");
			scanf_s("%d", &luaChon);
			// So sanh
			if (luaChon < soBiMat)
			{
				printf("Lon hon\n");
			}
			else if (luaChon > soBiMat)
			{
				printf("Nho hon\n");
			}
			else
			{
				printf("Chuc mung! Ban da tim duoc so bi mat trong %d lan\n", soLanDoan);
				printf("Do you want to continue ?\n");
				printf("Press 1 to continue or 0 to exit\n"); 
				scanf_s("%d", &tiepTucGame);
				
				if (!tiepTucGame)
				{
					_getch();
					return 0;
				}

				
			}
			soLanDoan++;
			
		} while (luaChon != soBiMat);
	}
	return 0;
}