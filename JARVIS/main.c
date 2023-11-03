#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <windows.h>


int main(void)
{

	int a = 0;
	int b = 0;
	int car = 0;
	int restart = 0;

	printf("\n");
	printf("          -----------------**14조 TERMPROJECT**--------------------\n");
	printf("          |                                                       |\n");
	printf("          |        ___     ____    ____    _    _    _   ____     |\n");
	printf("          |          |     |  |    |  |    |   /     |  |         |\n");
	printf("          |          |     |__|    |__|    |  /      |  |____     |\n");
	printf("          |          |     |  |    |＼     | /       |      |     |\n");
	printf("          |       |__|     |  |    |  ＼   |/        |  ____|     |\n");
	printf("          |                                                       |\n");
	printf("          |        ('Just A Rather Very Intelligent System')      |\n");
	printf("          |                                                       |\n");
	printf("          |                                                       |\n");
	printf("          |                                      1862007 김보람   |\n");
	printf("          |                                      1862048 임규빈   |\n");
	printf("          ---------------------------------------------------------\n");
	printf("\n\n");
	printf("                  [다음화면으로 넘어가려면 엔터키를 누르세요]\n\n");
	printf("                             - PRESS ENTER KEY- \n");

	getchar();
	system("cls");

	do
	{

		printf("\n");
		printf("\n");
		printf("          ----------------< J.A.R.V.I.S >--------------\n");
		printf("          |                                           |\n");
		printf("          |           차의 종류를 선택하세요          |\n");
		printf("          |                                           |\n");
		printf("          |    - 판매량이 많은 국산차 순위 입니다 -   |\n");
		printf("          |                                           |\n");
		printf("          l     1.  신형 싼타페                       l\n");
		printf("          l     2.  그랜저                            l\n");
		printf("          l     3.  포터2                             l\n");
		printf("          l     4.  더 뉴 카니발                      l\n");
		printf("          l     5.  올 뉴 K3                          l\n");
		printf("          l     6.  아반떼                            l\n");
		printf("          l     7.  쏘니타 뉴 라이즈                  l\n");
		printf("          l     8.  봉고3 트럭                        l\n");
		printf("          l     9.  모닝                              l\n");
		printf("          l     10. 쏘렌토                            l\n");
		printf("          l     11. 그랜드 스타렉스                   l\n");
		printf("          l     12. 더 뉴 K5                          l\n");
		printf("          l     13. 코나                              l\n");
		printf("          l     14. 티볼리                            l\n");
		printf("          l     15. G80                               l\n");
		printf("          l     16. 버스 / 트럭(현대)                 l\n");
		printf("          l     17. K7                                l\n");
		printf("          l     18. 렉스턴 스포츠                     l\n");
		printf("          l     19. 스포티지                          l\n");
		printf("          l     20. 투싼                              l\n");
		printf("          l     21. 더 뉴 레이                        l\n");
		printf("          l     22. SM6                               l\n");
		printf("          l     23. 스파크                            l\n");
		printf("          l     24. QM6                               l\n");
		printf("          l     25. 스토닉                            l\n");
		printf("          l     26. 니로(하이브리드)                  l\n");
		printf("          l     27. G4 렉스턴                         l\n");
		printf("          l     28. 더 K9                             l\n");
		printf("          l     29. G70                               l\n");
		printf("          l     30. EQ900                             l\n");
		printf("          |                                           |\n");
		printf("          |                                           |\n");
		printf("          ---------------------------------------------\n");
		printf("               소유하신 차의 종류를 선택하세요 : ");


		scanf("%d", &car);
		getchar();
		system("cls");

		if (car == 1)
		{

			printf("\n");
			printf("\n");
			printf("                     1번(신형 산타페)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");;
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 2)
		{

			printf("\n");
			printf("\n");
			printf("                        2번(그랜저)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 3)
		{

			printf("\n");
			printf("\n");
			printf("                        3번(포터2)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 4)
		{

			printf("\n");
			printf("\n");
			printf("                     4번(더 뉴 카니발)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 5)
		{

			printf("\n");
			printf("\n");
			printf("                       5번(올 뉴 K3)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 6)
		{

			printf("\n");
			printf("\n");
			printf("                         6번(아반떼)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 7)
		{

			printf("\n");
			printf("\n");
			printf("                   7번(쏘나타 뉴 라이즈)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 8)
		{

			printf("\n");
			printf("\n");
			printf("                       8번(봉고3 트럭)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 9)
		{

			printf("\n");
			printf("\n");
			printf("                         9번(모닝)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 10)
		{

			printf("\n");
			printf("\n");
			printf("                       10번(쏘렌토)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 11)
		{

			printf("\n");
			printf("\n");
			printf("                    11번(그랜드 스타랙스)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 12)
		{

			printf("\n");
			printf("\n");
			printf("                       12번(올 뉴 K5)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 13)
		{

			printf("\n");
			printf("\n");
			printf("                        13번(코나)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 14)
		{

			printf("\n");
			printf("\n");
			printf("                        14번(티볼리)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		if (car == 15)
		{

			printf("\n");
			printf("\n");
			printf("                        15번(G80)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			if (b == 1)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 2)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 3)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
			}
			else if (b == 4)
			{
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
			}
			else if (b >= 5)
			{
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");
			}

		}

		switch (car) {

		case 16:
			printf("\n");
			printf("\n");
			printf("                   16번(버스/트럭(현대))을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b);
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 17:
			printf("\n");
			printf("\n");
			printf("                         17번(K7)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 18:
			printf("\n");
			printf("\n");
			printf("                     18번(렉스턴 스포츠)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 19:
			printf("\n");
			printf("\n");
			printf("                       18번(스포티지)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 20:
			printf("\n");
			printf("\n");
			printf("                         20번(투싼)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 21:
			printf("\n");
			printf("\n");
			printf("                      21번(더 뉴 레이)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 22:
			printf("\n");
			printf("\n");
			printf("                         22번(SM6)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 23:
			printf("\n");
			printf("\n");
			printf("                        23번(스파크)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 24:
			printf("\n");
			printf("\n");
			printf("                         24번(QM6)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 25:
			printf("\n");
			printf("\n");
			printf("                        18번(스토닉)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 26:
			printf("\n");
			printf("\n");
			printf("                   26번(니로(하이브리드))를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 27:
			printf("\n");
			printf("\n");
			printf("                      27번(G4 렉스턴)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 28:
			printf("\n");
			printf("\n");
			printf("                        28번(더 K9)를 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 29:
			printf("\n");
			printf("\n");
			printf("                         29번(G70)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		case 30:
			printf("\n");
			printf("\n");
			printf("                         30번(EQ900)을 선택하셨습니다.\n");
			printf("         ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("         |                                                       |\n");
			printf("         |               교체할 부품을 선택하세요                |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         |             ① 와 이 퍼 ( 전, 후, 앞 )                |\n");
			printf("         |                                                       |\n");
			printf("         |             ② 브 레 이 크 패 드 ( 전, 후 )           |\n");
			printf("         |                                                       |\n");
			printf("         |             ③ 자 동 차 배 터 리                      |\n");
			printf("         |                                                       |\n");
			printf("         |             ④ 에 어 컨 필 터                         |\n");
			printf("         |                                                       |\n");
			printf("         |                                                       |\n");
			printf("         ---------------------------------------------------------\n");
			printf("\n");
			printf("                    교체를 원하는 부품을 선택하세요 : ");
			scanf("%d", &b); //
			system("cls");
			getchar();

			switch (b) {

			case 1:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                  550mm, 500mm, 300mm\n                |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 2:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      SP4102, SP1247                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 3:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      9 0 L ( (9 0) )                  |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------\n");
				break;

			case 4:
				printf("\n");
				printf("\n");
				printf("     ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("     |                                                       |\n");
				printf("     |                       - S I Z E -                     |\n");
				printf("     |                                                       |\n");
				printf("     |                      252 * 225 * 20                   |\n");
				printf("     |                                                       |\n");
				printf("     ---------------------------------------------------------");
				break;

			default:
				printf("\n");
				printf("\n");
				printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    |                      * 오류입니다 *                   |\n");
				printf("    |                                                       |\n");
				printf("    |                                                       |\n");
				printf("    ---------------------------------------------------------\n");

			}

			break;

		}

		if (car >= 31)
		{
			printf("\n");
			printf("\n");
			printf("    ----------------------< J.A.R.V.I.S >--------------------\n");
			printf("    |                                                       |\n");
			printf("    |                                                       |\n");
			printf("    |                      * 오류입니다 *                   |\n");
			printf("    |                                                       |\n");
			printf("    |                                                       |\n");
			printf("    ---------------------------------------------------------\n");
		}

		printf("\n\n");
		printf("                       처음으로 돌아가겠습니까?\n\n\n");
		printf("                         YES (1) / NO (2) : ");
		scanf("%d", &restart);
		getchar();

	}while (restart == 1);
	getchar();

	return 0;
}