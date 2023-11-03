//file: turmproject.MR
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

struct person
{
	char name[100];
	char email[100];
	char ID[100];
	char password[100];
	char again_password[100];
};
typedef struct person person;

struct owner
{
	char number[20];
	char name[20];
};
typedef struct owner owner;

void f_screen_first();
void set_first(person *user);
void Sign_up(person *user);
void Login(person *user);
int member(char a);
void file(person *user);

void man_mj(char p, person *user);
void man_mj_C1_Q1(char p, person *user);

void man_mj_C2_Q2(char p, person *user);

void man_mj_C3_Q3(char p, person *user);
void man_mj_C3_Q4(char p, person *user);

void man_mj_C4_Q5(char p, person *user);
void man_mj_C4_Q6(char p, person *user);

void man_mj_C4_Q7(char p, person *user);
void man_mj_C4_Q8(char p, person *user);
void man_mj_C4_Q9(char p, person *user);

void man_mj_C5_Q10(char p, person *user);
void man_mj_C5_Q11(char p, person *user);
void man_mj_C5_Q12(char p, person *user);

int f_plus(int *sum);
void f_finish_mj(int total);

void man_mr(char p, person *user);
void man_mr_C1_Q1(char p, person *user);

void man_mr_C2_Q2(char p, person *user);

void man_mr_C3_Q3(char p, person *user);
void man_mr_C3_Q4(char p, person *user);

void man_mr_C4_Q5(char p, person *user);
void man_mr_C4_Q6(char p, person *user);
void man_mr_C4_Q7(char p, person *user);
void man_mr_C4_Q8(char p, person *user);
void man_mr_C4_Q9(char p, person *user);

void man_mr_C5_Q10(char p, person *user);
void man_mr_C5_Q11(char p, person *user);
void man_mr_C5_Q12(char p, person *user);

void f_finish_mr(int total);

void man_dy(char p, person *user);
void man_dy_C1_Q1(char p, person *user);

void man_dy_C2_Q2(char p, person *user);

void man_dy_C3_Q3(char p, person *user);
void man_dy_C3_Q4(char p, person *user);

void man_dy_C4_Q5(char p, person *user);
void man_dy_C4_Q6(char p, person *user);
void man_dy_C4_Q7(char p, person *user);
void man_dy_C4_Q8(char p, person *user);
void man_dy_C4_Q9(char p, person *user);

void man_dy_C5_Q10(char p, person *user);
void man_dy_C5_Q11(char p, person *user);
void man_dy_C5_Q12(char p, person *user);

void f_finish_dy(int total);

void woman_ms(char p, person *user);
void woman_ms_C1_Q1(char p, person *user);

void woman_ms_C2_Q2(char p, person *user);

void woman_ms_C3_Q3(char p, person *user);
void woman_ms_C3_Q4(char p, person *user);

void woman_ms_C4_Q5(char p, person *user);
void woman_ms_C4_Q6(char p, person *user);
void woman_ms_C4_Q7(char p, person *user);
void woman_ms_C4_Q8(char p, person *user);
void woman_ms_C4_Q9(char p, person *user);

void woman_ms_C5_Q10(char p, person *user);
void woman_ms_C5_Q11(char p, person *user);
void woman_ms_C5_Q12(char p, person *user);

void f_finish_ms(int total);

void woman_jh(char p, person *user);
void woman_jh_C1_Q1(char p, person *user);

void woman_jh_C2_Q2(char p, person *user);
void woman_jh_C2_Q3(char p, person *user);
void woman_jh_C2_Q4(char p, person *user);

void woman_jh_C3_Q5(char p, person *user);
void woman_jh_C3_Q6(char p, person *user);

void woman_jh_C4_Q7(char p, person *user);
void woman_jh_C4_Q8(char p, person *user);
void woman_jh_C4_Q9(char p, person *user);

void woman_jh_C5_Q10(char p, person *user);
void woman_jh_C5_Q11(char p, person *user);
void woman_jh_C5_Q12(char p, person *user);

void f_finish_jh(int total);
void woman_ds(char p, person *user);
void woman_ds_C1_Q1(char p, person *user);

void woman_ds_C2_Q2(char p, person *user);
void woman_ds_C2_Q3(char p, person *user);
void woman_ds_C2_Q4(char p, person *user);

void woman_ds_C3_Q5(char p, person *user);
void woman_ds_C3_Q6(char p, person *user);

void woman_ds_C4_Q7(char p, person *user);
void woman_ds_C4_Q8(char p, person *user);
void woman_ds_C4_Q9(char p, person *user);

void woman_ds_C5_Q10(char p, person *user);
void woman_ds_C5_Q11(char p, person *user);
void woman_ds_C5_Q12(char p, person *user);

void f_finish_ds(int total);

int sum[100] = { 0 };
char p = { 0 };
int total = 0;

person user = { 0 };
int character = 0;
char a = 0;
char gender = 0;
char b = 0;

int main(person *user)
{
	f_screen_first();
	system("cls");
	set_first(user);
	system("cls");

}

void f_screen_first()   //초기화면 함수
{
	system("cls");
	struct owner inform[] = { {"1862007", "김보람"}, {"1860016", "김희성"}, {"1860054", "황지환"} };
	struct owner *p = inform;
	int size = sizeof(inform) / sizeof(inform[0]);

	puts("┌─────────────────────────────────────┐");
	puts("│    ?                            ♥                                       │");
	puts("│                  ♥                     ?         ♥            ?        │");
	puts("│                                                                          │");
	puts("│      ♥                                                                  │");
	puts("│                                 ♥ㅕ       ㅗ                  ♥        │");
	puts("│                       ♥   리    ㄴ  ♥ㅐ  ♥ㅏ  래 ¿                   │");
	puts("│ ♥        ?           ㅜ                   ㄹ                            │");
	puts("│                                                           ♥         ?   │");
	puts("│                                                                          │");
	puts("│         ♥                        ?                                      │");
	puts("│             ?        ♥                                                  │");
	puts("│                           ?               ♥                       ♥    │");
	puts("└─────────────────────────────────────┘");

	for (int i = 0; i < size; i++)
	{
		printf("                                                  %s      %s               \n", (p + i)->number, (p + i)->name);
	}
	printf("             [다음화면으로 넘어가려면 엔터키를 누르세요]\n\n");
	printf("                        - PRESS ENTER KEY- \n");

	_getch();
}
void set_first(person *user)
{
	do {
		printf("┌────────────────────────────────┐\n");
		printf("│ 당신의 연애 능력을 테스트해보세요!                             │\n");
		printf("│ '우리 연애 할래¿'에 오신걸 환영합니다                         │\n");
		printf("│ 이 게임의 회원이신가요?                                        │\n");
		printf("│ A:아니요     B:네!                                             │\n");
		printf("│ ※첫 사용시 회원가입을 해야합니다※                            │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &a);
		if (a != 65 && a != 66)
		{
			system("cls");
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (a != 65 && a != 66);
	member(a);
	getchar();
	system("cls");


	do {
		printf("┌─────────────────────────────┐\n");
		printf("│ 안녕하세요                                                 │\n");
		printf("│ 당신의 성별은 무엇인가요?                                │\n");
		printf("│ A:남자에요     B:여자에요                                │\n");
		printf("└─────────────────────────────┘\n");
		scanf("%c", &gender);

		if (gender != 65 && gender != 66)
		{
			system("cls");
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (gender != 65 && gender != 66);

	switch (gender)
	{
	case 'A':
	{
		printf("┌─────────────────────────────┐\n");
		printf("│ ▶1. 박민정                                              │\n");
		printf("│ 전공 : 정보통신과                                        │\n");
		printf("│ 작은키에 귀여운 이미지                                   │\n");
		printf("│ 잘 뭇고 거절을 못하는 성격                               │\n");
		printf("└─────────────────────────────┘\n");

		printf("┌─────────────────────────────┐\n");
		printf("│ ▶2. 강미래                                              │\n");
		printf("│ 전공 :미술교육과                                         │\n");
		printf("│ 똑부러지는 차도녀 이미지                                 │\n");
		printf("│ 똑부러지나 표현이 서툴다                                 │\n");
		printf("│ 맡은 일에 최선을 다하는 성격                             │\n");
		printf("└─────────────────────────────┘\n");

		printf("┌─────────────────────────────┐\n");
		printf("│ ▶3, 김도연                                              │\n");
		printf("│  전공 : 국어교육과                                       │\n");
		printf("│ 술자리를 좋아하며 사차원임                               │\n");
		printf("│ 활발하고 쿨한 성격                                       │\n");
		printf("└─────────────────────────────┘\n");
		break;
	}

	case 'B':
	{
		printf("┌─────────────────────────────┐\n");
		printf("│ ▶4. 최민석                                              │\n");
		printf("│  전공 :유아교육과                                        │\n");
		printf("│  애교가 많은 귀여운 이미지                               │\n");
		printf("│  리드를 잘 못한다                                        │\n");
		printf("│  잘 챙겨주는 성격                                        │\n");
		printf("└─────────────────────────────┘\n");

		printf("┌─────────────────────────────┐\n");
		printf("│ ▶5. 김지훈                                              │\n");
		printf("│ 전공 :정보통신과                                         │\n");
		printf("│ 무심하나 잘 챙겨준다                                     │\n");
		printf("│ 부끄러움이 많고 그런 상황을 싫어한다                     │\n");
		printf("│ 표현이 서툴다                                            │\n");
		printf("└─────────────────────────────┘\n");

		printf("┌─────────────────────────────┐\n");
		printf("│ ▶6, 마동석                                              │\n");
		printf("│ 전공 :스포츠건강관리학과                                 │\n");
		printf("│ 말을 잘하며 유머러스한 성격                              │\n");
		printf("│ 여자인 친구가 많으며 금방 사랑에 빠진다                  │\n");
		printf("└─────────────────────────────┘\n");
	}
	break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		system("pause");
		system("cls");
		break;


	}

	do {
		printf("┌────────────────────────┐\n");
		printf("│ 당신의 취향은 누구인가요?                      │\n");
		printf("└────────────────────────┘\n");
		scanf("%d ", &character);
		system("cls");

		if (character != 65 && character != 66)
		{
			system("cls");
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (character > 54 && character < 49);
	switch (character)
	{

	case 1:


		man_mj(p, user);
		total = f_plus(sum);
		f_finish_mj(total);

		break;

	case 2:


		man_mr(p, user);
		total = f_plus(sum);
		f_finish_mr(total);


	case 3:


		man_dy(p, user);
		total = f_plus(sum);
		f_finish_dy(total);
		break;

	case 4:

		woman_ms(p, user);
		total = f_plus(sum);
		f_finish_ms(total);
		break;
	case 5:

		woman_jh(p, user);
		total = f_plus(sum);
		f_finish_jh(total);
		break;

	case 6:

		woman_ds(p, user);
		total = f_plus(sum);
		f_finish_ds(total);
		break;

	}


	getchar();
}

int member(char a)
{
	switch (a)
	{

	case 'A':
		system("cls");
		printf("★☆★☆★☆회원가입을 시작합니다★☆★☆★☆\n");
		Sign_up(&user);
		Login(&user);
		break;

	case 'B':
		system("cls");
		printf("★☆★☆★☆로그인을 시작합니다★☆★☆★☆\n");
		Login(&user);
		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		system("pause");
		system("cls");
		break;
	}
	return 0;

}

void Sign_up(person *user)
{
	int sum = 0;
	printf("성없이 이름만 입력해주세요\n");
	printf("이름 : \n");
	scanf("%s", user->name);



	printf("\n");
	printf("이메일 주소 : ");
	scanf("%s", user->email);

	printf("\n");
	printf("ID : ");
	scanf("%s", user->ID);


	printf("\n");
	printf("password : ");
	scanf("%s", user->password);

	printf("\n");
	printf("확인을 위해 다시 한번 입력 해주새요... \n");
	printf("password : ");
	scanf("%s", user->again_password);

	while (strcmp(user->password, user->again_password) != 0)
	{
		printf("password가 서로 다릅니다. 다시 한번 입력 해주세요 \n");
		scanf("%s", user->again_password);
	}

	file(user);

	printf("회원가입되셨습니다.\n");
	system("pause");
	system("cls");
	printf("로그인을 진행해 주세요.\n\n");


}


void Login(person *user)
{
	char buf[100];
	int check1 = 0;
	int check2 = 0;

	FILE *f;

	f = fopen("member.txt", "r");
	printf("ID를 입력 : ");
	scanf("%s", buf);
	while (check1 = 1)
	{
		fscanf(f, "%s", user->ID);
		if (strcmp(buf, user->ID) == 0)
		{
			check1 = 1;
		}
		if (feof(f))
		{
			break;
		}
	}

	if (check1 == 1)
	{
		printf("비밀번호 입력 : ");
		scanf("%s", buf);

		while (check2 = 1)
		{
			fscanf(f, "%s %s", user->name, user->password);

			if (strcmp(buf, user->password) == 0)
			{
				check2 = 1;
			}
			if (feof(f))
			{
				break;
			}

		}
	}

	fclose(f);
	if (check1 == 1 && check2 == 1)
	{
		printf("환영합니다 %s 님!\n", user->name);
		system("pause");
		system("cls");

	}

}

void file(person *user)
{
	char  fname[] = "member.txt";
	FILE * f;



	if ((f = fopen(fname, "a+")) == NULL)
	{
		printf("파일이 열리지 않습니다");
		exit(1);
	}


	fprintf(f, "이름 : %s 이메일 : %s ID : %s password : %s \n", user->name, user->email, user->ID, user->password);
	fprintf(f, "\r\n");
	fclose(f);
}

void man_mj(char p, person *user)
{

	do {
		printf("┌───────────< 챕터1. 첫 만남 >────────────┐\n");
		printf("│ 지갑주인과 닮은 여자가 주변을 서성거린다.                      │\n");
		printf("│ 당신:혹시 지갑 잃어버리셨죠??                                │\n");
		printf("│민정: 네!맞아요! 지갑 돌려주시겠어요?                           │\n");
		printf("│ A:지갑 찾아드렸으니깐 밥 한끼 사주세요!                        │\n");
		printf("│ B:지갑을 그냥 돌려준다.                                        │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C1_Q1(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("┌────────────< 챕터 2. 집  안 >───────────┐\n");
		printf("│ 마카오톡을 들어가보니 지갑주인의 연락처가 떴다.                │\n");
		printf("│                                                                │\n");
		printf("│ A:먼저 연락을 한다.                                            │\n");
		printf("│ B: 연락 오기를 기다린다.                                       │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("┌──────────< 챕터3. 갤러리아 백화점 앞>────────┐\n");
		printf("│ 민정: 죄송해요!많이 기다리셨어요...? 늦어서 죄송해요!          │\n");
		printf("│                                                                │\n");
		printf("│  A:아니에요~ 얼른 가요~!                                       │\n");
		printf("│  B:(로봇말투)괜찮아요. 뛰어오느라 많이 힘드셨죠?               │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C3_Q3(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌────────────────────────┐\n");
		printf("│ 민정:저녁은 뭐 드시고 싶으세요??               │\n");
		printf("│                                                │\n");
		printf("│ A:제가 맛집 아는데가 있는데 어떠세요?          │\n");
		printf("│ B:저는 다 괜찮은데... 그쪽은요?                │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("┌──────────< 챕터4. 식 당 >──────────┐\n");
		printf("│ 분위기가 너무 적적하다. 무슨말이라도 해봐야겠다!       │\n");
		printf("│                                                        │\n");
		printf("│ A:여기 고로케가 고로케 맛있대~!                        │\n");
		printf("│ B:혹시 넌 학과가 뭐야?                                 │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌────────────────────────┐\n");
		printf("│ 민정:메뉴가 많은데 넌 뭐먹을래..??             │\n");
		printf("│                                                │\n");
		printf("│ A:난 아무거나 다 괜찮아~                       │\n");
		printf("│ B:여기는 돈까스가  맛있어서,                   │\n");
		printf("│  난 돈가스 시킬건데 너도 돈까스먹을래?         │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────────┐\n");
		printf("│ 우리는 돈까스를 주문했다. 정적이흐른다. 어떻게 해야할까?     │\n");
		printf("│                                                              │\n");
		printf("│ A:너무 뜬금없지만 너 수학잘해??                              │\n");
		printf("│  내가 수학은 잘 못하거든ㅎㅎ                                 │\n");
		printf("│ B:음식이 너무 오래 걸리는것 같다...                          │\n");
		printf("└───────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────┐\n");
		printf("│ 우리가 시킨 음식이 나왔다.                             │\n");
		printf("│                                                        │\n");
		printf("│ A:(쩝쩝)와 맛있다~  너도 얼른 먹어봐~                  │\n");
		printf("│  아 근데 양이 부족할거 같네...                         │\n");
		printf("│ B:내가 돈까스 썰어줄게!                                │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────┐\n");
		printf("│ 우리는 식사를 다하고 밖으로 나왔다.                  │\n");
		printf("│ 민정:저기 우리 이제 어디갈까?                        │\n");
		printf("│                                                      │\n");
		printf("│ A:나 영화티켓 있는데 영화보러 갈래?                  │\n");
		printf("│ B:고급시계라고 새로운 게임 나왔는데 하러갈래?        │\n");
		printf("└───────────────────────────┘\n");

		scanf("%c", &p);
		man_mj_C4_Q9(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("┌───────────< 챕터 5. 영화관 >──────────┐\n");
		printf("│ 민정:내가 표사올테니깐 여기서 잠깐 기다릴래?               │\n");
		printf("│                                                            │\n");
		printf("│ A:사실 너 화장실 갔을때 내가 예매했어~!                    │\n");
		printf("│ B:알겠어~조심히 갔다와!난 여기 앉아 있을게~!               │\n");
		printf("└──────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────────────┐\n");
		printf("│ 영화가 시작되었고, 영화를 보는 도중 민정이가 화장실에 간다고했다.      │\n");
		printf("│                                                                        │\n");
		printf("│ A:(소곤소곤)나도 화장실 가려던 참인데 같이 가자.                       │\n");
		printf("│ B:(다리를 스윽 올리며)얼른 지나가 안보여                               │\n");
		printf("└────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C5_Q11(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌──────────────────────────────┐\n");
		printf("│ 민정: 내가 통금시간 때문에 이제 가봐야 될거 같아.          │\n");
		printf("│                                                            │\n");
		printf("│ A:나 좀있으면 약속이 있는데 잘가~                          │\n");
		printf("│ B:시간이 많이 늦었으니까 내가 집까지 데려다 줄게!          │\n");
		printf("└──────────────────────────────┘\n");
		scanf("%c", &p);
		man_mj_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);


	printf("┌─────────────────────────────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.            │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그녀에 대한 내마음을 알리고 싶다.       │\n");
	printf("│ 민정: 오늘 정말 재미있었어!                                      │\n");
	printf("│       다음에 기회 되면 그땐 홍대 가서 놀다 오자!                 │\n");
	printf("│ 당신:잠깐...! 나 할 얘기가 있어...""우리연애 할래¿""              │\n");
	printf("└─────────────────────────────────┘\n");
	getchar();
	system("cls");



}
void man_mj_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:아 네네~! 제가 지금은 시간이 없어서 연락주시면 밥 사드릴께요~ │\n");
		printf("│ 당신:네 알겠어요~                                                │ \n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:저기요 지갑 찾아주셨는데 감사의 의미로 밥이라도 사드릴게요!   │\n");
		printf("│ 당신:정말요?그럼 저야 고맙죠^^                                   │\n");
		printf("└──────────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그럼 연락 드릴게요!                                           │\n");
		printf("│ 당신:네~ 안녕히 가세요~!                                         │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void man_mj_C2_Q2(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 1) = 6;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 당신:안녕하세요~ 오후에 봤던 지갑 찾아드렸던 사람이에요!         │\n");
		printf("│ 민정:아! 안녕하세요! 아깐 정말 감사했어요~ 혹시 언제 시간 되세요?  │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────────────┐\n");
		printf("│ 당신:이번주 토요일 어때요?                                           │\n");
		printf("│ 민정:네 좋아요~!그럼 오후 6시에 둔산동 갤러리아 백화점 앞에서 만나요!  │\n");
		printf("│ 당신:네 그럼 그때뵈요~ 주무세요~~                                    │\n");
		printf("└────────────────────────────────────┘\n");
		system("pause");
		system("cls");

		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정: 저기 아까 지갑 찾아주신분 맞아요?                            │\n");
		printf("│ 당신:네 맞아요~ 아까 밥 사주신다는 약속 언제로 할까요?           │\n");
		printf("└──────────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 민정: 음...이번주 토요일 오후7시에                         │\n");
		printf("│ 둔산동 갤러리아 백화점 앞에서 만나는거 어때요?             │\n");
		printf("│ 당신:네 좋아요~ 그럼 토요일에 뵈요!                      │\n");
		printf("└──────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_mj_C3_Q3(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 2) = 5;
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 민정:제가 많이 기다리게 한거 같아요! 죄송해요!             │\n");
		printf("│ 당신:아뇨 괜찮아요~저도 방금 왔어요.                     │\n");
		printf("└──────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 민정:많이 기다리게 해서 죄송해요ㅠㅠ                         │\n");
		printf("│ 당신:에이 괜찮아요! 뛰다가 넘어지진 않으셨죠?              │\n");
		printf("│ 민정:네ㅎㅎ 안 넘어졌어요!                                   │\n");
		printf("└───────────────────────────────┘\n");

		system("pause");
		system("cls");
	}
}

void man_mj_C3_Q4(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 3) = 5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정: 네! 저 돈까스 되게 좋아해요!!                                │\n");
		printf("│ 당신:그럼 돈까스 먹으러 가요~ 저 음료 무료쿠폰 있어요!           │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:오! 되게 알뜰하시네요!!                                       │\n");
		printf("│ 당신:하하하~얼른 저녁 먹으러 가죠!                               │\n");
		printf("│ 우리는 식당으로 가면서 나이가 동갑이란 사실을 알았다.              │\n");
		printf("│ 그래서 우린 말을 편하게 하기로 했다.                               │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:아...그럼 돈까스 먹으러가요~                                  │\n");
		printf("│ 당신:네 좋아요~ 저 돈까스 좋아해요~                              │\n");
		printf("│ 우리는 식당으로 가면서 나이가 동갑이란 사실을 알았다.              │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_mj_C4_Q5(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:아..하하 재밌다~아재개그 좋아하나보네...?                     │\n");
		printf("│ 당신:어..ㅎ 아재개그 연습중인데 더 연습해야겠네...^^             │\n");
		printf("│ 아재개그를 하다보니 민정이가 별로 좋아하지 않았다.                 │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 4) = 6;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:나는 정보통신과야!                                            │\n");
		printf("│ 당신:오~ 학교생활은 할만해?                                      │\n");
		printf("│ 웅ㅎㅎ 그래도 가끔은 피곤하고 힘들때도 있어!                       │\n");
		printf("│ 우리는 서로 학과와 관심사를 묻다보니 많은 대화를 나눴다.           │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void man_mj_C4_Q6(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 5) = 3;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:음..뭐먹지..그냥 우리 둘다 돈까스먹자~                        │\n");
		printf("│ 당신:그러자~ 나도 돈까스가 먹고 싶더라~                          │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그러자! 내가 선택하는걸 잘 못해서 엄청 고민하거든ㅎㅎ         │\n");
		printf("│ 당신:나도 그랬는데ㅋㅋ나 믿고 돈까스 먹어봐!                     │\n");
		printf("│ 민정:웅ㅎㅎ 맛집이라 했으니깐 맛있을거같아~                        │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void man_mj_C4_Q7(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 6) = 4;
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 민정:ㅋㅋㅋ갑자기? 나 수학 어느 정도 하는데,                 │\n");
		printf("│ 다음에 내가 수학 좀 알려줄까?                                │\n");
		printf("│ 당신:오 정말?? 그럼 나야 고맙지^^!                         │\n");
		printf("│ 공부에 대한 대화를 하다보니 민정이는 즐거워 보였다.          │\n");
		printf("│ 즐거워 하는 모습을보니 나도 좋았다.                          │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그러게...ㅎ 배 많이 고프다.                                   │\n");
		printf("│ 당신:배 많이 고프구나. 얼른 나와야할텐데..                       │\n");
		printf("│ 민정이는 묵묵히 휴대폰을 하기 시작했다. 내가 잘못 한걸까??         │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void man_mj_C4_Q8(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 7) = 3;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:아 그래...? 부족하면 내꺼 좀 가져가서 먹어~                   │\n");
		printf("│ 당신:아 진짜? 그럼 사양하지않고 맛있게 먹을게~                   │\n");
		printf("│ 민정이는 표정이 썩 좋지 않았다.                                    │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:아 정말? 고마워! 너 참 자상한거 같아!                         │\n");
		printf("│ 당신:자상하긴~ 배고플텐데 많이 먹어!                             │\n");
		printf("│ 민정: 고마워~ 너도 배고프겠다! 얼른 먹어!                          │\n");
		printf("│ 우리는 식사를 하면서 많은 대화를 나눴다.                           │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void man_mj_C4_Q9(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 8) = 5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그래그래~ 나도 영화 보러가자고 하려했는데 얼른 영화보러가자!  │\n");
		printf("│ 당신:좋아해서 다행이다~! 얼른가자!                               │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("┌───────────────────────────────────┐\n");
		printf("│ 민정:내가 게임은 별로 안좋아해서 그런데 차라리 영화보러 가는건 어때? │\n");
		printf("│ 당신:그래 그럼 영화보러가자~!                                      │\n");
		printf("└───────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_mj_C5_Q10(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 9) = 5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:와! 정말?? 너무 멋있다~ 다음엔 내가 살게!                     │\n");
		printf("│ 당신:멋있긴~시간 거의 다됐네~얼른 들어가자!                      │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("┌───────────────────────────────────┐\n");
		printf("│ 민정:그래 그럼 여기 가만히 앉아서 기다리고 있어~                     │\n");
		printf("│ 당신:그래 그럼 조심히 갔다와~!                                     │\n");
		printf("└───────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_mj_C5_Q11(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 10) = 5;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그래! 얼른 갔다와서 영화 마저보자!                            │\n");
		printf("│ 당신:사람들 피해주니깐 얼른 나가자!                              │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:그래 얼른 갈게. 영화가려서 미안.                              │\n");
		printf("│ 당신:아냐 얼른 갔다와~곧 명장면 나올거같으니깐~                  │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_mj_C5_Q12(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 11) = 3;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:우리집 가는 골목길이 너무 으스한데 저 앞까지만 데려다주라.    │\n");
		printf("│ 당신:알았어~ 그럼 10분이면되지??                                 │\n");
		printf("│ 민정:웅~너 약속 안늦게 빨리 가자~                                  │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 민정:정말?? 너무 고마워~ 내가 겁이 많아서 골목길은 잘 못갔거든ㅠㅠ │\n");
		printf("│ 당신:ㅋㅋㅋ얼른 가자~부모님이 걱정하시겠다~                      │\n");
		printf("│ 민정:그래~ 얼른 가자~!                                             │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}
int f_plus(int *sum)
{
	int total = 0;

	for (int i = 0; i < 12; i++)
	{
		total += *(sum + i);
	}

	return total;
}

void f_finish_mj(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 민정의 표정이 좋지 않다                      │\n");
		printf("│                                              │\n");
		printf("│ 민정 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 민정의 표정이 미심쩍어 보인다                      │\n");
		printf("│                                                    │\n");
		printf("│ 민정 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 민정의 표정이 밝다                                     │\n");
		printf("│                                                        │\n");
		printf("│ 민정 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}


void man_mr(char p, person *user)
{

	do {
		printf("┌───────────< 챕터1. 첫 만남 >────────────┐\n");
		printf("│ 지갑주인과 닮은 여자가 주변을 서성거린다.                      │\n");
		printf("│ 당신:혹시 지갑잃어버리신분 맞죠??                            │\n");
		printf("│ 미래:아...네..찾아 주셔서 감사합니다. 지갑 주시겠어요...?      │\n");
		printf("│                                                                │\n");
		printf("│ A:지갑 찾아드렸으니깐 밥 한끼 사주세요!                        │\n");
		printf("│ B:지갑을 그냥 돌려준다.                                        │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C1_Q1(p, user);
		getchar();
		system("cls");



	} while (p != 65 && p != 66);


	do {
		printf("┌────────────< 챕터 2. 집  안 >───────────┐\n");
		printf("│ 마카오톡을 들어가보니 지갑주인의 연락처가 떴다.                │\n");
		printf("│                                                                │\n");
		printf("│ A:먼저 연락을 한다.                                            │\n");
		printf("│ B: 연락 오기를 기다린다.                                       │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C2_Q2(p, user);
		getchar();
		system("cls");

	} while (p != 65 && p != 66);


	do {
		printf("┌──────────< 챕터3. 갤러리아 백화점 앞>────────┐\n");
		printf("│  미래:많이 기다리셨어요...? 늦어서 죄송해요!                   │\n");
		printf("│                                                                │\n");
		printf("│  A:아 예~ 얼른 갑시다~                                         │\n");
		printf("│  B:괜찮아요. 뛰어오느라 많이 힘드셨죠?                         │\n");
		printf("└────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C3_Q3(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────┐\n");
		printf("│ 미래:저녁은 뭐 드시고 싶으세요??               │\n");
		printf("│                                                │\n");
		printf("│ A:제가 맛집 아는데가 있는데 어떠세요?          │\n");
		printf("│ B:저는 다 괜찮은데... 그쪽은요?                │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C3_Q4(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("┌──────────< 챕터4. 식 당 >──────────┐\n");
		printf("│ 분위기가 너무 적적하다. 무슨말이라도 해봐야겠다!       │\n");
		printf("│                                                        │\n");
		printf("│ A:여기 고로케가 고로케 맛있대~!                        │\n");
		printf("│ B:넌 취미가 뭐야?                                      │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C4_Q5(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────┐\n");
		printf("│ 미래:메뉴가 많은데 넌 뭐먹을래..??             │\n");
		printf("│                                                │\n");
		printf("│ A:난 아무거나 다 괜찮아~                       │\n");
		printf("│ B:여기는 돈까스랑 우동이 맛있다는데,           │\n");
		printf("│   내가 우동 시키고 너가 돈까스먹을래?          │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C4_Q6(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌──────────────────────────────────┐\n");
		printf("│ 우리는 돈까스와 우동을 주문했다. 정적이흐른다. 어떻게 해야할까?    │\n");
		printf("│                                                                    │\n");
		printf("│ A:너 공부 좋아한다 했었지?? 혹시 수학 좀 알려줄수 있어?            │\n");
		printf("│   내가 수학만 B + 이 나왔거든...ㅎ                                 │\n");
		printf("│ B:음식이 너무 오래 걸리는것 같다...                                │\n");
		printf("└──────────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C4_Q7(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────┐\n");
		printf("│ 우리가 시킨 음식이 나왔다.                             │\n");
		printf("│                                                        │\n");
		printf("│ A:와 음식 맛있다. 너꺼 돈까스 좀 먹을게~               │\n");
		printf("│ B:내가 돈까스 썰어줄게!                                │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C4_Q8(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────┐\n");
		printf("│ 우리는 식사를 다하고 밖으로 나왔다.                  │\n");
		printf("│ 미래:저기 우리 이제 어디갈까?                        │\n");
		printf("│                                                      │\n");
		printf("│ A:나 영화티켓 있는데 영화보러 갈래?                  │\n");
		printf("│ B:밥먹고 나니깐 할게없다...                          │\n");
		printf("└───────────────────────────┘\n");

		scanf("%c", &p);
		man_mr_C4_Q9(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("┌───────────< 챕터 5. 영화관 >──────────┐\n");
		printf("│ 미래:내가 표사올테니깐 여기서 잠깐 기다릴래?               │\n");
		printf("│                                                            │\n");
		printf("│ A:사실 너 화장실 갔을때 내가 예매했어~!                    │\n");
		printf("│ B:알겠어~조심히 갔다와!난 여기 앉아 있을게~!               │\n");
		printf("└──────────────────────────────┘\n");

		scanf("%c", &p);
		man_mr_C5_Q10(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────────────┐\n");
		printf("│ 영화가 시작되었고, 영화를 보는 도중 미래가 화장실에 간다고했다.        │\n");
		printf("│                                                                        │\n");
		printf("│ A:그래? 그럼 조심히 갔다와~                                            │\n");
		printf("│ B:(다리를 스윽 올리며)얼른 지나가 안보여                               │\n");
		printf("└────────────────────────────────────┘\n");

		scanf("%c", &p);
		man_mr_C5_Q11(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do
	{
		printf("┌──────────────────────────────┐\n");
		printf("│ 미래:저... 내가 통금시간 때문에 이제 가봐야 될거 같아.     │\n");
		printf("│                                                            │\n");
		printf("│ A:나 좀있으면 약속이 있는데 잘가~                          │\n");
		printf("│ B:시간이 많이 늦었으니까 내가 집까지 데려다 줄게!          │\n");
		printf("└──────────────────────────────┘\n");
		scanf("%c", &p);
		man_mr_C5_Q12(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	printf("┌─────────────────────────────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.            │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그녀에 대한 내마음을 알리고 싶다.       │\n");
	printf("│ 미래: 오늘 정말 재미있었어!                                      │\n");
	printf("│       다음에 기회 되면 그땐 홍대 가서 놀다 오자!                 │\n");
	printf("│ 당신:잠깐...! 나 할 얘기가 있어...""우리연애 할래¿""              │\n");
	printf("└─────────────────────────────────┘\n");
	getchar();
	system("cls");

}

void man_mr_C1_Q1(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*sum = 7;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 미래:아...네 지금은 시간이 없어서 연락처 드릴테니깐 연락주세요.    │\n");
		printf("│ 당신:네! 수업 늦으실거 같은데 얼른 가세요!                       │\n");
		printf("│ 그렇게 나는 미래라는 여자의 번호를 받았다.                         │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 미래:어...저기 감사의 의미로 연락주시면 밥 사드릴게요.             │\n");
		printf("│ 당신:아 네! 감사해요~                                             │\n");
		printf("│ 수업늦으실거 같은데 얼른 가셔야 할거 같아요!                       │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 미래:네. 그럼 먼저 가볼게요.                 │\n");
		printf("│ 그렇게 나는 미래라는 여자의 번호를 받았다.   │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C2_Q2(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 1) = 6;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 당신:안녕하세요~ 아까 지갑 찾아줬던 사람이에요!              │\n");
		printf("│ 미래:아 안녕하세요. 제가 바빠가지고 먼저 연락을 못드렸네요.    │\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 당신:아니에요~ 밥은 언제 먹을까요?                           │\n");
		printf("│ 제가 평일은 안되고, 토요일은 가능할거 같아요                   │\n");
		printf("│ 미래:그럼 토요일 오후6시에 갤러리아 백화점에서 만날까요?       │\n");
		printf("│ 당신:네 좋아요! 그럼 토요일에 뵈요!                          │\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 1) = 3;
		system("cls");
		printf("┌───────────────────────────┐\n");
		printf("│ 미래:저 아까 오후에 지갑 찾아주셨던 분 맞나요?       │\n");
		printf("│ 당신:네 맞아요~밥은 언제 먹을까요?                 │\n");
		printf("└───────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 미래:음...일요일 오후 어때요?                              │\n");
		printf("│ 당신:네 좋아요! 그럼 일요일 오후6시에 백화점앞에서 뵈요! │\n");
		printf("└──────────────────────────────┘\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}
void man_mr_C3_Q3(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 2) = 5;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 미래:아...네 죄송합니다. 얼른가요.                             │\n");
		printf("│ 당신:아니에요~ 얼른 밥이나 먹으러가죠~                       │\n");
		printf("│ 미래:네...!저기 죄송한데 제가 뛰어와서 그런데 좀만 천천히 가요.│\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;




	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 미래:아..아니에요 전 괜찮아요. 기다리게 해서 죄송해요. │\n");
		printf("│ 당신:아이 아니에요~저도 막 도착했는걸요??            │\n");
		printf("│ 뛰어오셔서 힘드신데 잠깐 벤치에 앉았다 가죠.           │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 미래:아 네.. 감사해요..!               │\n");
		printf("│ 미래는 배려심에 설렌것 같다.           │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}
void man_mr_C3_Q4(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 3) = 5;
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 미래:네 그럼 맛집으로 가시죠.          │\n");
		printf("│ 당신:입맛에 맞으셨으면 좋겠네요~!    │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 미래:어 저는 뭐든지 잘먹어요.                                │\n");
		printf("│ 당신:그렇다면 다행이네요! 얼른 가죠~                       │\n");
		printf("│ 우리는 식당을 가면서 대화를 통해 동갑이란것을 알았다.        │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 3) = 2;
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 미래:아...그러면 저기 있는 분식집으로 가실래요?              │\n");
		printf("│ 당신:네 그래요~ 저는 아무거나 다 잘먹어요~                 │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 미래:그..그럼 얼른 가죠.                                     │\n");
		printf("│ 당신:제가 저녁을 안먹어서 배고픈데 얼른가죠!               │\n");
		printf("│우리는 식당을 가면서 대화를 통해 동갑이란것을 알았다.         │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}
void man_mr_C4_Q5(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 4) = 4;
		system("cls");
		printf("┌──────────────────────┐\n");
		printf("│ 미래:아...하하 재밌다...                   │\n");
		printf("│ 당신:그래요? 그럼 하나 더 해줄까??       │\n");
		printf("└──────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:그건 좀...아닌것 같아..                       │\n");
		printf("│ 당신:아..미안. 재밌어 하는줄 알았어..            │\n");
		printf("│ 당신:큰일이다. 분위기가 더 적적해졌다.           │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 4) = 6;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 미래:아 나는 공부하는거 좋아해                                 │\n");
		printf("│ 당신:아 정말?!?!그럼 나중에 나랑 같이 도서관가서 공부할래??  │\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:어 그래~나는 상관 없어.                       │\n");
		printf("│ 당신:그럼 다음에 날 정해서 가자!                 │\n");
		printf("└──────────────────────────┘\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}
void man_mr_C4_Q6(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 5) = 3;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 미래:어....그럼 너 우동먹을래?이게 제일 베스트메뉴래           │\n");
		printf("│ 당신:그래야겠다~ 넌 뭐먹게?                                  │\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 미래:난 돈까스 먹을려고.               │\n");
		printf("│ 당신:이야~ 그것도 맛있겠네~          │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 미래:어 그래? 그럼 그거 먹어야겠다. 맛있을까?                  │\n");
		printf("│ 당신:이 집 돈까스가 진짜 맛있어! 나 믿고 먹어봐!             │\n");
		printf("└────────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:어 그래야겠다! 그럼 너 믿고 먹을게~           │\n");
		printf("│ 당신:그래그래!!                                  │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");

		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void man_mr_C4_Q7(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 6) = 4;
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 미래: 수학 잘하긴 하는데 잘은 못 가르치는데 괜찮아?        │\n");
		printf("│ 당신:웅 괜찮아! 그럼 나중에 도서관가서 알려줘^^          │\n");
		printf("└──────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 미래:그럼 너도 문학 좀 알려줄 수 있어?                       │\n");
		printf("│ 당신:당연하지~내가 문학을 제일 잘하거든!                   │\n");
		printf("│ 당신:미래는 공부를 좋아하는것 같다.분위기가 한층 좋아졌다! │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 미래:음...그러게 배가 많이 고픈가보다.       │\n");
		printf("│ 당신:어 오늘 한끼도 못먹었거든ㅎㅎ         │\n");
		printf("└───────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:아 그렇구나. 밥은 먹고 다녀.              │\n");
		printf("│ 당신:걱정해줘서 고마워!                      │\n");
		printf("└────────────────────────┘\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C4_Q8(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 7) = 3;
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:아...어 그래 먹어봐...배가 정말 많이 고팠구나.│\n");
		printf("│ 당신:와 돈까스도 정말 맛있다! 내꺼 먹어 볼래?    │\n");
		printf("└──────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌──────────────────────┐\n");
		printf("│ 미래:아냐..너 많이 먹어^^                  │\n");
		printf("│ 당신:그래~ 맛있게 먹어!                  │\n");
		printf("│ 미래의 안색이 안좋아졌다.                  │\n");
		printf("└──────────────────────┘\n");

		system("pause");
		system("cls");



		break;

	case 'B':
		*(sum + 7) = 5;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 미래:어? 안그래줘도 되는데 고마워!           │\n");
		printf("│ 당신:아냐~다 썰었으니까 얼른 먹어봐!       │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 미래:여기 정말 맛있다. 다음에 또 와야겠어!       │\n");
		printf("│ 당신:맛있어서 다행히다! 맛있게 먹어!           │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C4_Q9(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 8) = 5;
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 미래: 그럴까?? 나도 최근에 나온 영화 보고싶었는데 잘됐다~    │\n");
		printf("│ 당신:혹시 보헤미안 랩소디 영화 보고싶었던거야??            │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 미래:어!맞아 너도 그거 보고싶었어?                     │\n");
		printf("│ 당신:웅! 우리 취향이 비슷하다^^                      │\n");
		printf("│ 미래:그러게~! 얼른 영화 보러 가자                      │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 미래:그러게...저기 영화관 보이는데 영화라도 볼래?          │\n");
		printf("│ 당신:그거 괜찮다! 얼른 영화보러가자!!                    │\n");
		printf("└──────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 미래:그래 너가 좋아해서 다행이다.            │\n");
		printf("│ 당신:나 영화보는거 좋아해ㅎㅎ              │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C5_Q10(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 9) = 5;
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:아 정말?? 그럼 다음에는 내가 영화값 낼게!     │\n");
		printf("│ 당신:그럼 다음에는 해리포터 보러오는거 어때?     │\n");
		printf("└──────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 미래:그래그래 우리 영화시간 늦겠다~ 얼른 들어가자!     │\n");
		printf("│ 당신:그래~! 팝콘이랑 콜라 사서 얼른 가자             │\n");
		printf("└────────────────────────────┘\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 9) = 0;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:그래 얼른 갔다올게~                       │\n");
		printf("│ 당신:올때 팝콘이랑 콜라도 같이 사와줘!       │\n");
		printf("└────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 미래:어...?그래 알았어....             │\n");
		printf("│ 미래는 표정이 굳어져갔다.              │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");


		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C5_Q11(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 10) = 5;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:(소곤소곤) 알았어..영화 마저 보고있어!    │\n");
		printf("│ 당신:그래~너도 빨리와서 영화 마저봐!         │\n");
		printf("└────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:알았어~                                   │\n");
		printf("│ 당신: 조심히 갔다와~!!                       │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 10) = 2;
		system("cls");
		printf("┌─────────────────────────────────┐\n");
		printf("│ 미래:어...?아 미안 얼른 지나갈게                                 │\n");
		printf("│ 당신:아 지금이 하이라이트인데...얼른 갔다와 지금 하이라이트야~ │\n");
		printf("└─────────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:어 그래 영화 잘 보고있어.                 │\n");
		printf("│ 미래의 표정에서 살기가 느껴졌다.               │\n");
		printf("└────────────────────────┘\n");

		system("pause");
		system("cls");


		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void man_mr_C5_Q12(char p, person *user)
{

	switch (p)
	{
	case 'A':
		*(sum + 11) = 3;
		system("cls");
		printf("┌─────────────────────────────────┐\n");
		printf("│ 미래:그래도 우리집앞 까지만 데려다 주면안될까? 너무 무서워서그래.│\n");
		printf("│ 당신:그래 요즘 세상 위험하니깐...내가 데려다줄게~              │\n");
		printf("└─────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 미래:고마워~얼른 가자                          │\n");
		printf("│ 당신:그러자~골목길이 으스스하긴 하네~        │\n");
		printf("└────────────────────────┘\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 11) = 6;
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 미래:아 정말? 고마워~미안하지만 집 앞까지만 부탁할게.      │\n");
		printf("│ 당신:아냐 늦은시간에 당연히 집까지 데려다주는게 맞는거지!│\n");
		printf("└──────────────────────────────┘\n");

		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 미래:너도 집갈려면 얼른 가자.                      │\n");
		printf("│ 당신:그래 너네 부모님이 걱정하시겠다.얼른 가자~  │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}
void f_finish_mr(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 미래의 표정이 좋지 않다                      │\n");
		printf("│                                              │\n");
		printf("│ 미래 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 미래의 표정이 미심쩍어 보인다                      │\n");
		printf("│                                                    │\n");
		printf("│ 미래 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 미래의 표정이 밝다                                     │\n");
		printf("│                                                        │\n");
		printf("│ 미래 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}



void man_dy(char p, person *user)
{


	do {

		printf("┌──────────────<챕터 1.첫 만남>──────────────┐\n");
		printf("│ 당신: 혹시 지갑 잃어버리신분 맞아요?                                 │\n");
		printf("│ 도연: 네!맞아요! 제가 주인이에요ㅠㅠ 지갑 돌려주시겠어요?              │\n");
		printf("│                                                                        │\n");
		printf("│ A:지갑 주워드렸으니 밥 사주세요!                                       │\n");
		printf("│ B:그냥 돌려준다.                                                       │\n");
		printf("└────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);



	do {
		printf("┌────────────────<챕터 2.집 안>──────────────┐\n");
		printf("│ 침대에 누워 핸드폰을 하는 도중 카카오톡에 그녀의 프로필 사진이 떴다.     │\n");
		printf("│ 당신:아까봤던 지갑 주인이네. 먼저 연락해야되나??                       │\n");
		printf("│ A:프로필을 구경하다 보이스톡을 눌렀다가 취소한다.                        │\n");
		printf("│ B: 보이스톡이 온 후 끊겼다.                                              │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C2_Q2(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}

	} while (p != 65 && p != 66);



	do {
		printf("┌───────────<챕터 3.갤러리아백화점 앞>─────────────┐\n");
		printf("│ 약속한 장소에 먼저 도착했다.                                             │\n");
		printf("│ 당신:아직 안 왔네…혹시 잊은 건 아니겠지...?                           │\n");
		printf("│ 약속시간보다 10분이 지나고서 여자가 뛰어왔다.                            │\n");
		printf("│ 도연: 죄송해요!많이 기다리셨어요...? 정말 죄송해요ㅠ                     │\n");
		printf("│                                                                          │\n");
		printf("│ A:괜찮아요~가죠~                                                         │\n");
		printf("│ B:다치시면 어쩌시려구여!! 뛰지 마세여!                                   │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────┐\n");
		printf("│ 도연:저녁은 뭐 드시고 싶으세요??                                         │\n");
		printf("│                                                                          │\n");
		printf("│ A:저 쿠폰 다모은 돈까스집 있는데 어떠세요?                               │ \n");
		printf("│ B:저는 다 괜찮아요 그쪽은요?                                             │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌──────────────<챕터 4. 식당>────────────────┐\n");
		printf("│ 식당에 들어왔다. 어색한 공기가 흐른다.                                   │\n");
		printf("│                                                                          │\n");
		printf("│ A:여기 고로케가 고로케 맛있어~!                                          │\n");
		printf("│ B:여기 분위기 엄청 좋다                                                  │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────┐\n");
		printf("│ 도연:메뉴가 다양하네~ 너 뭐먹을래??                                      │\n");
		printf("│                                                                          │\n");
		printf("│ A:난 아무거나                                                            │\n");
		printf("│ B:난 돈까스 먹을래 같은거 먹을래??                                       │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────┐\n");
		printf("│우리는 돈까스를 주문했다. 정적이흐른다. 어떻게 해야할까?                  │\n");
		printf("│                                                                          │\n");
		printf("│ A:너 혹시 술 좋아해?                                                     │\n");
		printf("│ B:음식 나오는게  너무 오래 걸리네                                        │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────────────┐\n");
		printf("│ 돈까스가 나왔다.                                                       │ \n");
		printf("│                                                                        │\n");
		printf("│ A:말 걸지 말고 각자 먹자                                               │ \n");
		printf("│ B:이 집 돈까스 진짜 맛있어! 얼른 먹어봐! 부족하면 내꺼 더 줄게~!       │\n");
		printf("└────────────────────────────────────┘\n");

		scanf("%c", &p);
		man_dy_C4_Q8(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────────────┐\n");
		printf("│ 우리는 식사를 다하고 밖으로 나왔다.                                    │\n");
		printf("│ 도연:배부르니까 기분 좋아졌어ㅎㅎ 이제 어디 갈래?                      │\n");
		printf("│                                                                        │\n");
		printf("│ A:내가 보고싶었던 영화예매 했는데 같이 보러가장!                       │ \n");
		printf("│ B:고급시계 새로운 캐릭터 나왔는데 하러 갈래?                           │\n");
		printf("└────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────<챕터 5. 영화관>───────────────┐\n");
		printf("│ 그렇게 그녀와 함께 영화를 보러 영화관에 왔다.                                  │\n");
		printf("│ 나 영화 볼땐 팝콘이랑 콜라 있어야 하는데 사러 갔다올게~                        │\n");
		printf("│                                                                                │\n");
		printf("│ A:아냐 너 여기서 기다리구있어 내가 사올게~!                                    │\n");
		printf("│ B:알겠어! 나는 치즈맛 사다줘!!                                                 │\n");
		printf("└────────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────────────────────────┐\n");
		printf("│ 영화가 시작되었고, 영화를 보는 도중 도연이가 화장실에 간다고했다.                            │\n");
		printf("│                                                                                              │\n");
		printf("│ A:(소곤소곤)나도 화장실 가려던 참인데 같이 가자.                                             │\n");
		printf("│ B:(다리를 스윽 올리며)얼른 지나가 안보여                                                     │\n");
		printf("└───────────────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────┐\n");
		printf("│ 길고 길었던 영화가 끝나고 늦은 밤이 되었다.                              │\n");
		printf("│ 도연이가 통금시간이 있어 집에 가려 한다.                                 │\n");
		printf("│ 도연:나 통금시간 때문에 이제 가봐야 될거 같아~                           │\n");
		printf("│                                                                          │\n");
		printf("│ A:나 좀있으면 약속이 있는데 잘가~                                        │\n");
		printf("│ B:시간이 많이 늦었으니까 내가 집까지 데려다 줄게!                        │\n");
		printf("└─────────────────────────────────────┘\n");
		scanf("%c", &p);
		man_dy_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");

		}
	} while (p != 65 && p != 66);

	printf("┌─────────────────────────────────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.                    │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그녀에 대한 내마음을 알리고 싶다.               │\n");
	printf("│ 도연: 오늘 정말 재미있었고, 다음에 기회 되면 그땐 홍대 가서 놀다 오자!   │\n");
	printf("│ 당신:잠깐...! 나 할 얘기가 있어... ""우리연애 할래¿""                     │\n");
	printf("└─────────────────────────────────────┘\n");
	getchar();
	system("cls");


}
void man_dy_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 도연:(당황하며)아 네! 술도 사드릴수 있죠~      │\n");
		printf("│  당신:ㅋㅋㅋ그럼 연락드릴게요!               │\n");
		printf("│ 도연: 네~그럼 연락주세요~                      │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:지갑도 찾아주셨는데 감사의 의미로 밥이라도 한끼 사드릴게요~!          │\n");
		printf("│ 당신: 사주신다면 감사히 먹을게요!                                        │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연: (연락처를 주며)제가 바빠서 지금 가봐야될거같아요! 연락주세요!!       │\n");
		printf("│ 당신: 네 조심히 가세요~~                                                 │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_dy_C2_Q2(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 1) = 6;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 당신:죄송해요 늦은시간에 ㅠㅠ                                            │\n");
		printf("│ 도연:괜찮아요 술자리에서 놀고 있거든요 ㅋㅋㅋ 밥은 언제 먹을까요?          │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 당신: 전 스케줄 다 괜찮아요!!                                            │\n");
		printf("│ 도연: 그럼 토요일 오후6시에 둔산동 갤러리아 백화점 앞에서 만나요~          │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 도연:죄송해요!! 술 마셔서 잘못 눌렀네요!                   │\n");
		printf("│ 당신: 괜찮습니다.                                        │\n");
		printf("└──────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연: 아 맞다! 밥사드려야 하는데 언제가 괜찮으세요??                       │\n");
		printf("│ 당신:음...주말 어때요?                                                   │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:그럼 이번주 토요일 저녁 6시에 둔산동 갤러리아 백화점 앞에서 만나요!   │\n");
		printf("│ 당신:네! 그럼 그때 뵈요~                                                 │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_dy_C3_Q3(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 2) = 5;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연: 아..네! 언제부터 기다리셨어요?                                       │\n");
		printf("│ 당신:저 한10분정도??기다렸어요! 괜찮아요~                                │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연: 아~네네 그럼 밥먹으러 가요!                                          │\n");
		printf("│ 당신:네 좋아요~                                                          │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:아 걱정해주셔서 감사해요ㅎㅎ저 달리기 잘해요!                         │\n");
		printf("│ 당신:ㅋㅋㅋ그래도 안넘어지셔서 다행이네요!                               │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:배 많이 고프실텐데 밥 먹으러가죠!                                     │\n");
		printf("│ 당신:네 좋아요~!                                                         │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void man_dy_C3_Q4(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 3) = 5;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:네~좋아요! 저 돈까스 되게 좋아해요!!                                  │\n");
		printf("│ 당신:그럼 얼른 밥먹으러 가요!                                            │\n");
		printf("│ 도연:네 얼른 갑시다!!                                                      │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:아...그럼 돈까스 먹으러갈래요??                                       │\n");
		printf("│ 당신:네 좋아요~ 저 돈까스 좋아해요~                                      │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:네 그럼 저쪽에 보이는 곳으로 가죠~!                                   │\n");
		printf("│ 당신:네 얼른 갑시다~~                                                    │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");



	}
}

void man_dy_C4_Q5(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 4) = 6;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:ㅋㅋㅋㅋㅋ너 정말 재밌다                                              │\n");
		printf("│ 당신:어..ㅎ 재밌어?? 나도 아재개그 좋아하거든ㅋㅋㅋ                      │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:다음에도 또 해줘ㅋㅋㅋ                                                │\n");
		printf("│ 당신:알았어ㅎㅎ더 연습해서 해줄게!                                       │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 아재개그 덕분에 도연이와 가까워졌다!또한 대화를 하면서 서로 동갑인 사실을 알았다!│\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 도연:그러게~사진찍기 딱 좋은 곳 인거같아~                          │\n");
		printf("│ 당신:그니깐~ 다음에 또 와봐야겠어!                               │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:그땐 누구랑 오게?ㅋㅋ                                                 │\n");
		printf("│ 당신:그러게? 나랑 다시 오자ㅎㅎ                                          │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 도연:고민해 볼게~                                                                │\n");
		printf("│ 우리는 대화를 하면서 서로 동갑인 사실을 알았다!                                  │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}
void man_dy_C4_Q6(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 5) = 3;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:아...그래? 난 돈까스 먹을건데 같은거 먹을래?                          │\n");
		printf("│ 당신:그래~나 돈까스 좋아해!!                                             │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────┐\n");
		printf("│ 도연:그럼 돈까스로 시킨다??                                      │\n");
		printf("│ 당신:웅~얼른 주문하자!                                         │\n");
		printf("└─────────────────────────────────┘\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 도연:그래 그럼 돈까스 먹자~~                                       │\n");
		printf("│ 당신:여기 돈까스가 진짜 맛있어!                                  │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:정말? 그렇게 말하니깐 기대된다ㅎㅎ                                    │\n");
		printf("│ 당신:기대해도 좋아!!                                                     │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}


void man_dy_C4_Q7(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 6) = 4;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:웅ㅋㅋㅋㅋ! 내 세포의 반은 알코올이라고 할수 있지 ㅋㅋ!               │\n");
		printf("│ 당신:오 정말?? 나도 술 잘 마시는데 다음에 술 한잔 하자!                  │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:그래 좋아! 나도 술 잘마시는데 먼저 취하면 안된다~ㅋㅋ                 │\n");
		printf("│ 당신:ㅋㅋㅋ그럴일 없어!                                                  │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 술얘기를 하다보니까 도연이는 즐거워 보였고 성격이 쿨해서 편했다.           │ \n");
		printf("│ 대화를 나누던 중 음식이 나왔다.                                            │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:그거 인정! 후...좀만 더 기다려보자.                                   │\n");
		printf("│ 당신:그래 배많이 고프구나?                                               │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 도연:어. 오늘 한끼도 못먹었거든..                                          │\n");
		printf("│ 도연이는 배가 많이 고팠는지 살짝 짜증나 보였다. 가만히 있어야겠다.         │\n");
		printf("│ 다행히 돈까스가 나왔다. 도연이의 기분이 좀 풀린 것 같다.                   │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void man_dy_C4_Q8(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 7) = 3;
		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│ 도연:어??그래 뭐 맛있게 먹어~                                      │\n");
		printf("│ 당신:그래 너도 맛있게 먹어~                                      │\n");
		printf("└──────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 우리는 묵묵히 식사를 했다.                         │\n");
		printf("│ 도연이의 표정이 좋지않다.                          │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("┌───────────────────────────────────────────┐\n");
		printf("│ 도연:(한입 먹어보며)오~~ 돈까스 진짜 맛있다!!내가 먹어본 돈까스 중에서 제일 맛있어!  │\n");
		printf("│ 당신:입에 맞아서 다행이다ㅎㅎ맛있게 먹어!                                          │\n");
		printf("└───────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 도연이의 표정이 밝아졌다.              │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");
	}
}
void man_dy_C4_Q9(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 8) = 5;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:그래 좋아~! 나도 영화 안본지 꽤 된거같아ㅎㅎ                            │\n");
		printf("│ 당신:좋아해서 다행이다! 그럼 영화보러 가자!                                │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────────────────┐\n");
		printf("│ 영화 보러가자는 제안에 도연이의 표정이 밝아졌다.                               │\n");
		printf("└────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("┌───────────────────────────────────────────┐\n");
		printf("│ 도연:내가 게임은 별로 안 좋아해서 그런데 차라리 영화 보러가자.                       │\n");
		printf("│ 당신:그래 그럼 영화 보러가자~!                                                     │\n");
		printf("└───────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_dy_C5_Q10(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 9) = 5;
		system("cls");
		printf("┌───────────────────────────────────────────┐\n");
		printf("│ 도연:고마웡! 그럼 우리 같이 가서 팝콘 고르자!                                        │\n");
		printf("│ 당신:그래~어떤 맛 좋아해??                                                         │\n");
		printf("└───────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────────────────┐\n");
		printf("│ 도연:난 캬라멜맛 좋아해! 너는??                                                │\n");
		printf("│ 당신:오! 나도 캬라멜맛 좋아하는데!!우리 뭔가 잘통한다!                       │\n");
		printf("└────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────────┐\n");
		printf("│ 상영시간이 다가와 우리는 상영관으로 들어갔다                               │\n");
		printf("└──────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:시러 난 캬라멜맛 먹을꺼야~!                                             │\n");
		printf("│ 당신:아 그러지말고 치즈맛 사다주라~~                                       │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────┐\n");
		printf("│ 도연:그럼 같이 사러가자~                                   │\n");
		printf("│ 당신:그래~알았어 같이 사러가~~                           │\n");
		printf("└──────────────────────────────┘\n");
		system("pause");
		system("cls");




	}
}

void man_dy_C5_Q11(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 10) = 5;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:그래 얼른 갔다 와서 영화 마저 보자.                                     │\n");
		printf("│ 당신:그래그래! 조심해서 나가자~                                            │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:그래 얼른 갔다올게..                                                    │\n");
		printf("│ 당신: 곧 하이라이트니깐 얼른 갔다와~                                       │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연이의 표정이 별로 좋지않다.                                               │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void man_dy_C5_Q12(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 11) = 3;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:골목길이 으스한데 저 앞까지만 데려다 줘~                                │\n");
		printf("│ 당신:음...그래...10분이면 돼??                                             │\n");
		printf("│ 도연:응 너 약속 안늦을려면 얼른 가자~                                        │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연이의 표정이 별로 좋지않다.                                               │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연:그래주면 너무 고마워~!그럼 신세 좀 질게!                                │\n");
		printf("│ 당신:ㅋㅋㅋ무슨 신세야~당연한 일인데! 얼른 가자 춥다!                      │\n");
		printf("│ 도연:구래! 얼른 가자!!                                                       │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────────────┐\n");
		printf("│ 도연이의 표정이  좋아 보인다!                                                │\n");
		printf("└───────────────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void f_finish_dy(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 도연의 표정이 좋지 않다                      │\n");
		printf("│                                              │\n");
		printf("│ 도연 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 도연의 표정이 미심쩍어 보인다                      │\n");
		printf("│                                                    │\n");
		printf("│ 도연 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 도연의 표정이 밝다                                     │\n");
		printf("│                                                        │\n");
		printf("│ 도연 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}
void woman_ms(char p, person *user)
{

	do {

		printf("┌────────<챕터 1. 카톡>─────────┐\n");
		printf("│ 지환이가 친구를 소개해줬다?                    │\n");
		printf("│ 연락처를 받았는데 어떻게 해야할까?             │\n");
		printf("│                                                │\n");
		printf("│ A: 먼저 카톡을 한다.                           │\n");
		printf("│ B: 연락을 기다린다.                            │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("┌──────────<챕터 2.첫 만남>──────────┐\n");
		printf("│ 약속했던 시간이 다가오고 있다.                         │\n");
		printf("│ 저 멀리서 민석이의 프로필 사진과 닮은 사람이 서 있다.  │\n");
		printf("│ 민석이는 사진보다 잘생긴 것 같다.                      │\n");
		printf("└────────────────────────────┘\n");
		getchar();
		system("cls");
		printf("┌────────────────────────────┐ \n");
		printf("│ 당신:안녕! 너 민석이 맞지??                │\n");
		printf("│ 민석 : 어 안녕?? 혹시 기다린 거 아니지?                │\n");
		printf("│ 당신: 아냐~방금 왔어!!                               │\n");
		printf("│ 어떤식으로 처음 말을 할까?                             │\n");
		printf("│                                                        │\n");
		printf("│ A:우리 이제 뭐할까?                                    │\n");
		printf("│ B: 날씨도 좋은데 우리 산책할까?                        │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌────────────────────────────┐\n");
		printf("│ 정적이 흐른다. 주변에 단풍이 예쁘게 물들어 있다.       │\n");
		printf("│                                                        │\n");
		printf("│ A:(단풍을 멀리서 바라보며) 와~단풍이 예쁘다!           │\n");
		printf("│ B:(단풍잎을 머리에 꼽으며) 나 예뻐?                    │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌───────────────────────────┐\n");
		printf("│ 우리는 어색함이 풀린 것 같다.                        │\n");
		printf("│ 우리는 걷다가 사람이 몰려있는 곳으로 향했다.         │\n");
		printf("│ 민석 : 어? 저기 사람들이 몰려 있는뎅? 무슨 일이지?   │\n");
		printf("│                                                      │\n");
		printf("│ A:무슨일 있는거 아니야?? 다른 길로 갈까?             │\n");
		printf("│ B:버스킹 하나봐~ 구경할까?                           │\n");
		printf("└───────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C3_Q4(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌───────────<챕터3: 버스킹 >─────────┐\n");
		printf("│ (노래중)                                               │\n");
		printf("│ 민석 : 노래 잘한다~ 너는 무슨 노래 좋아해?             │\n");
		printf("│                                                        │\n");
		printf("│ A:나는 발라드 좋아해~!                                 │\n");
		printf("│ B:나는 힙합을 좋아해~                                  │\n");
		printf("└────────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C4_Q5(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌───────────────────────────────┐\n");
		printf("│ 갑자기 내 앞으로 마이크가 다가왔다                           │\n");
		printf("│ 보컬 : 거기 두 분 분위기가 좋으시네요~ 무슨 사이세요?        │\n");
		printf("│                                                              │\n");
		printf("│ A: (당황하며) 저희 친구에요.                                 │\n");
		printf("│ B:(웃으며) 저희 아직 아무사이 아니에요^^                     │\n");
		printf("└───────────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C4_Q6(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌─────── <챕터4 레스토랑 >──────┐\n");
		printf("│ 버스킹이 끝나고 우리는 밥을 먹기로 했다    │\n");
		printf("│ 우리는 레스토랑에 들어와 자리에 앉았다     │\n");
		printf("│ 직원분이 메뉴판을 주셨다                   │\n");
		printf("└──────────────────────┘\n");
		getchar();
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 당신: 우리 뭐 먹을까?                                      │\n");
		printf("│ 민석 : (성대모사를 하며) 흠흠 봉골레파스타 하나              │\n");
		printf("│ 직원 : 흠흠 손님 주문은 앞에서 도와드리겠습니다              │\n");
		printf("│ 민석 : 아.. 죄송합니다…ㅠㅠㅠㅠㅠ                           │\n");
		printf("└───────────────────────────────┘\n");
		getchar();
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 나는 민석이의 모습이 너무 귀여웠다           │\n");
		printf("│ 민석이가 쑥스러워 하고있다.어떻게 해야할까?        │\n");
		printf("│                                                    │\n");
		printf("│ A:괜찮아 민석아 귀여웠어 내가 주문하고 올게~~      │\n");
		printf("│ B: 앜ㅋㅋㅋㅋ뭐야 그게 얼른 앞에 가서 주문하고 와  │\n");
		printf("└──────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C4_Q7(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌──────────────────────────┐\n");
		printf("│ 민석 : 으익..껍질이 있네...조개껍질 조심해서 먹어~ │\n");
		printf("│                                                    │\n");
		printf("│ A: (우물우물)으응~                                 │\n");
		printf("│ B:너도 조심해~                                     │\n");
		printf("└──────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C4_Q8(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌──────────────────────────┐\n");
		printf("│ 우리는 밥을 다 먹고 계산대 앞으로 갔다.            │\n");
		printf("│ 총가격은 32000원이 나왔다.                         │\n");
		printf("│ 동석: 생각보다 많이 나왔네….                      │\n");
		printf("│                                                    │\n");
		printf("│ A:(카드를 건네며)다 계산해주세요                   │\n");
		printf("│ B: 하나 먼저 계산해주세요                          │\n");
		printf("└──────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌────────<챕터5: 한강공원 >─────────┐\n");
		printf("│ 우리는 맥주와 돗자리를 가지고 와서 자리를 잡았다.  │\n");
		printf("│ 민석:오늘 하루 어땠어?.                            │\n");
		printf("│                                                    │\n");
		printf("│ A:나름 괜찮았어!!너는 어땠어?                      │\n");
		printf("│ B:나는 좋았어!!너는 어땠어?                        │\n");
		printf("└──────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C5_Q10(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌───────────────────────────────┐\n");
		printf("│ 민석:  우리 이제 집에 갈까?? 내가 이제 가봐야 돼서… │\n");
		printf("│                                                              │\n");
		printf("│ A:우리 30분만 더 있다 가면 안될까?? 경치가 너무 좋아~!       │\n");
		printf("│ B:그래그래~ 시간이 벌써 이렇게 됐네!                         │\n");
		printf("│  얼른 가자! 나도 이제 가봐야 될 거 같아~                     │\n");
		printf("└───────────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("┌────────────────────────┐\n");
		printf("│ 민석: 시간이 많이 늦었으니까             │\n");
		printf("│     내가 너네 집까지 데려다 줘도 괜찮지?       │\n");
		printf("│                                                │\n");
		printf("│ A:그래~ 그럼 나야 고맙지~!                     │\n");
		printf("│ B:아니야~ 나 혼자 가도 상관없어~               │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		woman_ms_C5_Q12(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("┌─────────────┐\n");
			printf("│ 잘못 입력하셨습니다.     │\n");
			printf("│ 다시 선택해주세요.       │\n");
			printf("└─────────────┘\n");
		}
	} while (p != 65 && p != 66);


	printf("┌─────────────────────────────────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.                    │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그에 대한 내마음을 알리고 싶다.                 │\n");
	printf("│ 민석: 오늘 정말 재미있었고, 다음에 기회 되면 그땐 홍대 가서 놀다 오자!   │\n");
	printf("│ 당신:잠깐...!지훈아~! 나 할 얘기가 있어...   ""우리연애 할래¿""           │\n");
	printf("└─────────────────────────────────────┘\n");
	getchar();
	system("cls");
}
void woman_ms_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 당신:민석아 안녕?                         │\n");
		printf("│ 민석 : 안녕! 먼저 연락해줘서 고마워            │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 당신:유아교육과라고 들었는데 학교생활  어때? │\n");
		printf("│ 민석 : 웅웅~수업 정말 재밌엉!                  │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 당신:ㅋㅋㅋㅋ다행이다 우리 언제 한번 만날까?         │\n");
		printf("│ 민석 : 그러게 우리 언제 만나는게 좋을까?               │\n");
		printf("│ 당신:음… 나 주말에는 프리한데 너도 주말에 한강 가자!│\n");
		printf("│ 민석 :오 좋다좋다~! 나도 한강 가보고 싶었어!!          │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 당신:그래ㅋㅋ 그럼 우리 토요일에 만나자!!        │\n");
		printf("│ 민석 : 웅! 토요일에 봐!><                          │\n");
		printf("│ 민석이와 조금은 가까워진 것 같다.                  │\n");
		printf("│ 민석이에 대해 조금은 알게 된 것 같다!              │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("┌─────────────────────────────┐\n");
		printf("│ 민석 : 안녕 혹시 지환이 친구 맞아??             │\n");
		printf("│ 당신:어 안녕~! 너가 지환이 친구 민석이구나~            │\n");
		printf("└─────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 민석 : 웅 ㅎㅎ 네 얘기 많이 들었어.                │\n");
		printf("│  지환이가 너 엄청 착하다고 하더라구^^~             │\n");
		printf("│ 당신:나도 마찬가지야 우리 언제 만나는게 좋을까?  │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 민석: 음…난 언제 만나도 상관없어!~              │\n");
		printf("│ 민석이는 리드를 잘 못하는 것 같다.               │\n");
		printf("│ 내가 먼저 정하는게 나을 것 같다!                 │\n");
		printf("│ 당신:그러면 우리 주말에 한강 가는거 어때?      │\n");
		printf("│ 나 토요일엔 시간이 괜찮거든!                     │\n");
		printf("└─────────────────────────┘\n");
		printf("민석 :그래 그래!! 그럼 토요일에 보자\n");
		system("pause");
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 당신:그래~토요일에 절대 늦지마!!             │\n");
		printf("│ 민석 : 웅! 토요일에 봐!><                      │\n");
		printf("│ 우리는 어느정도 가까워진 것 같다.              │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");



	}
}

void woman_ms_C2_Q2(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 1) = 6;
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 당신:그러게 뭐하지? 막상 오니까 모르겠네       │\n");
		printf("│ 민석 : 그럼 산책이라도 할까?                     │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("┌─────────────────────────────┐\n");
		printf("│ 민석 : 좋아 나 걷는거 좋아해                             │\n");
		printf("└─────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void woman_ms_C3_Q3(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 2) = 5;
		system("cls");
		printf("┌────────────────────────────────┐\n");
		printf("│ 민석 : 그러게~ 어! 머리에 단풍잎이 떨어졌어 가만히 있어봐~     │\n");
		printf("│ 당신은 민석이의 다정한 모습에 호감을 느끼기 시작했다.        │\n");
		printf("└────────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("┌─────────────────────────────┐\n");
		printf("│ 민석 : (단풍잎을 머리에 꼽으며) 나도 너처럼 예뻐질래     │\n");
		printf("│ 당신은 민석이의 귀여운 모습에 호감을 느끼기 시작했다   │\n");
		printf("└─────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void woman_ms_C3_Q4(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 3) = 5;
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 민석 : 어?; 노랫소리가 들리는데? 버스킹 하나봐   │\n");
		printf("│ 당신:아 그런가? 그럼 구경할래?                 │\n");
		printf("│ 민석 : 그래~얼른 가보자~!                        │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 민석 : 나 버스킹 좋아해~ 보고가자            │\n");
		printf("│ 당신:그래~좋아! 나도 버스킹 좋아해!        │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void woman_ms_C4_Q5(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 4) = 6;
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 민석 : 우왕 나랑 취향이 똑같다><                 │\n");
		printf("│       발라드를 들으면 감성이 살아나는 기분이야!  │\n");
		printf("│ 당신:아 정말??나돈데ㅎㅎㅎ                     │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("┌─────────────────────────────┐\n");
		printf("│ 민석 : 우왕 취향이 참 트랜디하네? 나는 발라드를 좋아해~  │\n");
		printf("│ 당신:난 발라드보단 힙합이 좋아!                        │\n");
		printf("└─────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}
void woman_ms_C4_Q6(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 5) = 3;
		system("cls");
		printf("┌────────────────────┐\n");
		printf("│ 보컬 : 아.. 죄송합니다                 │\n");
		printf("│ 민석이의 표정이 좋지않다               │\n");
		printf("└────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 보컬 : 왜 아직이죠?                                    │\n");
		printf("│ 당신: 저희 오늘 처음 만났는데 저는 마음에 들어서요^^ │\n");
		printf("│ 민석이의 귀가 빨개졌다.                                │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}


void woman_ms_C4_Q7(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 6) = 4;
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 민석 : (메뉴판으로 얼굴을 가리며) 고마워ㅠㅠㅠㅠㅠ     │\n");
		printf("│ 당신:ㅋㅋㅋ왜 부끄러워해~!                           │\n");
		printf("│ 민석이는 매우 귀여웠다.                                │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 민석 : 어어..;알겠어                         │\n");
		printf("│ 당신:얼른 주문하고와~~                     │\n");
		printf("│ 민석이의 표정이 좋지않다.                    │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void woman_ms_C4_Q8(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 7) = 3;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 민석: 너 먹을줄 아는구나?                      │\n");
		printf("│ 민석이는 쿨한 그녀의 모습에 매력을 느꼈다      │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 당신:너도 조심히 먹어 민석아!                │\n");
		printf("│ 민석이는 다정한 그녀의 모습을 보았다           │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}
void woman_ms_C4_Q9(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 8) = 5;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 민석:어? 네가 내는거야? 맥주는 내가 살게!!     │\n");
		printf("│ 당신:맥주는 한강가서 사는 걸로!              │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 민석:나머지 계산해주세요                       │\n");
		printf("│ 이걸로는 뭔가 부족하다…맥주 한캔 할까?        │\n");
		printf("│ 당신:그래 한강 가서 맥주 한캔하자!           │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");


	}
}

void woman_ms_C5_Q10(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 나도 나름 괜찮았어~ 나름 괜찮아서 다행이다~ㅎㅎ    │\n");
		printf("│ 민석이의 표정이 미심쩍다.                          │\n");
		printf("└──────────────────────────┘\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 9) = 5;
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 당신:나도 정말 좋았어~! 다음에도 만나서 놀러 다니자~!│\n");
		printf("│ 민석: 그래~! 그거 정말 좋은 생각이다!                  │\n");
		printf("│ 민석이는 신이 난거같다.                                │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void woman_ms_C5_Q11(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 민석: 미안한데 진짜 가봐야 될 거 같아! 얼른 가자!│\n");
		printf("│ 당신:그래~어쩔수 없이 지금 가야겠네~           │\n");
		printf("│ 민석이의 표정이 밝지않다.                        │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 10) = 5;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 민석:그래!다음에 또 놀면되니까 얼른 가자!!     │\n");
		printf("│ 당신: 그래 얼른 집가자 부모님 걱정하시겠다!  │\n");
		printf("│ 민석이는 자신을 이해해줘서 고마워한다.         │\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");
	}
}

void woman_ms_C5_Q12(char p, person *user)
{
	if (p == 'A')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("┌─────────────────────┐\n");
		printf("│ 민석: 다행이다 ㅎㅎ 얼른 집에 가자~!     │\n");
		printf("│ 당신:얼른 데려다주고 너도 얼른가~!     │\n");
		printf("│ 민석:알았어~ 얼른가자! 춥다!             │\n");
		printf("└─────────────────────┘\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 11) = 3;
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 민석: 아니야 시간이 많이 늦어서 위험하니깐 내가 데려다 줄게  │\n");
		printf("│ 당신:그래 그럼! 고마워~                                    │\n");
		printf("└───────────────────────────────┘\n");
		system("pause");
		system("cls");

	}
}

void f_finish_ms(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 민석의 표정이 좋지 않다                      │\n");
		printf("│                                              │\n");
		printf("│ 민석 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 민석의 표정이 미심쩍어 보인다                      │\n");
		printf("│                                                    │\n");
		printf("│ 민석 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 민석의 표정이 밝다                                     │\n");
		printf("│                                                        │\n");
		printf("│ 민석 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}


void woman_jh(char p, person *user)
{


	do {

		printf("┌─────────────<챕터 1. 카톡>───────────┐\n");
		printf("│ 보람이가 친구를 소개해줬다                                   │\n");
		printf("│ 연락처를 받았는데 어떻게 해야할까?                           │\n");
		printf("│                                                              │\n");
		printf("│ A:먼저 카톡을 한다.                                          │\n");
		printf("│ B:연락을 기다린다.                                           │\n");
		printf("└───────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("┌─────────── <챕터 2. 첫 만남>───────────────┐\n");
		printf("│ 약속했던 시간이 다가오고 있다.                                       │\n");
		printf("│ 저 멀리서 지훈이의 프로필 사진과 닮은 사람이 서 있다.                │\n");
		printf("│ 지훈이는 사진보다 잘생긴 것 같다.                                    │\n");
		printf("│                                                                      │\n");
		printf("│ 당신: 안녕! 너 지훈이 맞지??                             │\n");
		printf("│ 지훈 : 어 안녕?? 혹시 많이 기다렸어                                  │\n");
		printf("│ 당신:  아냐~방금 왔어!                                             │\n");
		printf("│ A:우리 이제 뭐할까?                                                  │\n");
		printf("│ B:날씨도 좋은데 우리 산책할까?                                       │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {

		printf("┌───────────────────────────────────┐\n");
		printf("│ 정적이 흐른다. 주변에 단풍이 예쁘게 물들어 있다.                     │\n");
		printf("│                                                                      │\n");
		printf("│ A:(단풍을 멀리서 바라보며) 와~단풍이 예쁘다!                         │\n");
		printf("│ B:(단풍잎을 머리에 꼽으며) 나 예뻐?                                  │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────────────┐\n");
		printf("│ 우리는  어느 정도 어색함이 풀린 것 같다.                             │\n");
		printf("│ 우리는 걷다가 사람이 몰려있는 곳으로 향했다.                         │\n");
		printf("│                                                                      │\n");
		printf("│ 지훈 : 어? 여기 사람 많이 몰려있는데 뭐하는 거지?                    │\n");
		printf("│ A:무슨일 있는거 아니야?? 다른 길로 갈까?                             │\n");
		printf("│ B:버스킹 하는거 같은데 구경할래?                                     │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("┌─────────────<챕터3 버스킹>───────────────┐\n");
		printf("│ (노래중)                                                             │\n");
		printf("│ 지훈 : 노래 잘 부른다. 너는 무슨 노래 좋아해?                        │\n");
		printf("│                                                                      │\n");
		printf("│ A:나는 발라드 좋아해~                                                │\n");
		printf("│ B:나는 힙합을 좋아해~                                                │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);




	do {
		printf("┌───────────────────────────────────┐\n");
		printf("│ 갑자기 내 앞으로 마이크가 다가왔다                                   │\n");
		printf("│ 보컬 : 거기 두 분 분위기가 좋으시네요~ 무슨 사이세요?                │\n");
		printf("│                                                                      │\n");
		printf("│ A:(당황하며) 저희 친구에요                                           │\n");
		printf("│ B:(쑥쓰러워하며) 저희 아직 아무 사이 아니에요                        │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("┌────────────<챕터4 레스토랑>───────────────┐\n");
		printf("│ 우리는 레스토랑에 들어와 자리에 앉았다.                              │\n");
		printf("│ 직원분이 메뉴판을 주셨다.                                            │\n");
		printf("│                                                                      │\n");
		printf("│ 당신: 우리 뭐 먹을까?                                              │\n");
		printf("│ 지훈 : 나는 파스타 먹으려고 하는데 너는 스테이크 먹을래?             │\n");
		printf("│ 딩신: 그래 나 고기 좋아햄!!                                        │\n");
		printf("└───────────────────────────────────┘\n");
		system("pause");
		system("cls");

		printf("┌───────────────────────────────────┐\n");
		printf("│ 직원 : 손님 주문 도와드리겠습니다.                                   │\n");
		printf("│ 지훈 : 까르보나라 하나랑 안심스테이크 하나 주세요.                   │\n");
		printf("│ 당신은 지훈이의 주문하는 모습에 설렜다.                           │\n");
		printf("│                                                                      │\n");
		printf("│ A:지훈아 너 주문되게 잘한다~~                                        │\n");
		printf("│ B:지훈아 너 주문하는거  너무 멋있다~                                 │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("┌───────────────────────────────────┐\n");
		printf("│ 음식이 나왔다                                                        │\n");
		printf("│ 지훈 : (무심히 스테이크를 썰어준다.)                                 │\n");
		printf("│                                                                      │\n");
		printf("│ A:어 지훈아 내가 썰어도 되는데 고마워!                               │\n");
		printf("│ B:너도 조심해~                                                       │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────────────┐\n");
		printf("│ 우리는 밥을 다 먹고 계산대 앞으로 갔다.                              │\n");
		printf("│ 총가격은 32000원이 나왔다.                                           │\n");
		printf("│ 지훈: 생각보다 많이 나왔네...                                        │\n");
		printf("│                                                                      │\n");
		printf("│ A:(카드를 건네며)다 계산해주세요.                                    │\n");
		printf("│ B:하나 먼저 계산해주세요                                             │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("┌─────────────<챕터5: 한강공원>─────────────┐\n");
		printf("│ 우리는 맥주와 돗자리를 가지고 와서 자리를 잡았다.                    │\n");
		printf("│ 지훈: 오늘 하루 어땠어?                                              │\n");
		printf("│                                                                      │\n");
		printf("│ A:나름 괜찮았어!!너는 어땠어?                                        │\n");
		printf("│ B:나는 좋았어!!너는 어땠어?                                          │\n");
		printf("└───────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈: 우리 이제 집에 갈까?? 내가 이제 가봐야 돼서...                    │\n");
		printf("│                                                                                  │\n");
		printf("│ A:우리 30분만 더 있다 가면 안될까?? 경치가 너무 좋아~!                           │\n");
		printf("│ B:그래그래~ 시간이 벌써 이렇게 됐네! 얼른 가자! 나도 이제 가봐야 될 거 같아~     │\n");
		printf("└─────────────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 우리는 야경을 보면서 집을 가기 위해 걸어가고 있다.                               │\n");
		printf("│ 지훈: 아... 시간이 많이 늦었으니까 내가 너네 집까지 데려다 줄게.              │\n");
		printf("│                                                                                  │\n");
		printf("│ A:그래~ 그럼 나야 고맙지~!                                                       │\n");
		printf("│ B:아니야~ 나 혼자 가도 상관없어~                                                 │\n");
		printf("└─────────────────────────────────────────┘\n");
		scanf("%c", &p);
		woman_jh_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("┌─────────────────────────────────────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.                            │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그에 대한 내마음을 알리고 싶다.                         │\n");
	printf("│ 지훈: 오늘 정말 재미있었고, 다음에 기회 되면 그땐 홍대 가서 놀다 오자!           │\n");
	printf("│ 당신:잠깐...!지훈아~! 나 할 얘기가 있어...  ""우리연애 할래¿""                    │\n");
	printf("└─────────────────────────────────────────┘\n");
	getchar();
	system("cls");

	getchar();

}

void woman_jh_C1_Q1(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*sum = 7;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 지훈아 안녕?                                                │\n");
		printf("│ 지훈 : 어 그래 안녕~                                                             │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 공대다닌다며!그럼 과학이나 수학 잘하겠당~!                              │\n");
		printf("│ 지훈 : 어~나쁘지 않게 해.                                                        │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 오 멋있당!우리 토요일에 만나기로 한거 기억하지 ?                        │\n");
		printf("│ 지훈 : 어 6시에 만나기로 한거 맞지?                                              │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 웅웅!우리 토요일에 한강 가자!                                           │\n");
		printf("│ 지훈 : 좋아~그럼 토요일 6시에 한강공원에서 만나자.                               │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 그래~!!그럼 토요일에 봐~잘자!                                           │\n");
		printf("│ 지훈 : 그래 너도 잘자!                                                           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈이와 조금은 가까워진 것 같다.                                                │\n");
		printf("│ 지훈이는 되게 쿨하고 표현을 잘 못하는 것 같다.                                   │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 저기 너가 희성이 친구 맞아??                                         │\n");
		printf("│ 당신 : 어 안녕~!너가 희성이 친구 지훈이구나~                                   │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 어 만나서 반가워 네 얘기 많이 들었어.희성이가 너 무척 착하다고 하더라     │\n");
		printf("│ 당신 : ㅋㅋㅋ나도 마찬가지야 우리 토요일에 만나기로 한 거 기억하지 ?           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 어~우리 어디서 만나는게 좋을까 ?                                          │\n");
		printf("│ 지훈이는 표현을 잘 못하는거 같다.내가 장소를 정해야겠다!                         │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 그러면 우리 주말에 한강 가는거 어때 ? 한강 야경 보는게 정말 좋거든!     │\n");
		printf("│ 지훈 : 좋은거 같아.그럼 6시에 한강 공원 앞에서 만나자.                           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신 : 그랭~토요일에 보장!잘자!                                                │\n");
		printf("│ 우리는 어느 정도 편해진 것 같다.                                                 │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C2_Q2(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 1) = 3;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈:그러게 뭐하지? 막상 오니까 모르겠다                                         │\n");
		printf("│ 분위가가 심상치 않다.                                                            │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 당신: 그럼 산책이라도 할까?                                                    │\n");
		printf("│ 지훈 : 어~나쁘지 않아.                                                           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 :그래~나 걷는거 좋아~                                                       │\n");
		printf("│ 우리는 걷기 시작했다.                                                            │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C2_Q3(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 2) = 5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 그러게~ 머리에 단풍잎 떨어졌어. 잠깐만.                                   │\n");
		printf("│ 당신이는 지훈이의 다정한 모습에 호감을 느끼기 시작했다.                        │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : (피식 웃으며) ㅇ..어~ 귀엽다.                                             │\n");
		printf("│ 당신은 지훈이의 색다른 모습에 호감을 느끼기 시작했다.                          │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C2_Q4(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 3) = 2;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 노랫소리가 들리는데? 버스킹 하나봐 .                                      │\n");
		printf("│ 당신: 아 그런가? 그럼 구경할래?                                                │\n");
		printf("│ 우린 어색하게 버스킹하는곳으로 가기로했다.                                       │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 3) = 5;

		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 그럴까? 내가 좋아하는 노래거든.                                           │\n");
		printf("│ 당신는 버스킹하는데로 달려갔다.                                                │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C3_Q5(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 4) = 6;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 나도 발라드 좋아하는데 발라드를 들으면 뭔가 차분해지는 느낌이 들어..      │\n");
		printf("│ 우린 서로 공감이 되었다.                                                         │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : 아 그래? 난 발라드를 더 좋아해..                                          │\n");
		printf("│ 우린서로 엇갈렸다.                                                               │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C3_Q6(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 5) = 3;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 보컬 : 아.. 죄송합니다.                                                          │\n");
		printf("│ 지훈이의 표정이 좋지 않아 보인다.                                                │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 보컬 : 왜 아직이죠?.                                                             │\n");
		printf("│ 당신: 저희 오늘 처음 만났는데 저는 마음에 들어서요^^.                          │\n");
		printf("│ 지훈이가 당황해하며 귀가 빨개졌다.                                               │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C4_Q7(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 6) = 4;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : (귀가 빨개지며) ㄱ..그래? 고마워                                          │\n");
		printf("│ 지훈이는 정말 고마워하는거 같았다.                                               │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│ 지훈 : (당황해하며)ㅇ..어 고마워..                                               │\n");
		printf("│ 지훈이가 많이 부담스러워 하고있다.                                               │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C4_Q8(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 7) = 5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈이는 고마워하는 그녀의 모습에 매력을 느꼈다.                                  │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈이는 다정한 그녀의 모습을 보았다.                                             │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C4_Q9(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 8) = 5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈:어? 네가 내는거야? 맥주는 내가 살게!                                         │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│이걸로는 뭔가 부족하다…맥주 한캔 할까?                                           │\n");
		printf("│당신:그래 한강 가서 맥주 한캔하자!                                              │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C5_Q10(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 9) = 0;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│나도 나름 괜찮았어~ 나름 괜찮아서 다행이다.                                       │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│나도 정말 좋았어~ 다음에도 만나서 놀러 갈래?                                      │\n");
		printf("│당신: 그래~! 그거 정말 좋은 생각이다!                                           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");




		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C5_Q11(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 10) = 2;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈: 미안한데 진짜 가봐야 될 거 같아.                                            │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈;고마워~~다음에 또 놀면되니까 오늘은 여기까지 하자                            │\n");
		printf("│당신: 그래~! 그거 정말 좋은 생각이다!                                           │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_jh_C5_Q12(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 11) = 6;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈: 많이 늦었으니까 얼른 가자.                                                  │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("┌─────────────────────────────────────────┐\n");
		printf("│지훈: 아니야 시간이 많이 늦어서 위험하니깐 내가 데려다 줄게                       │\n");
		printf("└─────────────────────────────────────────┘\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void f_finish_jh(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 지훈이의 표정이 좋지 않다                    │\n");
		printf("│                                              │\n");
		printf("│ 지훈 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 지훈이의 표정이 미심쩍어 보인다                    │\n");
		printf("│                                                    │\n");
		printf("│ 지훈 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 지훈이의 표정이 밝다                                   │\n");
		printf("│                                                        │\n");
		printf("│ 지훈 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}
void woman_ds(char p, person *user)
{
	do {
		printf("┌────────< 챕터 1. 카톡 >───────┐\n");
		printf("│ 지환이가 친구를 소개해줬다                   │\n");
		printf("│ 연락처를 받았는데 어떻게 해야할까?           │\n");
		printf("│                                              │\n");
		printf("│ A:먼저 카톡을 한다                           │\n");
		printf("│ B:웅! 토요일에 봐!><                         │\n");
		printf("└───────────────────────┘\n");
		scanf("%c", &p);
		woman_ds_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌──────────< 챕터2. 첫 만남 >─────────┐\n");
		printf("│ 약속했던 시간이 다가오고 있다.                         │\n");
		printf("│ 저 멀리서 동석이의 프로필 사진과 닮은 사람이 서 있다   │\n");
		printf("└────────────────────────────┘\n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────┐   \n");
		printf("│ 동석이는 사진보다 잘생긴 것 같다.                    │\n");
		printf("│ 당신 : 안녕! 너 동석이 맞지??                │\n");
		printf("│ 동석 : 어 안녕?? 내가 잘생겨서 바로 보였지?ㅎㅎ      │\n");
		printf("│ 당신 :  ㅋㅋㅋㅋㅋ농담도 참!!                      │\n");
		printf("│                                                      │\n");
		printf("│ A:우리 이제 뭐할까?                                  │\n");
		printf("│ B: 날씨도 좋은데 우리 산책할까?.                     │\n");
		printf("└───────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────┐\n");
		printf("│ 정적이 흐른다. 주변에 단풍이 예쁘게 물들어 있다.     │\n");
		printf("│                                                      │\n");
		printf("│ A: (단풍을 멀리서 바라보며) 와~단풍이 예쁘다!        │\n");
		printf("│ B: (단풍잎을 머리에 꼽으며) 나 예뻐?                 │\n");
		printf("└───────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────┐\n");
		printf("│ 우리는 어색함이 풀린 것 같다.                        │\n");
		printf("│ 우리는 걷다가 사람이 몰려있는 곳으로 향했다.         │\n");
		printf("│ 동석 : 어? 저기 사람들이 많이 있는데 무슨 일이지?    │\n");
		printf("│                                                      │\n");
		printf("│ A: 무슨일 있는거 아니야?? 다른 길로 갈까?            │\n");
		printf("│ B: 버스킹 하나봐~ 구경할까?                          │\n");
		printf("└───────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌─────────<챕터3 버스킹>────────┐\n");
		printf("│ (노래중)                                       │\n");
		printf("│ 동석 : 노래 잘한다~ 너는 무슨 노래 좋아해?     │\n");
		printf("│                                                │\n");
		printf("│ A:나는 발라드 좋아해~                          │\n");
		printf("│ B:나는 힙합을 좋아해~                          │\n");
		printf("└────────────────────────┘\n");
		scanf("%c", &p);
		woman_ds_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────┐   \n");
		printf("│ 갑자기 내 앞으로 마이크가 다가왔다                   │\n");
		printf("│ 보컬 : 거기 두 분 분위기가 좋으시네요~ 무슨 사이세요?│\n");
		printf("│                                                      │\n");
		printf("│ A:(당황하며) 저희 친구에요                           │\n");
		printf("│ B:(쑥쓰러워하며) 저희 아직 아무사이 아니에요~        │\n");
		printf("└───────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌──────────── <챕터4: 레스토랑>─────────┐\n");
		printf("│ 버스킹이 끝나고 우리는 밥을 먹기로 했다.                   │\n");
		printf("│ 우리는 레스토랑에 들어와 자리에 앉았다.                    │\n");
		printf("│ 직원분이 메뉴판을 주셨다.                                  │\n");
		printf("│ 당신 : 우리 뭐 먹을까?                                   │\n");
		printf("└──────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌──────────────────────────────────┐   \n");
		printf("│ 동석 : 저기요~웨이터 여기 늘 먹던걸로 주세요!                      │\n");
		printf("│ 직원 : 손님 오늘 처음 뵙는거 같은데 주문은 앞에서 도와 드리겠습니다│\n");
		printf("│ 동석 : 네..^^ 죄송합니다...ㅎ                                      │\n");
		printf("│ 당신 이는 동석이의 모습이 너무 귀여웠다                          │\n");
		printf("│                                                                    │\n");
		printf("│ A:괜찮아 동석아 귀여웠어 내가 주문하고 올게~~                      │\n");
		printf("│ B: 앜ㅋㅋㅋㅋ뭐야 그게 얼른 앞에 가서 주문하고 와                  │\n");
		printf("└──────────────────────────────────┘ \n");
		system("pause");
		scanf("%c", &p);
		woman_ds_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────┐\n");
		printf("│ 음식이 나왔다                  │\n");
		printf("│ 동석 : 조개껍질 조심해서 먹어~ │\n");
		printf("│                                │\n");
		printf("│ A:동석아 조개 먹어 봐바~!      │\n");
		printf("│ B: 너도 조심해~                │\n");
		printf("└────────────────┘ \n");

		scanf("%c", &p);
		woman_ds_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("┌────────────────────┐   \n");
		printf("│ 우리는 밥을 다 먹고 계산대 앞으로 갔다.│\n");
		printf("│ 총가격은 32000원이 나왔다.             │\n");
		printf("│ 동석: 생각보다 많이 나왔네….          │\n");
		printf("│                                        │\n");
		printf("│ A:(카드를 건네며)다 계산해주세요       │\n");
		printf("│ B: 하나 먼저 계산해주세요.             │\n");
		printf("└────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────<챕터5:한강공원>───────────┐\n");
		printf("│ 우리는 맥주와 돗자리를 가지고 와서 자리를 잡았다.            │\n");
		printf("│ 동석:오늘 하루 어땠어?                                       │\n");
		printf("│                                                              │\n");
		printf("│ A:나름 괜찮았어!!너는 어땠어?                                │\n");
		printf("│ B: 나는 좋았어!!너는 어땠어?                                 │\n");
		printf("└───────────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌───────────────────────────────────────┐   \n");
		printf("│ 동석:  우리 이제 집에 갈까?? 내가 이제 가봐야 돼서…                 │\n");
		printf("│                                                                              │\n");
		printf("│ A:우리 30분만 더 있다 가면 안될까?? 경치가 너무 좋아~!                       │\n");
		printf("│ B: 그래그래~ 시간이 벌써 이렇게 됐네! 얼른 가자! 나도 이제 가봐야 될 거 같아~│\n");
		printf("└───────────────────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("┌────────────────────────────────────────┐   \n");
		printf("│ 우리는 야경을 보면서 집을 가기 위해 걸어가고 있다.                             │\n");
		printf("│ 동석:아... 시간이 많이 늦었으니까 내가 너네 집까지 보디가드 해줄게 괜찮지? │\n");
		printf("│                                                                                │\n");
		printf("│ A:그래~ 그럼 나야 고맙지~!                                                     │\n");
		printf("│ B: 아니야~ 나 혼자 가도 상관없어~                                              │\n");
		printf("└────────────────────────────────────────┘ \n");
		scanf("%c", &p);
		woman_ds_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("┌──────────────── <챕터6  우리 집 앞>───────────┐\n");
	printf("│ 우리 집 앞에 다다르고 헤어질 시간이 얼마 남지 않았다.                    │\n");
	printf("│ 꺼져있던 가로등이 켜지고 그에 대한 내 마음을 알리고 싶다.                │\n");
	printf("│ 동석: 오늘 정말 꿀잼이었고, 다음에 기회가 되면 그땐 홍대 가서 놀다 오자! │\n");
	printf("│ 당신 : 잠깐....!나 할 얘기가 있어.“우리 연애 할래¿”                 │\n");
	printf("└─────────────────────────────────────┘ \n");
}

void woman_ds_C1_Q1(char p, person *user)
{
	switch (p)
	{
	case'A':
		*sum = 7;
		system("cls");
		printf("┌────────────────────────┐   \n");
		printf("│ 당신 : 동석아 안녕?                             │\n");
		printf("│ 동석 : 안녕!ㅋㅋ 만나서 방가워!                │\n");
		printf("└────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────┐   \n");
		printf("│ 당신 : 너는 체대라고 들었는데 학교생활  어때?        │\n");
		printf("│ 동석 : 다닐만한데 수업 들을 때 마다 잠 오더라ㅋㅋ      │\n");
		printf("└────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌───────────────────────────────┐\n");
		printf("│ 당신 : ㅋㅋ저녁에 일찍 자야지~! 근데 우리 언제 한번 만날까?│\n");
		printf("│ 동석 : 맘 같아선 지금 만나자고 하고 싶은데?ㅎㅎ              │\n");
		printf("└───────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 당신 : ㅋㅋㅋ나 주말에는 프리한데 토요일에 한강 가자!│\n");
		printf("│ 동석 : 오 좋다좋다~! 나도 한강 가보고 싶었어!          │\n");
		printf("└────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌────────────────────────┐   \n");
		printf("│ 당신: 그래ㅋㅋ 그럼 우리 토요일에 만나자!!!  │\n");
		printf("│ 동석 : 웅! 토요일에 봐!><.                     │\n");
		printf("└────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 동석이와 조금은 가까워진 것 같다.                │\n");
		printf("│ 동석이에 대해 조금은 알게 된 것 같다!            │\n");
		printf("└─────────────────────────┘ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("┌──────────────────────────┐\n");
		printf("│ 동석: 안녕 혹시 지환이 친구  맞아??            │\n");
		printf("│ 당신: 어 안녕~! 너가 지환이 친구 동석이구나~     │\n");
		printf("└──────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌────────────────────────────┐\n");
		printf("│ 동석 : 맞아ㅋㅋ 너 예쁘다고 들었는데 사실이었구나?^^   │\n");
		printf("│ 당신 : ㅋㅋㅋ고마워~! 우리 언제 만나는게 좋을까?     │\n");
		printf("└────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌──────────────────────┐   \n");
		printf("│ 동석: 음…지금 만날까?!ㅎㅎ                │\n");
		printf("│ 동석이는 유머러스한 것 같다.               │\n");
		printf("└──────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌─────────────────────────────────────────┐   \n");
		printf("│당신 : ㅋㅋㅋ그러면 우리 주말에 한강 가는 거 어때? 나 토요일엔 시간이 괜찮거든! │\n");
		printf("│동석 : 그래 그래!! 그럼 토요일에 보자!                                            │\n");
		printf("└─────────────────────────────────────────┘ \n");
		system("pause");
		system("cls");
		printf("┌──────────────────────┐   \n");
		printf("│ 당신 : 그래~토요일에 절대 늦지마!!       │\n");
		printf("│ 우리는 어느정도 가까워진 것 같다.          │\n");
		printf("└──────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}

}
void woman_ds_C2_Q2(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 1) = 3;
		system("cls");
		printf("┌───────────────────────┐   \n");
		printf("│ 동석:그러게 뭐하지? 막상 오니까 모르겠네     │\n");
		printf("│ 당신 : 그럼 산책이라도 할까?               │\n");
		printf("└───────────────────────┘ \n");

		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("┌──────────────────┐   \n");
		printf("│ 동석 : 좋아 나 걷는거 좋아해       │\n");
		printf("│ 당신: 그래~그럼 우리 좀 걷자!    │\n");
		printf("└──────────────────┘ \n");
		system("pause");
		system("cls");;
		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C2_Q3(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 2) = 5;
		system("cls");
		printf("┌──────────────────────────────┐   \n");
		printf("│ 동석 : 그러게~ 어! 머리에 단풍잎이 떨어졌어 가만히 있어봐~ │\n");
		printf("│ 당신이는 동석이의 다정한 모습에 호감을 느끼기 시작했다.  │\n");
		printf("└──────────────────────────────┘ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("┌──────────────────────────────┐   \n");
		printf("│ 당신:(단풍잎을 머리에 꼽으며) 나 예뻐?                   │\n");
		printf("│ 동석 : (단풍잎을 머리에 꼽으며)내가 더 예쁘지?             │\n");
		printf("│ 당신은 동석이의 유머스러운 모습에 호감을 느끼기 시작했다.│\n");
		printf("└──────────────────────────────┘ \n");
		system("pause");
		system("cls");
		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C2_Q4(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 3) = 2;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 동석 : 어? 노랫소리가 들리는데? 버스킹 하나봐│\n");
		printf("│ 당신: 아 그런가? 그럼 구경할래?           │\n");
		printf("└───────────────────────┘\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 3) = 5;
		system("cls");
		printf("┌─────────────────────────┐\n");
		printf("│ 동석 : 나 버스킹 좋아하는데! 우리 같이 보러가자! │\n");
		printf("└─────────────────────────┘\n");
		system("pause");
		system("cls");

		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C3_Q5(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 4) = 6;
		system("cls");
		printf("┌─────────────────────────────────────┐   \n");
		printf("│ 동석 : 오 나랑 취향이 똑같네!내가 감성이 풍부해서 그런지 발라드가 좋더라!│\n");
		printf("└─────────────────────────────────────┘ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("┌─────────────────────────┐   \n");
		printf("│ 동석 : 어쩐지 너 스웩 있더라! 나는 발라드 좋아해~│\n");
		printf("└─────────────────────────┘ \n");
		system("pause");
		system("cls");


		break;

	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C3_Q6(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 5) = 3;
		system("cls");
		printf("┌───────────────┐\n");
		printf("│ 보컬 : 아.. 죄송합니다       │\n");
		printf("│ 동석이의 표정이 좋지않다     │\n");
		printf("└───────────────┘ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("┌─────────────────────────────┐   \n");
		printf("│ 보컬 : 왜 아직이죠?                                      │\n");
		printf("│ 당신 : 저희 오늘 처음 만났는데 저는 마음에 들어서요^^  │\n");
		printf("│ 동석이는 크게 웃으며 귀가 빨개졌다.                      │\n");
		printf("└─────────────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C4_Q7(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 6) = 4;
		system("cls");
		printf("┌──────────────────────────┐   \n");
		printf("│ 동석 : 어..어! 그래 내가 이런데는 처음이어서ㅎㅎㅎ │\n");
		printf("└──────────────────────────┘ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("┌───────────────────────┐\n");
		printf("│ 동석 : 그래야겠다...ㅎㅎ얼른 갔다 올게~      │\n");
		printf("│ 동석이의 표정이 좋지 않다.                   │\n");
		printf("└───────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C4_Q8(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 7) = 5;
		system("cls");
		printf("┌──────────────────────────┐   \n");
		printf("│ 동석이는 잘 챙겨주는 그녀의 모습에 매력을 느꼈다.  │\n");
		printf("└──────────────────────────┘ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("┌───────────────────────┐ \n");
		printf("│ 동석이는 다정한 그녀의 모습을 보았다.        │\n");
		printf("└───────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;
	}
}

void woman_ds_C4_Q9(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 8) = 5;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 동석:어? 네가 사는거야? 그럼 맥주는 내가 살게!!│\n");
		printf("└────────────────────────┘\n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("┌────────────────────────┐\n");
		printf("│ 동석:나머지 계산해주세요                       │\n");
		printf("│ 동석: 이걸로는 뭔가 부족하네…맥주 한캔 할까?  │\n");
		printf("│ 당신:그래 한강 가서 맥주 한캔하자!           │\n");
		printf("└────────────────────────┘ \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}


void woman_ds_C5_Q10(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 9) = 0;
		system("cls");
		printf("┌──────────────────┐   \n");
		printf("│ 동석:나도 나름 괜찮았지~!          │\n");
		printf("│ 갑자기 분위가 이상해졌다.          │\n");
		printf("└──────────────────┘ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("┌─────────────────────────────┐   \n");
		printf("│ 동석:나도 정말 좋았어~! 다음에도 만나서 놀러 다니자~!    │\n");
		printf("│ 당신: 그래~! 그거 정말 굿 초이스!?                       │\n");
		printf("└─────────────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C5_Q11(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 10) = 2;
		system("cls");
		printf("┌────────────────────────────┐   \n");
		printf("│ 동석: 미안한데 나 진짜 가봐야 될 거 같아! 얼른 가자!   │\n");
		printf("│ 아쉬운 마음을 뒤로하고 우린 출발했다.                  │\n");
		printf("└────────────────────────────┘ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("┌──────────────────────┐   \n");
		printf("│ 그래그래~ 시간이 벌써 이렇게 됐네!         │\n");
		printf("│ 얼른 가자! 나도 이제 가봐야 될 거 같아~    │\n");
		printf("└──────────────────────┘ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void woman_ds_C5_Q12(char p, person *user)
{
	switch (p)
	{
	case 'A':
		*(sum + 11) = 6;
		system("cls");
		printf("┌─────────────────────────┐   \n");
		printf("│ 동석: 그래! 얼른 집에 가즈아~!                   │\n");
		printf("│ 아쉬운 마음을 뒤로하고 우린 출발했다.            │\n");
		printf("└─────────────────────────┘ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("┌─────────────────────────┐ \n");
		printf("│ 동석: 아니야 안돼~                               │\n");
		printf("│ 시간이 많이 늦어서 위험하니깐 내가 데려다 줄게!  │\n");
		printf("│ 당신: 고마워~                                  │\n");
		printf("└─────────────────────────┘ \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("┌─────────────┐\n");
		printf("│ 잘못 입력하셨습니다.     │\n");
		printf("│ 다시 선택해주세요.       │\n");
		printf("└─────────────┘\n");
		break;

	}
}

void f_finish_ds(int total)
{
	if (total <= 41)
	{
		printf("┌───────────────────────┐\n");
		printf("│ 동석의 표정이 좋지 않다                      │\n");
		printf("│                                              │\n");
		printf("│ 동석 : 우리 서로 잘 안맞는거 같아            │\n");
		printf("│        그래서 ... 음... 우리는 아닌거 같아   │\n");
		printf("│        정말 미안                             │\n");
		printf("│        안녕 그럼 잘지내                      │\n");
		printf("└───────────────────────┘\n");

		printf("당신의 연애실력은 충격적입니다\n");
		printf("이정도면 모태솔로 아니신가요?\n");

	}
	else if (total <= 57)
	{
		printf("┌──────────────────────────┐\n");
		printf("│ 동석의 표정이 미심쩍어 보인다                      │\n");
		printf("│                                                    │\n");
		printf("│ 동석 : 오늘 괜찮기는 했어                          │\n");
		printf("│        근데 서로가 만나기엔 조금 부족한거 같아     │\n");
		printf("│        우리 그냥 친구로 지내자                     │\n");
		printf("│        안녕 그럼 잘지내                            │\n");
		printf("└──────────────────────────┘\n");

		printf("조금 아쉬우시네요\n");
		printf("조금 더 분발하시면 솔로 탈출!!\n");
	}
	else if (total <= 73)
	{
		printf("┌────────────────────────────┐\n");
		printf("│ 동석의 표정이 밝다                                     │\n");
		printf("│                                                        │\n");
		printf("│ 동석 : 내가 먼저 말하려고 했는데...                    │\n");
		printf("│        너가 먼저 말했네? 그래! 우리 연애하자           │\n");
		printf("│        난 오늘 너의 행동 하나하나 다 마음에 들더라     │\n");
		printf("│        나를 좋아해줘서 고마워 ♥                       │\n");
		printf("└────────────────────────────┘\n");

		printf("완벽하시군요!!\n");
		printf("이젠 실전입니다 화이팅!!\n");
	}
}