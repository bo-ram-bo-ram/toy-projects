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

void f_screen_first()   //蟾晦�飛� л熱
{
	system("cls");
	struct owner inform[] = { {"1862007", "梯爾塋"}, {"1860016", "梯�鬄�"}, {"1860054", "�笠鶲�"} };
	struct owner *p = inform;
	int size = sizeof(inform) / sizeof(inform[0]);

	puts("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	puts("弛    ?                            Ⅵ                                       弛");
	puts("弛                  Ⅵ                     ?         Ⅵ            ?        弛");
	puts("弛                                                                          弛");
	puts("弛      Ⅵ                                                                  弛");
	puts("弛                                 Ⅵ勿       匹                  Ⅵ        弛");
	puts("弛                       Ⅵ   葬    中  Ⅵ分  Ⅵ凶  楚 ０                   弛");
	puts("弛 Ⅵ        ?           厄                   予                            弛");
	puts("弛                                                           Ⅵ         ?   弛");
	puts("弛                                                                          弛");
	puts("弛         Ⅵ                        ?                                      弛");
	puts("弛             ?        Ⅵ                                                  弛");
	puts("弛                           ?               Ⅵ                       Ⅵ    弛");
	puts("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");

	for (int i = 0; i < size; i++)
	{
		printf("                                                  %s      %s               \n", (p + i)->number, (p + i)->name);
	}
	printf("             [棻擠�飛橉虞� 剩橫陛溥賊 縛攪酈蒂 援腦撮蹂]\n\n");
	printf("                        - PRESS ENTER KEY- \n");

	_getch();
}
void set_first(person *user)
{
	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐曖 翱擁 棟溘擊 纔蝶おп爾撮蹂!                             弛\n");
		printf("弛 '辦葬 翱擁 й楚０'縑 螃褐勘 �紊腎桭炴�                         弛\n");
		printf("弛 檜 啪歜曖 �蛾衋抻酈▼�?                                        弛\n");
		printf("弛 A:嬴棲蹂     B:啻!                                             弛\n");
		printf("弛 ≦羅 餌辨衛 �蛾灠㊣埬� п撿м棲棻≦                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &a);
		if (a != 65 && a != 66)
		{
			system("cls");
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (a != 65 && a != 66);
	member(a);
	getchar();
	system("cls");


	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 寰喟ж撮蹂                                                 弛\n");
		printf("弛 渡褐曖 撩滌擎 鼠歙檣陛蹂?                                弛\n");
		printf("弛 A:陴濠縑蹂     B:罹濠縑蹂                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &gender);

		if (gender != 65 && gender != 66)
		{
			system("cls");
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (gender != 65 && gender != 66);

	switch (gender)
	{
	case 'A':
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ1. 夢團薑                                              弛\n");
		printf("弛 瞪奢 : 薑爾鱔褐婁                                        弛\n");
		printf("弛 濛擎酈縑 敝罹遴 檜嘐雖                                   弛\n");
		printf("弛 澀 僱堅 剪瞰擊 跤ж朝 撩問                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ2. 鬼嘐楚                                              弛\n");
		printf("弛 瞪奢 :嘐獎掖幫婁                                         弛\n");
		printf("弛 僅睡楝雖朝 離紫喪 檜嘐雖                                 弛\n");
		printf("弛 僅睡楝雖釭 ル⑷檜 憮罐棻                                 弛\n");
		printf("弛 蜆擎 橾縑 譆摹擊 棻ж朝 撩問                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ3, 梯紫翱                                              弛\n");
		printf("弛  瞪奢 : 措橫掖幫婁                                       弛\n");
		printf("弛 獎濠葬蒂 謠嬴ж貊 餌離錳歜                               弛\n");
		printf("弛 �偎萩炾� 籐и 撩問                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		break;
	}

	case 'B':
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ4. 譆團戮                                              弛\n");
		printf("弛  瞪奢 :嶸嬴掖幫婁                                        弛\n");
		printf("弛  擁掖陛 號擎 敝罹遴 檜嘐雖                               弛\n");
		printf("弛  葬萄蒂 澀 跤и棻                                        弛\n");
		printf("弛  澀 穫啖輿朝 撩問                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ5. 梯雖��                                              弛\n");
		printf("弛 瞪奢 :薑爾鱔褐婁                                         弛\n");
		printf("弛 鼠褕ж釭 澀 穫啖遽棻                                     弛\n");
		printf("弛 睡莖楝遺檜 號堅 斜楛 鼻�窕� 褓橫и棻                     弛\n");
		printf("弛 ル⑷檜 憮罐棻                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 Ⅱ6, 葆翕戮                                              弛\n");
		printf("弛 瞪奢 :蝶ん隴勒鬼婦葬з婁                                 弛\n");
		printf("弛 蜓擊 澀ж貊 嶸該楝蝶и 撩問                              弛\n");
		printf("弛 罹濠檣 耀掘陛 號戲貊 旎寞 餌嫌縑 緒霞棻                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}
	break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;


	}

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐曖 鏃щ擎 援掘檣陛蹂?                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%d ", &character);
		system("cls");

		if (character != 65 && character != 66)
		{
			system("cls");
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("≠≧≠≧≠≧�蛾灠㊣埬� 衛濛м棲棻≠≧≠≧≠≧\n");
		Sign_up(&user);
		Login(&user);
		break;

	case 'B':
		system("cls");
		printf("≠≧≠≧≠≧煎斜檣擊 衛濛м棲棻≠≧≠≧≠≧\n");
		Login(&user);
		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;
	}
	return 0;

}

void Sign_up(person *user)
{
	int sum = 0;
	printf("撩橈檜 檜葷虜 殮溘п輿撮蹂\n");
	printf("檜葷 : \n");
	scanf("%s", user->name);



	printf("\n");
	printf("檜詭橾 輿模 : ");
	scanf("%s", user->email);

	printf("\n");
	printf("ID : ");
	scanf("%s", user->ID);


	printf("\n");
	printf("password : ");
	scanf("%s", user->password);

	printf("\n");
	printf("�挫怹� 嬪п 棻衛 и廓 殮溘 п輿億蹂... \n");
	printf("password : ");
	scanf("%s", user->again_password);

	while (strcmp(user->password, user->again_password) != 0)
	{
		printf("password陛 憮煎 棻落棲棻. 棻衛 и廓 殮溘 п輿撮蹂 \n");
		scanf("%s", user->again_password);
	}

	file(user);

	printf("�蛾灠㊣埽Ф抻懂炴�.\n");
	system("pause");
	system("cls");
	printf("煎斜檣擊 霞чп 輿撮蹂.\n\n");


}


void Login(person *user)
{
	char buf[100];
	int check1 = 0;
	int check2 = 0;

	FILE *f;

	f = fopen("member.txt", "r");
	printf("ID蒂 殮溘 : ");
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
		printf("綠塵廓�� 殮溘 : ");
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
		printf("�紊腎桭炴� %s 椒!\n", user->name);
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
		printf("だ橾檜 翮葬雖 彊蝗棲棻");
		exit(1);
	}


	fprintf(f, "檜葷 : %s 檜詭橾 : %s ID : %s password : %s \n", user->name, user->email, user->ID, user->password);
	fprintf(f, "\r\n");
	fclose(f);
}

void man_mj(char p, person *user)
{

	do {
		printf("忙式式式式式式式式式式式< 矇攪1. 羅 虜陴 >式式式式式式式式式式式式忖\n");
		printf("弛 雖骨輿檣婁 毯擎 罹濠陛 輿滲擊 憮撩剪萼棻.                      弛\n");
		printf("弛 渡褐:�公� 雖骨 檠橫幗葬樟轄??                                弛\n");
		printf("弛團薑: 啻!蜃嬴蹂! 雖骨 給溥輿衛啊橫蹂?                           弛\n");
		printf("弛 A:雖骨 瓊嬴萄溜戲棲械 嫣 и郭 餌輿撮蹂!                        弛\n");
		printf("弛 B:雖骨擊 斜傖 給溥遽棻.                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C1_Q1(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式式< 矇攪 2. 餵  寰 >式式式式式式式式式式式忖\n");
		printf("弛 葆蘋螃驚擊 菟橫陛爾棲 雖骨輿檣曖 翱塊籀陛 飪棻.                弛\n");
		printf("弛                                                                弛\n");
		printf("弛 A:試盪 翱塊擊 и棻.                                            弛\n");
		printf("弛 B: 翱塊 螃晦蒂 晦棻萼棻.                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式< 矇攪3. 偉楝葬嬴 寥�俯� 擅>式式式式式式式式忖\n");
		printf("弛 團薑: 賸歎п蹂!號檜 晦棻葬樟橫蹂...? 棵橫憮 賸歎п蹂!          弛\n");
		printf("弛                                                                弛\n");
		printf("弛  A:嬴棲縑蹂~ 橡艇 陛蹂~!                                       弛\n");
		printf("弛  B:(煎瑪蜓癱)惘雛嬴蹂. 嗨橫螃替塭 號檜 ��萄樟轄?               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C3_Q3(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:盪喔擎 凳 萄衛堅 談戲撮蹂??               弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:薯陛 蛻餵 嬴朝等陛 氈朝等 橫集撮蹂?          弛\n");
		printf("弛 B:盪朝 棻 惘雛擎等... 斜薹擎蹂?                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式< 矇攪4. 衝 渡 >式式式式式式式式式式忖\n");
		printf("弛 碟嬪晦陛 傘鼠 瞳瞳ж棻. 鼠蝦蜓檜塭紫 п瑭撿啊棻!       弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:罹晦 堅煎馨陛 堅煎馨 蛻氈渠~!                        弛\n");
		printf("弛 B:�公� 凱 з婁陛 凳撿?                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:詭景陛 號擎等 凱 凳詳擊楚..??             弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:陪 嬴鼠剪釭 棻 惘雛嬴~                       弛\n");
		printf("弛 B:罹晦朝 絲梱蝶陛  蛻氈橫憮,                   弛\n");
		printf("弛  陪 絲陛蝶 衛鑒勒等 傘紫 絲梱蝶詳擊楚?         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 絲梱蝶蒂 輿僥ц棻. 薑瞳檜�撣打�. 橫飩啪 п撿й梱?     弛\n");
		printf("弛                                                              弛\n");
		printf("弛 A:傘鼠 嗤旎橈雖虜 傘 熱з澀п??                              弛\n");
		printf("弛  頂陛 熱з擎 澀 跤ж剪萇冗冗                                 弛\n");
		printf("弛 B:擠衝檜 傘鼠 螃楚 勘葬朝匙 偽棻...                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬陛 衛鑑 擠衝檜 釭諮棻.                             弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:(臏臏)諦 蛻氈棻~  傘紫 橡艇 詳橫瑭~                  弛\n");
		printf("弛  嬴 斬等 曄檜 睡褶й剪 偽啻...                         弛\n");
		printf("弛 B:頂陛 絲梱蝶 賭橫還啪!                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 衝餌蒂 棻ж堅 夤戲煎 釭諮棻.                  弛\n");
		printf("弛 團薑:盪晦 辦葬 檜薯 橫蛤陞梱?                        弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A:釭 艙�倖敵� 氈朝等 艙�首虞� 陞楚?                  弛\n");
		printf("弛 B:堅晝衛啗塭堅 億煎遴 啪歜 釭諮朝等 ж楝陞楚?        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		scanf("%c", &p);
		man_mj_C4_Q9(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式< 矇攪 5. 艙�降� >式式式式式式式式式式忖\n");
		printf("弛 團薑:頂陛 ル餌螢纔棲械 罹晦憮 濡械 晦棻萵楚?               弛\n");
		printf("弛                                                            弛\n");
		printf("弛 A:餌褒 傘 �倣敶� 鬲擊陽 頂陛 蕨衙ц橫~!                    弛\n");
		printf("弛 B:憲啊橫~褻褕�� 鬲棻諦!陪 罹晦 導嬴 氈擊啪~!               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 艙�降� 衛濛腎歷堅, 艙�飛� 爾朝 紫醞 團薑檜陛 �倣敶Ч� 除棻堅ц棻.      弛\n");
		printf("弛                                                                        弛\n");
		printf("弛 A:(模堆模堆)釭紫 �倣敶� 陛溥湍 霤檣等 偽檜 陛濠.                       弛\n");
		printf("弛 B:(棻葬蒂 蝶戴 螢葬貊)橡艇 雖釭陛 寰爾罹                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C5_Q11(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑: 頂陛 鱔旎衛除 陽僥縑 檜薯 陛瑭撿 腆剪 偽嬴.          弛\n");
		printf("弛                                                            弛\n");
		printf("弛 A:釭 覬氈戲賊 擒樓檜 氈朝等 澀陛~                          弛\n");
		printf("弛 B:衛除檜 號檜 棵歷戲棲梱 頂陛 餵梱雖 等溥棻 還啪!          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mj_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);


	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.            弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜喪縑 渠и 頂葆擠擊 憲葬堅 談棻.       弛\n");
	printf("弛 團薑: 螃棺 薑蜓 營嘐氈歷橫!                                      弛\n");
	printf("弛       棻擠縑 晦�� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠!                 弛\n");
	printf("弛 渡褐:濡械...! 釭 й 樽晦陛 氈橫...""辦葬翱擁 й楚０""              弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	getchar();
	system("cls");



}
void man_mj_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:嬴 啻啻~! 薯陛 雖旎擎 衛除檜 橈橫憮 翱塊輿衛賊 嫣 餌萄萵眷蹂~ 弛\n");
		printf("弛 渡褐:啻 憲啊橫蹂~                                                弛 \n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:盪晦蹂 雖骨 瓊嬴輿樟朝等 馬餌曖 曖嘐煎 嫣檜塭紫 餌萄萵啪蹂!   弛\n");
		printf("弛 渡褐:薑蜓蹂?斜歲 盪撿 堅蛾轄^^                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜歲 翱塊 萄萵啪蹂!                                           弛\n");
		printf("弛 渡褐:啻~ 寰喟�� 陛撮蹂~!                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:寰喟ж撮蹂~ 螃�醴� 疑湍 雖骨 瓊嬴萄溜湍 餌塋檜縑蹂!         弛\n");
		printf("弛 團薑:嬴! 寰喟ж撮蹂! 嬴械 薑蜓 馬餌ц橫蹂~ �公� 樹薯 衛除 腎撮蹂?  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:檜廓輿 饜蹂橾 橫陽蹂?                                           弛\n");
		printf("弛 團薑:啻 謠嬴蹂~!斜歲 螃�� 6衛縑 菩骯翕 偉楝葬嬴 寥�俯� 擅縑憮 虜釭蹂!  弛\n");
		printf("弛 渡褐:啻 斜歲 斜陽瘋蹂~ 輿鼠撮蹂~~                                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑: 盪晦 嬴梱 雖骨 瓊嬴輿褐碟 蜃嬴蹂?                            弛\n");
		printf("弛 渡褐:啻 蜃嬴蹂~ 嬴梱 嫣 餌輿褐棻朝 擒樓 樹薯煎 й梱蹂?           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑: 擠...檜廓輿 饜蹂橾 螃��7衛縑                         弛\n");
		printf("弛 菩骯翕 偉楝葬嬴 寥�俯� 擅縑憮 虜釭朝剪 橫陽蹂?             弛\n");
		printf("弛 渡褐:啻 謠嬴蹂~ 斜歲 饜蹂橾縑 瘋蹂!                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:薯陛 號檜 晦棻葬啪 и剪 偽嬴蹂! 賸歎п蹂!             弛\n");
		printf("弛 渡褐:嬴揣 惘雛嬴蹂~盪紫 寞旎 諮橫蹂.                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:號檜 晦棻葬啪 п憮 賸歎п蹂壬壬                         弛\n");
		printf("弛 渡褐:縑檜 惘雛嬴蹂! 嗨棻陛 剩橫雖霞 彊戲樟轄?              弛\n");
		printf("弛 團薑:啻冗冗 寰 剩橫螺橫蹂!                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑: 啻! 盪 絲梱蝶 腎啪 謠嬴п蹂!!                                弛\n");
		printf("弛 渡褐:斜歲 絲梱蝶 詳戲楝 陛蹂~ 盪 擠猿 鼠猿瓔ア 氈橫蹂!           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:螃! 腎啪 憲嗚ж衛啻蹂!!                                       弛\n");
		printf("弛 渡褐:жжж~橡艇 盪喔 詳戲楝 陛轄!                               弛\n");
		printf("弛 辦葬朝 衝渡戲煎 陛賊憮 釭檜陛 翕骨檜塢 餌褒擊 憲懊棻.              弛\n");
		printf("弛 斜楚憮 辦萼 蜓擊 らж啪 ж晦煎 ц棻.                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:嬴...斜歲 絲梱蝶 詳戲楝陛蹂~                                  弛\n");
		printf("弛 渡褐:啻 謠嬴蹂~ 盪 絲梱蝶 謠嬴п蹂~                              弛\n");
		printf("弛 辦葬朝 衝渡戲煎 陛賊憮 釭檜陛 翕骨檜塢 餌褒擊 憲懊棻.              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:嬴..жж 營塹棻~嬴營偃斜 謠嬴ж釭爾啻...?                     弛\n");
		printf("弛 渡褐:橫..冗 嬴營偃斜 翱蝗醞檣等 渦 翱蝗п撿啊啻...^^             弛\n");
		printf("弛 嬴營偃斜蒂 ж棻爾棲 團薑檜陛 滌煎 謠嬴ж雖 彊懊棻.                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 4) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:釭朝 薑爾鱔褐婁撿!                                            弛\n");
		printf("弛 渡褐:螃~ з掖儅�偯� й虜п?                                      弛\n");
		printf("弛 錠冗冗 斜楚紫 陛莠擎 Я堆ж堅 ��菟陽紫 氈橫!                       弛\n");
		printf("弛 辦葬朝 憮煎 з婁諦 婦褕餌蒂 僖棻爾棲 號擎 渠�飛� 釭斑棻.           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:擠..凳詳雖..斜傖 辦葬 萃棻 絲梱蝶詳濠~                        弛\n");
		printf("弛 渡褐:斜楝濠~ 釭紫 絲梱蝶陛 詳堅 談渦塭~                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楝濠! 頂陛 摹鷗ж朝勘 澀 跤п憮 樵羶 堅團ж剪萇冗冗         弛\n");
		printf("弛 渡褐:釭紫 斜楊朝等六六釭 圖堅 絲梱蝶 詳橫瑭!                     弛\n");
		printf("弛 團薑:錠冗冗 蛻餵檜塭 ц戲棲械 蛻氈擊剪偽嬴~                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:六六六骨濠晦? 釭 熱з 橫替 薑紫 ж朝等,                 弛\n");
		printf("弛 棻擠縑 頂陛 熱з 覬 憲溥還梱?                                弛\n");
		printf("弛 渡褐:螃 薑蜓?? 斜歲 釭撿 堅蛾雖^^!                         弛\n");
		printf("弛 奢睡縑 渠и 渠�飛� ж棻爾棲 團薑檜朝 闌剪錶 爾艘棻.          弛\n");
		printf("弛 闌剪錶 ж朝 賅蝗擊爾棲 釭紫 謠懊棻.                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楝啪...冗 寡 號檜 堅Щ棻.                                   弛\n");
		printf("弛 渡褐:寡 號檜 堅Щ掘釭. 橡艇 釭諦撿й蘸等..                       弛\n");
		printf("弛 團薑檜朝 僧僧�� �瑒踰钀� ж晦 衛濛ц棻. 頂陛 澀跤 и勘梱??         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:嬴 斜楚...? 睡褶ж賊 頂疏 覬 陛螳陛憮 詳橫~                   弛\n");
		printf("弛 渡褐:嬴 霞瞼? 斜歲 餌曄ж雖彊堅 蛻氈啪 詳擊啪~                   弛\n");
		printf("弛 團薑檜朝 ル薑檜 賤 謠雖 彊懊棻.                                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:嬴 薑蜓? 堅葆錶! 傘 霤 濠鼻и剪 偽嬴!                         弛\n");
		printf("弛 渡褐:濠鼻ж曹~ 寡堅Ы蘸等 號檜 詳橫!                             弛\n");
		printf("弛 團薑: 堅葆錶~ 傘紫 寡堅Щ啊棻! 橡艇 詳橫!                          弛\n");
		printf("弛 辦葬朝 衝餌蒂 ж賊憮 號擎 渠�飛� 釭斑棻.                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楚斜楚~ 釭紫 艙�� 爾楝陛濠堅 ж溥ц朝等 橡艇 艙�首虞秣㊣�!  弛\n");
		printf("弛 渡褐:謠嬴п憮 棻ч檜棻~! 橡艇陛濠!                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:頂陛 啪歜擎 滌煎 寰謠嬴п憮 斜楛等 離塭葬 艙�首虞� 陛朝勒 橫陽? 弛\n");
		printf("弛 渡褐:斜楚 斜歲 艙�首虞秣㊣琖!                                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:諦! 薑蜓?? 傘鼠 詣氈棻~ 棻擠縛 頂陛 髦啪!                     弛\n");
		printf("弛 渡褐:詣氈曹~衛除 剪曖 棻腑啻~橡艇 菟橫陛濠!                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楚 斜歲 罹晦 陛虜�� 導嬴憮 晦棻葬堅 氈橫~                     弛\n");
		printf("弛 渡褐:斜楚 斜歲 褻褕�� 鬲棻諦~!                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楚! 橡艇 鬲棻諦憮 艙�� 葆盪爾濠!                            弛\n");
		printf("弛 渡褐:餌塋菟 Яп輿棲械 橡艇 釭陛濠!                              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:斜楚 橡艇 陞啪. 艙�降◎謎� 嘐寰.                              弛\n");
		printf("弛 渡褐:嬴傍 橡艇 鬲棻諦~埠 貲濰賊 釭螢剪偽戲棲械~                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:辦葬餵 陛朝 埤跡望檜 傘鼠 戲蝶и等 盪 擅梱雖虜 等溥棻輿塭.    弛\n");
		printf("弛 渡褐:憲懊橫~ 斜歲 10碟檜賊腎雖??                                 弛\n");
		printf("弛 團薑:錠~傘 擒樓 寰棵啪 說葬 陛濠~                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑:薑蜓?? 傘鼠 堅葆錶~ 頂陛 匏檜 號嬴憮 埤跡望擎 澀 跤鬲剪萇壬壬 弛\n");
		printf("弛 渡褐:六六六橡艇 陛濠~睡賅椒檜 副薑ж衛啊棻~                      弛\n");
		printf("弛 團薑:斜楚~ 橡艇 陛濠~!                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑曖 ル薑檜 謠雖 彊棻                      弛\n");
		printf("弛                                              弛\n");
		printf("弛 團薑 : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑曖 ル薑檜 嘐褕翻橫 爾檣棻                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 團薑 : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團薑曖 ル薑檜 嫩棻                                     弛\n");
		printf("弛                                                        弛\n");
		printf("弛 團薑 : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}


void man_mr(char p, person *user)
{

	do {
		printf("忙式式式式式式式式式式式< 矇攪1. 羅 虜陴 >式式式式式式式式式式式式忖\n");
		printf("弛 雖骨輿檣婁 毯擎 罹濠陛 輿滲擊 憮撩剪萼棻.                      弛\n");
		printf("弛 渡褐:�公� 雖骨檠橫幗葬褐碟 蜃轄??                            弛\n");
		printf("弛 嘐楚:嬴...啻..瓊嬴 輿敷憮 馬餌м棲棻. 雖骨 輿衛啊橫蹂...?      弛\n");
		printf("弛                                                                弛\n");
		printf("弛 A:雖骨 瓊嬴萄溜戲棲械 嫣 и郭 餌輿撮蹂!                        弛\n");
		printf("弛 B:雖骨擊 斜傖 給溥遽棻.                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C1_Q1(p, user);
		getchar();
		system("cls");



	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式式式< 矇攪 2. 餵  寰 >式式式式式式式式式式式忖\n");
		printf("弛 葆蘋螃驚擊 菟橫陛爾棲 雖骨輿檣曖 翱塊籀陛 飪棻.                弛\n");
		printf("弛                                                                弛\n");
		printf("弛 A:試盪 翱塊擊 и棻.                                            弛\n");
		printf("弛 B: 翱塊 螃晦蒂 晦棻萼棻.                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C2_Q2(p, user);
		getchar();
		system("cls");

	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式< 矇攪3. 偉楝葬嬴 寥�俯� 擅>式式式式式式式式忖\n");
		printf("弛  嘐楚:號檜 晦棻葬樟橫蹂...? 棵橫憮 賸歎п蹂!                   弛\n");
		printf("弛                                                                弛\n");
		printf("弛  A:嬴 蕨~ 橡艇 骨衛棻~                                         弛\n");
		printf("弛  B:惘雛嬴蹂. 嗨橫螃替塭 號檜 ��萄樟轄?                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C3_Q3(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:盪喔擎 凳 萄衛堅 談戲撮蹂??               弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:薯陛 蛻餵 嬴朝等陛 氈朝等 橫集撮蹂?          弛\n");
		printf("弛 B:盪朝 棻 惘雛擎等... 斜薹擎蹂?                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C3_Q4(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式< 矇攪4. 衝 渡 >式式式式式式式式式式忖\n");
		printf("弛 碟嬪晦陛 傘鼠 瞳瞳ж棻. 鼠蝦蜓檜塭紫 п瑭撿啊棻!       弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:罹晦 堅煎馨陛 堅煎馨 蛻氈渠~!                        弛\n");
		printf("弛 B:凱 鏃嘐陛 凳撿?                                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C4_Q5(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:詭景陛 號擎等 凱 凳詳擊楚..??             弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:陪 嬴鼠剪釭 棻 惘雛嬴~                       弛\n");
		printf("弛 B:罹晦朝 絲梱蝶嫌 辦翕檜 蛻氈棻朝等,           弛\n");
		printf("弛   頂陛 辦翕 衛酈堅 傘陛 絲梱蝶詳擊楚?          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C4_Q6(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 絲梱蝶諦 辦翕擊 輿僥ц棻. 薑瞳檜�撣打�. 橫飩啪 п撿й梱?    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛 A:傘 奢睡 謠嬴и棻 ц歷雖?? �公� 熱з 覬 憲溥還熱 氈橫?            弛\n");
		printf("弛   頂陛 熱з虜 B + 檜 釭諮剪萇...冗                                 弛\n");
		printf("弛 B:擠衝檜 傘鼠 螃楚 勘葬朝匙 偽棻...                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C4_Q7(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬陛 衛鑑 擠衝檜 釭諮棻.                             弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:諦 擠衝 蛻氈棻. 傘疏 絲梱蝶 覬 詳擊啪~               弛\n");
		printf("弛 B:頂陛 絲梱蝶 賭橫還啪!                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C4_Q8(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 衝餌蒂 棻ж堅 夤戲煎 釭諮棻.                  弛\n");
		printf("弛 嘐楚:盪晦 辦葬 檜薯 橫蛤陞梱?                        弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A:釭 艙�倖敵� 氈朝等 艙�首虞� 陞楚?                  弛\n");
		printf("弛 B:嫣詳堅 釭棲械 й啪橈棻...                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		scanf("%c", &p);
		man_mr_C4_Q9(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式式< 矇攪 5. 艙�降� >式式式式式式式式式式忖\n");
		printf("弛 嘐楚:頂陛 ル餌螢纔棲械 罹晦憮 濡械 晦棻萵楚?               弛\n");
		printf("弛                                                            弛\n");
		printf("弛 A:餌褒 傘 �倣敶� 鬲擊陽 頂陛 蕨衙ц橫~!                    弛\n");
		printf("弛 B:憲啊橫~褻褕�� 鬲棻諦!陪 罹晦 導嬴 氈擊啪~!               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		scanf("%c", &p);
		man_mr_C5_Q10(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 艙�降� 衛濛腎歷堅, 艙�飛� 爾朝 紫醞 嘐楚陛 �倣敶Ч� 除棻堅ц棻.        弛\n");
		printf("弛                                                                        弛\n");
		printf("弛 A:斜楚? 斜歲 褻褕�� 鬲棻諦~                                            弛\n");
		printf("弛 B:(棻葬蒂 蝶戴 螢葬貊)橡艇 雖釭陛 寰爾罹                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		scanf("%c", &p);
		man_mr_C5_Q11(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:盪... 頂陛 鱔旎衛除 陽僥縑 檜薯 陛瑭撿 腆剪 偽嬴.     弛\n");
		printf("弛                                                            弛\n");
		printf("弛 A:釭 覬氈戲賊 擒樓檜 氈朝等 澀陛~                          弛\n");
		printf("弛 B:衛除檜 號檜 棵歷戲棲梱 頂陛 餵梱雖 等溥棻 還啪!          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_mr_C5_Q12(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.            弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜喪縑 渠и 頂葆擠擊 憲葬堅 談棻.       弛\n");
	printf("弛 嘐楚: 螃棺 薑蜓 營嘐氈歷橫!                                      弛\n");
	printf("弛       棻擠縑 晦�� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠!                 弛\n");
	printf("弛 渡褐:濡械...! 釭 й 樽晦陛 氈橫...""辦葬翱擁 й楚０""              弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴...啻 雖旎擎 衛除檜 橈橫憮 翱塊籀 萄萵纔棲械 翱塊輿撮蹂.    弛\n");
		printf("弛 渡褐:啻! 熱機 棵戲褒剪 偽擎等 橡艇 陛撮蹂!                       弛\n");
		printf("弛 斜溢啪 釭朝 嘐楚塭朝 罹濠曖 廓�ㄧ� 嫡懊棻.                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫...盪晦 馬餌曖 曖嘐煎 翱塊輿衛賊 嫣 餌萄萵啪蹂.             弛\n");
		printf("弛 渡褐:嬴 啻! 馬餌п蹂~                                             弛\n");
		printf("弛 熱機棵戲褒剪 偽擎等 橡艇 陛敷撿 й剪 偽嬴蹂!                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:啻. 斜歲 試盪 陛獐啪蹂.                 弛\n");
		printf("弛 斜溢啪 釭朝 嘐楚塭朝 罹濠曖 廓�ㄧ� 嫡懊棻.   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:寰喟ж撮蹂~ 嬴梱 雖骨 瓊嬴鍍湍 餌塋檜縑蹂!              弛\n");
		printf("弛 嘐楚:嬴 寰喟ж撮蹂. 薯陛 夥緒陛雖堅 試盪 翱塊擊 跤萄溜啻蹂.    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:嬴棲縑蹂~ 嫣擎 樹薯 詳擊梱蹂?                           弛\n");
		printf("弛 薯陛 ゎ橾擎 寰腎堅, 饜蹂橾擎 陛棟й剪 偽嬴蹂                   弛\n");
		printf("弛 嘐楚:斜歲 饜蹂橾 螃��6衛縑 偉楝葬嬴 寥�俯▼□� 虜陳梱蹂?       弛\n");
		printf("弛 渡褐:啻 謠嬴蹂! 斜歲 饜蹂橾縑 瘋蹂!                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 1) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:盪 嬴梱 螃�醴� 雖骨 瓊嬴輿樟湍 碟 蜃釭蹂?       弛\n");
		printf("弛 渡褐:啻 蜃嬴蹂~嫣擎 樹薯 詳擊梱蹂?                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:擠...橾蹂橾 螃�� 橫陽蹂?                              弛\n");
		printf("弛 渡褐:啻 謠嬴蹂! 斜歲 橾蹂橾 螃��6衛縑 寥�俯▽梲□� 瘋蹂! 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴...啻 賸歎м棲棻. 橡艇陛蹂.                             弛\n");
		printf("弛 渡褐:嬴棲縑蹂~ 橡艇 嫣檜釭 詳戲楝陛轄~                       弛\n");
		printf("弛 嘐楚:啻...!盪晦 賸歎и等 薯陛 嗨橫諦憮 斜楛等 覬虜 繭繭�� 陛蹂.弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;




	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴..嬴棲縑蹂 瞪 惘雛嬴蹂. 晦棻葬啪 п憮 賸歎п蹂. 弛\n");
		printf("弛 渡褐:嬴檜 嬴棲縑蹂~盪紫 虞 紫雜ц朝勘蹂??            弛\n");
		printf("弛 嗨橫螃敷憮 ��萄褐等 濡械 漸纂縑 導懊棻 陛轄.           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴 啻.. 馬餌п蹂..!               弛\n");
		printf("弛 嘐楚朝 寡溥褕縑 撲溶匙 偽棻.           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:啻 斜歲 蛻餵戲煎 陛衛轄.          弛\n");
		printf("弛 渡褐:殮蛻縑 蜃戲樟戲賊 謠啊啻蹂~!    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫 盪朝 凳萇雖 澀詳橫蹂.                                弛\n");
		printf("弛 渡褐:斜溢棻賊 棻ч檜啻蹂! 橡艇 陛轄~                       弛\n");
		printf("弛 辦葬朝 衝渡擊 陛賊憮 渠�飛� 鱔п 翕骨檜塢匙擊 憲懊棻.        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 3) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴...斜楝賊 盪晦 氈朝 碟衝餵戲煎 陛褒楚蹂?              弛\n");
		printf("弛 渡褐:啻 斜楚蹂~ 盪朝 嬴鼠剪釭 棻 澀詳橫蹂~                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜..斜歲 橡艇 陛轄.                                     弛\n");
		printf("弛 渡褐:薯陛 盪喔擊 寰詳橫憮 寡堅Ъ等 橡艇陛轄!               弛\n");
		printf("弛辦葬朝 衝渡擊 陛賊憮 渠�飛� 鱔п 翕骨檜塢匙擊 憲懊棻.         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴...жж 營塹棻...                   弛\n");
		printf("弛 渡褐:斜楚蹂? 斜歲 ж釭 渦 п還梱??       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜勒 覬...嬴棋匙 偽嬴..                       弛\n");
		printf("弛 渡褐:嬴..嘐寰. 營塹橫 ж朝還 憲懊橫..            弛\n");
		printf("弛 渡褐:贖橾檜棻. 碟嬪晦陛 渦 瞳瞳п螺棻.           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 4) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴 釭朝 奢睡ж朝剪 謠嬴п                                 弛\n");
		printf("弛 渡褐:嬴 薑蜓?!?!斜歲 釭醞縑 釭嫌 偽檜 紫憮婦陛憮 奢睡й楚??  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫 斜楚~釭朝 鼻婦 橈橫.                       弛\n");
		printf("弛 渡褐:斜歲 棻擠縑 陳 薑п憮 陛濠!                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫....斜歲 傘 辦翕詳擊楚?檜啪 薯橾 漆蝶お詭景楚           弛\n");
		printf("弛 渡褐:斜楚撿啊棻~ 凱 凳詳啪?                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:陪 絲梱蝶 詳擊溥堅.               弛\n");
		printf("弛 渡褐:檜撿~ 斜匙紫 蛻氈啊啻~          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫 斜楚? 斜歲 斜剪 詳橫撿啊棻. 蛻氈擊梱?                  弛\n");
		printf("弛 渡褐:檜 餵 絲梱蝶陛 霞瞼 蛻氈橫! 釭 圖堅 詳橫瑭!             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫 斜楚撿啊棻! 斜歲 傘 圖堅 詳擊啪~           弛\n");
		printf("弛 渡褐:斜楚斜楚!!                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚: 熱з 澀ж曹 ж朝等 澀擎 跤 陛腦纂朝等 惘雛嬴?        弛\n");
		printf("弛 渡褐:錠 惘雛嬴! 斜歲 釭醞縑 紫憮婦陛憮 憲溥醜^^          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜歲 傘紫 僥з 覬 憲溥還 熱 氈橫?                       弛\n");
		printf("弛 渡褐:渡翱ж雖~頂陛 僥з擊 薯橾 澀ж剪萇!                   弛\n");
		printf("弛 渡褐:嘐楚朝 奢睡蒂 謠嬴ж朝匙 偽棻.碟嬪晦陛 и類 謠嬴螺棻! 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:擠...斜楝啪 寡陛 號檜 堅Ъ陛爾棻.       弛\n");
		printf("弛 渡褐:橫 螃棺 и郭紫 跤詳歷剪萇冗冗         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴 斜溢掘釭. 嫣擎 詳堅 棻喪.              弛\n");
		printf("弛 渡褐:副薑п醜憮 堅葆錶!                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴...橫 斜楚 詳橫瑭...寡陛 薑蜓 號檜 堅ど掘釭.弛\n");
		printf("弛 渡褐:諦 絲梱蝶紫 薑蜓 蛻氈棻! 頂疏 詳橫 獐楚?    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴傍..傘 號檜 詳橫^^                  弛\n");
		printf("弛 渡褐:斜楚~ 蛻氈啪 詳橫!                  弛\n");
		printf("弛 嘐楚曖 寰儀檜 寰謠嬴螺棻.                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");



		break;

	case 'B':
		*(sum + 7) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫? 寰斜楚醜紫 腎朝等 堅葆錶!           弛\n");
		printf("弛 渡褐:嬴傍~棻 賭歷戲棲梱 橡艇 詳橫瑭!       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:罹晦 薑蜓 蛻氈棻. 棻擠縑 傳 諦撿啊橫!       弛\n");
		printf("弛 渡褐:蛻氈橫憮 棻ч�鰲�! 蛻氈啪 詳橫!           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚: 斜歇梱?? 釭紫 譆斬縑 釭螞 艙�� 爾堅談歷朝等 澀腑棻~    弛\n");
		printf("弛 渡褐:�公� 爾④嘐寰 椰模蛤 艙�� 爾堅談歷湍剪撿??            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫!蜃嬴 傘紫 斜剪 爾堅談歷橫?                     弛\n");
		printf("弛 渡褐:錠! 辦葬 鏃щ檜 綠蝌ж棻^^                      弛\n");
		printf("弛 嘐楚:斜楝啪~! 橡艇 艙�� 爾楝 陛濠                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜楝啪...盪晦 艙�降� 爾檜朝等 艙�頁騕� 獐楚?          弛\n");
		printf("弛 渡褐:斜剪 惘雛棻! 橡艇 艙�首虞秣㊣�!!                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜楚 傘陛 謠嬴п憮 棻ч檜棻.            弛\n");
		printf("弛 渡褐:釭 艙�首葩簞� 謠嬴п冗冗              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴 薑蜓?? 斜歲 棻擠縑朝 頂陛 艙�降� 鳥啪!     弛\n");
		printf("弛 渡褐:斜歲 棻擠縑朝 п葬ん攪 爾楝螃朝剪 橫陽?     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜楚斜楚 辦葬 艙�亳簸� 棵啊棻~ 橡艇 菟橫陛濠!     弛\n");
		printf("弛 渡褐:斜楚~! で夔檜嫌 屬塭 餌憮 橡艇 陛濠             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 9) = 0;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜楚 橡艇 鬲棻螢啪~                       弛\n");
		printf("弛 渡褐:螢陽 で夔檜嫌 屬塭紫 偽檜 餌諦醜!       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫...?斜楚 憲懊橫....             弛\n");
		printf("弛 嘐楚朝 ル薑檜 掩橫螳鬲棻.              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:(模堆模堆) 憲懊橫..艙�� 葆盪 爾堅氈橫!    弛\n");
		printf("弛 渡褐:斜楚~傘紫 說葬諦憮 艙�� 葆盪瑭!         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:憲懊橫~                                   弛\n");
		printf("弛 渡褐: 褻褕�� 鬲棻諦~!!                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 10) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫...?嬴 嘐寰 橡艇 雖釭陞啪                                 弛\n");
		printf("弛 渡褐:嬴 雖旎檜 ж檜塭檜お檣等...橡艇 鬲棻諦 雖旎 ж檜塭檜お撿~ 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:橫 斜楚 艙�� 澀 爾堅氈橫.                 弛\n");
		printf("弛 嘐楚曖 ル薑縑憮 髦晦陛 替硫螺棻.               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");


		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:斜楚紫 辦葬餵擅 梱雖虜 等溥棻 輿賊寰腆梱? 傘鼠 鼠憮錶憮斜楚.弛\n");
		printf("弛 渡褐:斜楚 蹂闈 撮鼻 嬪яж棲械...頂陛 等溥棻還啪~              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:堅葆錶~橡艇 陛濠                          弛\n");
		printf("弛 渡褐:斜楝濠~埤跡望檜 戲蝶蝶ж曹 ж啻~        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 11) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:嬴 薑蜓? 堅葆錶~嘐寰ж雖虜 餵 擅梱雖虜 睡饕й啪.      弛\n");
		printf("弛 渡褐:嬴傍 棵擎衛除縑 渡翱�� 餵梱雖 等溥棻輿朝啪 蜃朝剪雖!弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚:傘紫 餵陞溥賊 橡艇 陛濠.                      弛\n");
		printf("弛 渡褐:斜楚 傘啻 睡賅椒檜 副薑ж衛啊棻.橡艇 陛濠~  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
		break;

	}
}
void f_finish_mr(int total)
{
	if (total <= 41)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚曖 ル薑檜 謠雖 彊棻                      弛\n");
		printf("弛                                              弛\n");
		printf("弛 嘐楚 : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚曖 ル薑檜 嘐褕翻橫 爾檣棻                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 嘐楚 : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嘐楚曖 ル薑檜 嫩棻                                     弛\n");
		printf("弛                                                        弛\n");
		printf("弛 嘐楚 : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}



void man_dy(char p, person *user)
{


	do {

		printf("忙式式式式式式式式式式式式式式<矇攪 1.羅 虜陴>式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐: �公� 雖骨 檠橫幗葬褐碟 蜃嬴蹂?                                 弛\n");
		printf("弛 紫翱: 啻!蜃嬴蹂! 薯陛 輿檣檜縑蹂壬壬 雖骨 給溥輿衛啊橫蹂?              弛\n");
		printf("弛                                                                        弛\n");
		printf("弛 A:雖骨 輿錶萄溜戲棲 嫣 餌輿撮蹂!                                       弛\n");
		printf("弛 B:斜傖 給溥遽棻.                                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式式式式式式<矇攪 2.餵 寰>式式式式式式式式式式式式式式忖\n");
		printf("弛 藹渠縑 援錶 с萄ア擊 ж朝 紫醞 蘋蘋螃驚縑 斜喪曖 Щ煎в 餌霞檜 飪棻.     弛\n");
		printf("弛 渡褐:嬴梱疑湍 雖骨 輿檣檜啻. 試盪 翱塊п撿腎釭??                       弛\n");
		printf("弛 A:Щ煎в擊 掘唳ж棻 爾檜蝶驚擊 揚毓棻陛 鏃模и棻.                        弛\n");
		printf("弛 B: 爾檜蝶驚檜 螞 �� 莒啣棻.                                              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C2_Q2(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}

	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式<矇攪 3.偉楝葬嬴寥�俯� 擅>式式式式式式式式式式式式式忖\n");
		printf("弛 擒樓и 濰模縑 試盪 紫雜ц棻.                                             弛\n");
		printf("弛 渡褐:嬴霜 寰 諮啻’�公� 濱擎 勒 嬴棲啊雖...?                           弛\n");
		printf("弛 擒樓衛除爾棻 10碟檜 雖釭堅憮 罹濠陛 嗨橫諮棻.                            弛\n");
		printf("弛 紫翱: 賸歎п蹂!號檜 晦棻葬樟橫蹂...? 薑蜓 賸歎п蹂壬                     弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:惘雛嬴蹂~陛轄~                                                         弛\n");
		printf("弛 B:棻纂衛賊 橫翹衛溥掘罹!! 嗨雖 葆撮罹!                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:盪喔擎 凳 萄衛堅 談戲撮蹂??                                         弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:盪 瓔ア 棻賅擎 絲梱蝶餵 氈朝等 橫集撮蹂?                               弛 \n");
		printf("弛 B:盪朝 棻 惘雛嬴蹂 斜薹擎蹂?                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式<矇攪 4. 衝渡>式式式式式式式式式式式式式式式式忖\n");
		printf("弛 衝渡縑 菟橫諮棻. 橫儀и 奢晦陛 �撣打�.                                   弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:罹晦 堅煎馨陛 堅煎馨 蛻氈橫~!                                          弛\n");
		printf("弛 B:罹晦 碟嬪晦 樵羶 謠棻                                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:詭景陛 棻曄ж啻~ 傘 凳詳擊楚??                                      弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:陪 嬴鼠剪釭                                                            弛\n");
		printf("弛 B:陪 絲梱蝶 詳擊楚 偽擎剪 詳擊楚??                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛辦葬朝 絲梱蝶蒂 輿僥ц棻. 薑瞳檜�撣打�. 橫飩啪 п撿й梱?                  弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:傘 �公� 獎 謠嬴п?                                                     弛\n");
		printf("弛 B:擠衝 釭螃朝啪  傘鼠 螃楚 勘葬啻                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 絲梱蝶陛 釭諮棻.                                                       弛 \n");
		printf("弛                                                                        弛\n");
		printf("弛 A:蜓 勘雖 蜓堅 陝濠 詳濠                                               弛 \n");
		printf("弛 B:檜 餵 絲梱蝶 霞瞼 蛻氈橫! 橡艇 詳橫瑭! 睡褶ж賊 頂疏 渦 還啪~!       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		scanf("%c", &p);
		man_dy_C4_Q8(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 衝餌蒂 棻ж堅 夤戲煎 釭諮棻.                                    弛\n");
		printf("弛 紫翱:寡睡腦棲梱 晦碟 謠嬴螺橫冗冗 檜薯 橫蛤 陞楚?                      弛\n");
		printf("弛                                                                        弛\n");
		printf("弛 A:頂陛 爾堅談歷湍 艙�倍兢� ц朝等 偽檜 爾楝陛濰!                       弛 \n");
		printf("弛 B:堅晝衛啗 億煎遴 議葛攪 釭諮朝等 ж楝 陞楚?                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式<矇攪 5. 艙�降�>式式式式式式式式式式式式式式式忖\n");
		printf("弛 斜溢啪 斜喪諦 л眷 艙�飛� 爾楝 艙�降�縑 諮棻.                                  弛\n");
		printf("弛 釭 艙�� 獐隆 で夔檜嫌 屬塭 氈橫撿 ж朝等 餌楝 鬲棻螢啪~                        弛\n");
		printf("弛                                                                                弛\n");
		printf("弛 A:嬴傍 傘 罹晦憮 晦棻葬掘氈橫 頂陛 餌螢啪~!                                    弛\n");
		printf("弛 B:憲啊橫! 釭朝 纂鍔蛻 餌棻醜!!                                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 艙�降� 衛濛腎歷堅, 艙�飛� 爾朝 紫醞 紫翱檜陛 �倣敶Ч� 除棻堅ц棻.                            弛\n");
		printf("弛                                                                                              弛\n");
		printf("弛 A:(模堆模堆)釭紫 �倣敶� 陛溥湍 霤檣等 偽檜 陛濠.                                             弛\n");
		printf("弛 B:(棻葬蒂 蝶戴 螢葬貊)橡艇 雖釭陛 寰爾罹                                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 望堅 望歷湍 艙�降� 部釭堅 棵擎 嫘檜 腎歷棻.                              弛\n");
		printf("弛 紫翱檜陛 鱔旎衛除檜 氈橫 餵縑 陛溥 и棻.                                 弛\n");
		printf("弛 紫翱:釭 鱔旎衛除 陽僥縑 檜薯 陛瑭撿 腆剪 偽嬴~                           弛\n");
		printf("弛                                                                          弛\n");
		printf("弛 A:釭 覬氈戲賊 擒樓檜 氈朝等 澀陛~                                        弛\n");
		printf("弛 B:衛除檜 號檜 棵歷戲棲梱 頂陛 餵梱雖 等溥棻 還啪!                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		man_dy_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");

		}
	} while (p != 65 && p != 66);

	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.                    弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜喪縑 渠и 頂葆擠擊 憲葬堅 談棻.               弛\n");
	printf("弛 紫翱: 螃棺 薑蜓 營嘐氈歷堅, 棻擠縑 晦�� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠!   弛\n");
	printf("弛 渡褐:濡械...! 釭 й 樽晦陛 氈橫... ""辦葬翱擁 й楚０""                     弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	getchar();
	system("cls");


}
void man_dy_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:(渡�笞牉�)嬴 啻! 獎紫 餌萄萵熱 氈轄~      弛\n");
		printf("弛  渡褐:六六六斜歲 翱塊萄萵啪蹂!               弛\n");
		printf("弛 紫翱: 啻~斜歲 翱塊輿撮蹂~                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:雖骨紫 瓊嬴輿樟朝等 馬餌曖 曖嘐煎 嫣檜塭紫 и郭 餌萄萵啪蹂~!          弛\n");
		printf("弛 渡褐: 餌輿褐棻賊 馬餌�� 詳擊啪蹂!                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱: (翱塊籀蒂 輿貊)薯陛 夥緒憮 雖旎 陛瑭撿腆剪偽嬴蹂! 翱塊輿撮蹂!!       弛\n");
		printf("弛 渡褐: 啻 褻褕�� 陛撮蹂~~                                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:賸歎п蹂 棵擎衛除縑 壬壬                                            弛\n");
		printf("弛 紫翱:惘雛嬴蹂 獎濠葬縑憮 啾堅 氈剪萇蹂 六六六 嫣擎 樹薯 詳擊梱蹂?          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐: 瞪 蝶馨還 棻 惘雛嬴蹂!!                                            弛\n");
		printf("弛 紫翱: 斜歲 饜蹂橾 螃��6衛縑 菩骯翕 偉楝葬嬴 寥�俯� 擅縑憮 虜釭蹂~          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:賸歎п蹂!! 獎 葆敷憮 澀跤 揚毓啻蹂!                   弛\n");
		printf("弛 渡褐: 惘雛蝗棲棻.                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱: 嬴 蜃棻! 嫣餌萄溥撿 ж朝等 樹薯陛 惘雛戲撮蹂??                       弛\n");
		printf("弛 渡褐:擠...輿蜓 橫陽蹂?                                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜歲 檜廓輿 饜蹂橾 盪喔 6衛縑 菩骯翕 偉楝葬嬴 寥�俯� 擅縑憮 虜釭蹂!   弛\n");
		printf("弛 渡褐:啻! 斜歲 斜陽 瘋蹂~                                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱: 嬴..啻! 樹薯睡攪 晦棻葬樟橫蹂?                                       弛\n");
		printf("弛 渡褐:盪 и10碟薑紫??晦棻溜橫蹂! 惘雛嬴蹂~                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱: 嬴~啻啻 斜歲 嫣詳戲楝 陛蹂!                                          弛\n");
		printf("弛 渡褐:啻 謠嬴蹂~                                                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:嬴 副薑п輿敷憮 馬餌п蹂冗冗盪 殖葬晦 澀п蹂!                         弛\n");
		printf("弛 渡褐:六六六斜楚紫 寰剩橫雖敷憮 棻ч檜啻蹂!                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:寡 號檜 堅Щ褒蘸等 嫣 詳戲楝陛轄!                                     弛\n");
		printf("弛 渡褐:啻 謠嬴蹂~!                                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:啻~謠嬴蹂! 盪 絲梱蝶 腎啪 謠嬴п蹂!!                                  弛\n");
		printf("弛 渡褐:斜歲 橡艇 嫣詳戲楝 陛蹂!                                            弛\n");
		printf("弛 紫翱:啻 橡艇 骨衛棻!!                                                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:嬴...斜歲 絲梱蝶 詳戲楝陞楚蹂??                                       弛\n");
		printf("弛 渡褐:啻 謠嬴蹂~ 盪 絲梱蝶 謠嬴п蹂~                                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:啻 斜歲 盪薹縑 爾檜朝 夠戲煎 陛轄~!                                   弛\n");
		printf("弛 渡褐:啻 橡艇 骨衛棻~~                                                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:六六六六六傘 薑蜓 營塹棻                                              弛\n");
		printf("弛 渡褐:橫..冗 營塹橫?? 釭紫 嬴營偃斜 謠嬴ж剪萇六六六                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:棻擠縑紫 傳 п醜六六六                                                弛\n");
		printf("弛 渡褐:憲懊橫冗冗渦 翱蝗п憮 п還啪!                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 嬴營偃斜 湯碟縑 紫翱檜諦 陛梱錶螺棻!傳и 渠�飛� ж賊憮 憮煎 翕骨檣 餌褒擊 憲懊棻!弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楝啪~餌霞鎰晦 詞 謠擎 夠 檣剪偽嬴~                          弛\n");
		printf("弛 渡褐:斜棲械~ 棻擠縑 傳 諦瑭撿啊橫!                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜隆 援掘嫌 螃啪?六六                                                 弛\n");
		printf("弛 渡褐:斜楝啪? 釭嫌 棻衛 螃濠冗冗                                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:堅團п 獐啪~                                                                弛\n");
		printf("弛 辦葬朝 渠�飛� ж賊憮 憮煎 翕骨檣 餌褒擊 憲懊棻!                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:嬴...斜楚? 陪 絲梱蝶 詳擊勒等 偽擎剪 詳擊楚?                          弛\n");
		printf("弛 渡褐:斜楚~釭 絲梱蝶 謠嬴п!!                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜歲 絲梱蝶煎 衛鑑棻??                                      弛\n");
		printf("弛 渡褐:錠~橡艇 輿僥ж濠!                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚 斜歲 絲梱蝶 詳濠~~                                       弛\n");
		printf("弛 渡褐:罹晦 絲梱蝶陛 霞瞼 蛻氈橫!                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:薑蜓? 斜溢啪 蜓ж棲械 晦渠脹棻冗冗                                    弛\n");
		printf("弛 渡褐:晦渠п紫 謠嬴!!                                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:錠六六六六! 頂 撮ん曖 奩擎 憲囀螢檜塭堅 й熱 氈雖 六六!               弛\n");
		printf("弛 渡褐:螃 薑蜓?? 釭紫 獎 澀 葆衛朝等 棻擠縑 獎 и濤 ж濠!                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚 謠嬴! 釭紫 獎 澀葆衛朝等 試盪 鏃ж賊 寰脹棻~六六                 弛\n");
		printf("弛 渡褐:六六六斜歇橾 橈橫!                                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 獎樽晦蒂 ж棻爾棲梱 紫翱檜朝 闌剪錶 爾艘堅 撩問檜 籐п憮 らц棻.           弛 \n");
		printf("弛 渠�飛� 釭援湍 醞 擠衝檜 釭諮棻.                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜剪 檣薑! ��...覬虜 渦 晦棻溥爾濠.                                   弛\n");
		printf("弛 渡褐:斜楚 寡號檜 堅Щ掘釭?                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:橫. 螃棺 и郭紫 跤詳歷剪萇..                                          弛\n");
		printf("弛 紫翱檜朝 寡陛 號檜 堅ど朝雖 髦礎 瞼隸釭 爾艘棻. 陛虜�� 氈橫撿啊棻.         弛\n");
		printf("弛 棻ч�� 絲梱蝶陛 釭諮棻. 紫翱檜曖 晦碟檜 覬 ヴ萼 匙 偽棻.                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:橫??斜楚 凳 蛻氈啪 詳橫~                                      弛\n");
		printf("弛 渡褐:斜楚 傘紫 蛻氈啪 詳橫~                                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 僧僧�� 衝餌蒂 ц棻.                         弛\n");
		printf("弛 紫翱檜曖 ル薑檜 謠雖彊棻.                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:(и殮 詳橫爾貊)螃~~ 絲梱蝶 霞瞼 蛻氈棻!!頂陛 詳橫獄 絲梱蝶 醞縑憮 薯橾 蛻氈橫!  弛\n");
		printf("弛 渡褐:殮縑 蜃嬴憮 棻ч檜棻冗冗蛻氈啪 詳橫!                                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱檜曖 ル薑檜 嫩嬴螺棻.              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚 謠嬴~! 釭紫 艙�� 寰獄雖 紮 脹剪偽嬴冗冗                            弛\n");
		printf("弛 渡褐:謠嬴п憮 棻ч檜棻! 斜歲 艙�首虞� 陛濠!                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 艙�� 爾楝陛濠朝 薯寰縑 紫翱檜曖 ル薑檜 嫩嬴螺棻.                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:頂陛 啪歜擎 滌煎 寰 謠嬴п憮 斜楛等 離塭葬 艙�� 爾楝陛濠.                       弛\n");
		printf("弛 渡褐:斜楚 斜歲 艙�� 爾楝陛濠~!                                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:堅葆錄! 斜歲 辦葬 偽檜 陛憮 で夔 堅腦濠!                                        弛\n");
		printf("弛 渡褐:斜楚~橫雯 蛻 謠嬴п??                                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:陪 躁塭詬蛻 謠嬴п! 傘朝??                                                弛\n");
		printf("弛 渡褐:螃! 釭紫 躁塭詬蛻 謠嬴ж朝等!!辦葬 劃陛 澀鱔и棻!                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 鼻艙衛除檜 棻陛諦 辦葬朝 鼻艙婦戲煎 菟橫鬲棻                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:衛楝 陪 躁塭詬蛻 詳擊疏撿~!                                             弛\n");
		printf("弛 渡褐:嬴 斜楝雖蜓堅 纂鍔蛻 餌棻輿塭~~                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜歲 偽檜 餌楝陛濠~                                   弛\n");
		printf("弛 渡褐:斜楚~憲懊橫 偽檜 餌楝陛~~                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚 橡艇 鬲棻 諦憮 艙�� 葆盪 爾濠.                                     弛\n");
		printf("弛 渡褐:斜楚斜楚! 褻褕п憮 釭陛濠~                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚 橡艇 鬲棻螢啪..                                                    弛\n");
		printf("弛 渡褐: 埠 ж檜塭檜お棲械 橡艇 鬲棻諦~                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱檜曖 ル薑檜 滌煎 謠雖彊棻.                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:埤跡望檜 戲蝶и等 盪 擅梱雖虜 等溥棻 醜~                                弛\n");
		printf("弛 渡褐:擠...斜楚...10碟檜賊 腋??                                             弛\n");
		printf("弛 紫翱:擬 傘 擒樓 寰棵擊溥賊 橡艇 陛濠~                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱檜曖 ル薑檜 滌煎 謠雖彊棻.                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱:斜楚輿賊 傘鼠 堅葆錶~!斜歲 褐撮 覬 韓啪!                                弛\n");
		printf("弛 渡褐:六六六鼠蝦 褐撮撿~渡翱и 橾檣等! 橡艇 陛濠 邊棻!                      弛\n");
		printf("弛 紫翱:掘楚! 橡艇 陛濠!!                                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱檜曖 ル薑檜  謠嬴 爾檣棻!                                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
}

void f_finish_dy(int total)
{
	if (total <= 41)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱曖 ル薑檜 謠雖 彊棻                      弛\n");
		printf("弛                                              弛\n");
		printf("弛 紫翱 : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱曖 ル薑檜 嘐褕翻橫 爾檣棻                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 紫翱 : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 紫翱曖 ル薑檜 嫩棻                                     弛\n");
		printf("弛                                                        弛\n");
		printf("弛 紫翱 : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}
void woman_ms(char p, person *user)
{

	do {

		printf("忙式式式式式式式式<矇攪 1. 蘋驚>式式式式式式式式式忖\n");
		printf("弛 雖�素怜� 耀掘蒂 模偃п鍍棻?                    弛\n");
		printf("弛 翱塊籀蒂 嫡懊朝等 橫飩啪 п撿й梱?             弛\n");
		printf("弛                                                弛\n");
		printf("弛 A: 試盪 蘋驚擊 и棻.                           弛\n");
		printf("弛 B: 翱塊擊 晦棻萼棻.                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式<矇攪 2.羅 虜陴>式式式式式式式式式式忖\n");
		printf("弛 擒樓ц湍 衛除檜 棻陛螃堅 氈棻.                         弛\n");
		printf("弛 盪 詩葬憮 團戮檜曖 Щ煎в 餌霞婁 毯擎 餌塋檜 憮 氈棻.  弛\n");
		printf("弛 團戮檜朝 餌霞爾棻 澀儅曹 匙 偽棻.                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		getchar();
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛 渡褐:寰喟! 傘 團戮檜 蜃雖??                弛\n");
		printf("弛 團戮 : 橫 寰喟?? �公� 晦棻萼 剪 嬴棲雖?                弛\n");
		printf("弛 渡褐: 嬴傍~寞旎 諮橫!!                               弛\n");
		printf("弛 橫雯衝戲煎 籀擠 蜓擊 й梱?                             弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:辦葬 檜薯 凳й梱?                                    弛\n");
		printf("弛 B: 陳噢紫 謠擎等 辦葬 骯疇й梱?                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 薑瞳檜 �撣打�. 輿滲縑 欽Ё檜 蕨際啪 僭菟橫 氈棻.       弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:(欽Ё擊 詩葬憮 夥塭爾貊) 諦~欽Ё檜 蕨際棻!           弛\n");
		printf("弛 B:(欽Ё濟擊 該葬縑 符戲貊) 釭 蕨輓?                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 橫儀л檜 ヴ萼 匙 偽棻.                        弛\n");
		printf("弛 辦葬朝 務棻陛 餌塋檜 路溥氈朝 夠戲煎 щц棻.         弛\n");
		printf("弛 團戮 : 橫? 盪晦 餌塋菟檜 路溥 氈朝筏? 鼠蝦 橾檜雖?   弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A:鼠蝦橾 氈朝剪 嬴棲撿?? 棻艇 望煎 陞梱?             弛\n");
		printf("弛 B:幗蝶韁 ж釭瑭~ 掘唳й梱?                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C3_Q4(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式<矇攪3: 幗蝶韁 >式式式式式式式式式忖\n");
		printf("弛 (喻楚醞)                                               弛\n");
		printf("弛 團戮 : 喻楚 澀и棻~ 傘朝 鼠蝦 喻楚 謠嬴п?             弛\n");
		printf("弛                                                        弛\n");
		printf("弛 A:釭朝 嫦塭萄 謠嬴п~!                                 弛\n");
		printf("弛 B:釭朝 ��м擊 謠嬴п~                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C4_Q5(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 骨濠晦 頂 擅戲煎 葆檜觼陛 棻陛諮棻                           弛\n");
		printf("弛 爾鏽 : 剪晦 舒 碟 碟嬪晦陛 謠戲衛啻蹂~ 鼠蝦 餌檜撮蹂?        弛\n");
		printf("弛                                                              弛\n");
		printf("弛 A: (渡�笞牉�) 盪�� 耀掘縑蹂.                                 弛\n");
		printf("弛 B:(醒戲貊) 盪�� 嬴霜 嬴鼠餌檜 嬴棲縑蹂^^                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C4_Q6(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式 <矇攪4 溯蝶饜嫌 >式式式式式式忖\n");
		printf("弛 幗蝶韁檜 部釭堅 辦葬朝 嫣擊 詳晦煎 ц棻    弛\n");
		printf("弛 辦葬朝 溯蝶饜嫌縑 菟橫諦 濠葬縑 導懊棻     弛\n");
		printf("弛 霜錳碟檜 詭景っ擊 輿樟棻                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎\n");
		getchar();
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐: 辦葬 凳 詳擊梱?                                      弛\n");
		printf("弛 團戮 : (撩渠賅餌蒂 ж貊) �噿� 瑰埤溯だ蝶顫 ж釭              弛\n");
		printf("弛 霜錳 : �噿� 槳椒 輿僥擎 擅縑憮 紫諦萄葬啊蝗棲棻              弛\n");
		printf("弛 團戮 : 嬴.. 賸歎м棲棻’壬壬壬壬壬                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		getchar();
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 釭朝 團戮檜曖 賅蝗檜 傘鼠 敝罹錫棻           弛\n");
		printf("弛 團戮檜陛 齒蝶楝錶 ж堅氈棻.橫飩啪 п撿й梱?        弛\n");
		printf("弛                                                    弛\n");
		printf("弛 A:惘雛嬴 團戮嬴 敝罹錫橫 頂陛 輿僥ж堅 螢啪~~      弛\n");
		printf("弛 B: �琱誘誘誘遜嗾� 斜啪 橡艇 擅縑 陛憮 輿僥ж堅 諦  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C4_Q7(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 戲櫛..皎韓檜 氈啻...褻偃皎韓 褻褕п憮 詳橫~ 弛\n");
		printf("弛                                                    弛\n");
		printf("弛 A: (辦僭辦僭)戲擬~                                 弛\n");
		printf("弛 B:傘紫 褻褕п~                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C4_Q8(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 嫣擊 棻 詳堅 啗骯渠 擅戲煎 鬲棻.            弛\n");
		printf("弛 識陛問擎 32000錳檜 釭諮棻.                         弛\n");
		printf("弛 翕戮: 儅陝爾棻 號檜 釭諮啻’.                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 A:(蘋萄蒂 勒啻貊)棻 啗骯п輿撮蹂                   弛\n");
		printf("弛 B: ж釭 試盪 啗骯п輿撮蹂                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式<矇攪5: и鬼奢錳 >式式式式式式式式式忖\n");
		printf("弛 辦葬朝 裟輿諦 翔濠葬蒂 陛雖堅 諦憮 濠葬蒂 濩懊棻.  弛\n");
		printf("弛 團戮:螃棺 ж瑞 橫雅橫?.                            弛\n");
		printf("弛                                                    弛\n");
		printf("弛 A:釭葷 惘雛懊橫!!傘朝 橫雅橫?                      弛\n");
		printf("弛 B:釭朝 謠懊橫!!傘朝 橫雅橫?                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C5_Q10(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮:  辦葬 檜薯 餵縑 陞梱?? 頂陛 檜薯 陛瑭撿 腋憮’ 弛\n");
		printf("弛                                                              弛\n");
		printf("弛 A:辦葬 30碟虜 渦 氈棻 陛賊 寰腆梱?? 唳纂陛 傘鼠 謠嬴~!       弛\n");
		printf("弛 B:斜楚斜楚~ 衛除檜 弊賦 檜溢啪 腑啻!                         弛\n");
		printf("弛  橡艇 陛濠! 釭紫 檜薯 陛瑭撿 腆 剪 偽嬴~                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 衛除檜 號檜 棵歷戲棲梱             弛\n");
		printf("弛     頂陛 傘啻 餵梱雖 等溥棻 醜紫 惘雛雖?       弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:斜楚~ 斜歲 釭撿 堅蛾雖~!                     弛\n");
		printf("弛 B:嬴棲撿~ 釭 �母� 陛紫 鼻婦橈橫~               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ms_C5_Q12(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("忙式式式式式式式式式式式式式忖\n");
			printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
			printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
			printf("戌式式式式式式式式式式式式式戎\n");
		}
	} while (p != 65 && p != 66);


	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.                    弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜縑 渠и 頂葆擠擊 憲葬堅 談棻.                 弛\n");
	printf("弛 團戮: 螃棺 薑蜓 營嘐氈歷堅, 棻擠縑 晦�� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠!   弛\n");
	printf("弛 渡褐:濡械...!雖�ず籲! 釭 й 樽晦陛 氈橫...   ""辦葬翱擁 й楚０""           弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	getchar();
	system("cls");
}
void woman_ms_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:團戮嬴 寰喟?                         弛\n");
		printf("弛 團戮 : 寰喟! 試盪 翱塊п醜憮 堅葆錶            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:嶸嬴掖幫婁塭堅 菟歷朝等 з掖儅��  橫陽? 弛\n");
		printf("弛 團戮 : 錠錠~熱機 薑蜓 營塹氅!                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:六六六六棻ч檜棻 辦葬 樹薯 и廓 虜陳梱?         弛\n");
		printf("弛 團戮 : 斜楝啪 辦葬 樹薯 虜釭朝啪 謠擊梱?               弛\n");
		printf("弛 渡褐:擠’ 釭 輿蜓縑朝 Щ葬и等 傘紫 輿蜓縑 и鬼 陛濠!弛\n");
		printf("弛 團戮 :螃 謠棻謠棻~! 釭紫 и鬼 陛爾堅 談歷橫!!          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:斜楚六六 斜歲 辦葬 饜蹂橾縑 虜釭濠!!        弛\n");
		printf("弛 團戮 : 錠! 饜蹂橾縑 瑭!><                          弛\n");
		printf("弛 團戮檜諦 褻旎擎 陛梱錶霞 匙 偽棻.                  弛\n");
		printf("弛 團戮檜縑 渠п 褻旎擎 憲啪 脹 匙 偽棻!              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 寰喟 �公� 雖�素� 耀掘 蜃嬴??             弛\n");
		printf("弛 渡褐:橫 寰喟~! 傘陛 雖�素� 耀掘 團戮檜掘釭~            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 錠 冗冗 啻 樽晦 號檜 菟歷橫.                弛\n");
		printf("弛  雖�素怜� 傘 樵羶 雜ж棻堅 ж渦塭掘^^~             弛\n");
		printf("弛 渡褐:釭紫 葆雙陛雖撿 辦葬 樹薯 虜釭朝啪 謠擊梱?  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 擠’陪 樹薯 虜釭紫 鼻婦橈橫!~              弛\n");
		printf("弛 團戮檜朝 葬萄蒂 澀 跤ж朝 匙 偽棻.               弛\n");
		printf("弛 頂陛 試盪 薑ж朝啪 釭擊 匙 偽棻!                 弛\n");
		printf("弛 渡褐:斜楝賊 辦葬 輿蜓縑 и鬼 陛朝剪 橫陽?      弛\n");
		printf("弛 釭 饜蹂橾縛 衛除檜 惘雛剪萇!                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		printf("團戮 :斜楚 斜楚!! 斜歲 饜蹂橾縑 爾濠\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:斜楚~饜蹂橾縑 瞰渠 棵雖葆!!             弛\n");
		printf("弛 團戮 : 錠! 饜蹂橾縑 瑭!><                      弛\n");
		printf("弛 辦葬朝 橫替薑紫 陛梱錶霞 匙 偽棻.              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:斜楝啪 凳ж雖? 虞鼻 螃棲梱 賅腦啊啻       弛\n");
		printf("弛 團戮 : 斜歲 骯疇檜塭紫 й梱?                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 謠嬴 釭 務朝剪 謠嬴п                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 斜楝啪~ 橫! 該葬縑 欽Ё濟檜 雲橫螺橫 陛虜�� 氈橫瑭~     弛\n");
		printf("弛 渡褐擎 團戮檜曖 棻薑и 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻.        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : (欽Ё濟擊 該葬縑 符戲貊) 釭紫 傘籀歲 蕨輓韓楚     弛\n");
		printf("弛 渡褐擎 團戮檜曖 敝罹遴 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 橫?; 喻概模葬陛 菟葬朝等? 幗蝶韁 ж釭瑭   弛\n");
		printf("弛 渡褐:嬴 斜楛陛? 斜歲 掘唳й楚?                 弛\n");
		printf("弛 團戮 : 斜楚~橡艇 陛爾濠~!                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 釭 幗蝶韁 謠嬴п~ 爾堅陛濠            弛\n");
		printf("弛 渡褐:斜楚~謠嬴! 釭紫 幗蝶韁 謠嬴п!        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 辦諾 釭嫌 鏃щ檜 僅偽棻><                 弛\n");
		printf("弛       嫦塭萄蒂 菟戲賊 馬撩檜 髦嬴釭朝 晦碟檜撿!  弛\n");
		printf("弛 渡褐:嬴 薑蜓??釭絲等冗冗冗                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 辦諾 鏃щ檜 霤 お楠蛤ж啻? 釭朝 嫦塭萄蒂 謠嬴п~  弛\n");
		printf("弛 渡褐:陪 嫦塭萄爾欽 ��м檜 謠嬴!                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 爾鏽 : 嬴.. 賸歎м棲棻                 弛\n");
		printf("弛 團戮檜曖 ル薑檜 謠雖彊棻               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 爾鏽 : 謁 嬴霜檜轄?                                    弛\n");
		printf("弛 渡褐: 盪�� 螃棺 籀擠 虜陬朝等 盪朝 葆擠縑 菟橫憮蹂^^ 弛\n");
		printf("弛 團戮檜曖 敝陛 說偃螺棻.                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : (詭景っ戲煎 橡掉擊 陛葬貊) 堅葆錶壬壬壬壬壬     弛\n");
		printf("弛 渡褐:六六六謁 睡莖楝錶п~!                           弛\n");
		printf("弛 團戮檜朝 衙辦 敝罹錫棻.                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮 : 橫橫..;憲啊橫                         弛\n");
		printf("弛 渡褐:橡艇 輿僥ж堅諦~~                     弛\n");
		printf("弛 團戮檜曖 ル薑檜 謠雖彊棻.                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 傘 詳擊還 嬴朝掘釭?                      弛\n");
		printf("弛 團戮檜朝 籐и 斜喪曖 賅蝗縑 衙溘擊 替票棻      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:傘紫 褻褕�� 詳橫 團戮嬴!                弛\n");
		printf("弛 團戮檜朝 棻薑и 斜喪曖 賅蝗擊 爾懊棻           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮:橫? 啻陛 頂朝剪撿? 裟輿朝 頂陛 髦啪!!     弛\n");
		printf("弛 渡褐:裟輿朝 и鬼陛憮 餌朝 勘煎!              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮:釭該雖 啗骯п輿撮蹂                       弛\n");
		printf("弛 檜勘煎朝 劃陛 睡褶ж棻’裟輿 и警 й梱?        弛\n");
		printf("弛 渡褐:斜楚 и鬼 陛憮 裟輿 и警ж濠!           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 釭紫 釭葷 惘雛懊橫~ 釭葷 惘雛嬴憮 棻ч檜棻~冗冗    弛\n");
		printf("弛 團戮檜曖 ル薑檜 嘐褕翻棻.                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 9) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐:釭紫 薑蜓 謠懊橫~! 棻擠縑紫 虜釭憮 啾楝 棻棲濠~!弛\n");
		printf("弛 團戮: 斜楚~! 斜剪 薑蜓 謠擎 儅陝檜棻!                  弛\n");
		printf("弛 團戮檜朝 褐檜 陪剪偽棻.                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 嘐寰и等 霞瞼 陛瑭撿 腆 剪 偽嬴! 橡艇 陛濠!弛\n");
		printf("弛 渡褐:斜楚~橫聶熱 橈檜 雖旎 陛撿啊啻~           弛\n");
		printf("弛 團戮檜曖 ル薑檜 嫩雖彊棻.                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 10) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮:斜楚!棻擠縑 傳 啾賊腎棲梱 橡艇 陛濠!!     弛\n");
		printf("弛 渡褐: 斜楚 橡艇 餵陛濠 睡賅椒 副薑ж衛啊棻!  弛\n");
		printf("弛 團戮檜朝 濠褐擊 檜пп醜憮 堅葆錶и棻.         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 棻ч檜棻 冗冗 橡艇 餵縑 陛濠~!     弛\n");
		printf("弛 渡褐:橡艇 等溥棻輿堅 傘紫 橡艇陛~!     弛\n");
		printf("弛 團戮:憲懊橫~ 橡艇陛濠! 邊棻!             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 11) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮: 嬴棲撿 衛除檜 號檜 棵橫憮 嬪яж棲械 頂陛 等溥棻 還啪  弛\n");
		printf("弛 渡褐:斜楚 斜歲! 堅葆錶~                                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

	}
}

void f_finish_ms(int total)
{
	if (total <= 41)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮曖 ル薑檜 謠雖 彊棻                      弛\n");
		printf("弛                                              弛\n");
		printf("弛 團戮 : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮曖 ル薑檜 嘐褕翻橫 爾檣棻                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 團戮 : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 團戮曖 ル薑檜 嫩棻                                     弛\n");
		printf("弛                                                        弛\n");
		printf("弛 團戮 : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}


void woman_jh(char p, person *user)
{


	do {

		printf("忙式式式式式式式式式式式式式<矇攪 1. 蘋驚>式式式式式式式式式式式忖\n");
		printf("弛 爾塋檜陛 耀掘蒂 模偃п鍍棻                                   弛\n");
		printf("弛 翱塊籀蒂 嫡懊朝等 橫飩啪 п撿й梱?                           弛\n");
		printf("弛                                                              弛\n");
		printf("弛 A:試盪 蘋驚擊 и棻.                                          弛\n");
		printf("弛 B:翱塊擊 晦棻萼棻.                                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式 <矇攪 2. 羅 虜陴>式式式式式式式式式式式式式式式忖\n");
		printf("弛 擒樓ц湍 衛除檜 棻陛螃堅 氈棻.                                       弛\n");
		printf("弛 盪 詩葬憮 雖�ぜ抸� Щ煎в 餌霞婁 毯擎 餌塋檜 憮 氈棻.                弛\n");
		printf("弛 雖�ぜ抴� 餌霞爾棻 澀儅曹 匙 偽棻.                                    弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 渡褐: 寰喟! 傘 雖�ぜ� 蜃雖??                             弛\n");
		printf("弛 雖�� : 橫 寰喟?? �公� 號檜 晦棻溜橫                                  弛\n");
		printf("弛 渡褐:  嬴傍~寞旎 諮橫!                                             弛\n");
		printf("弛 A:辦葬 檜薯 凳й梱?                                                  弛\n");
		printf("弛 B:陳噢紫 謠擎等 辦葬 骯疇й梱?                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 薑瞳檜 �撣打�. 輿滲縑 欽Ё檜 蕨際啪 僭菟橫 氈棻.                     弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:(欽Ё擊 詩葬憮 夥塭爾貊) 諦~欽Ё檜 蕨際棻!                         弛\n");
		printf("弛 B:(欽Ё濟擊 該葬縑 符戲貊) 釭 蕨輓?                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝  橫替 薑紫 橫儀л檜 ヴ萼 匙 偽棻.                             弛\n");
		printf("弛 辦葬朝 務棻陛 餌塋檜 路溥氈朝 夠戲煎 щц棻.                         弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 雖�� : 橫? 罹晦 餌塋 號檜 路溥氈朝等 凳ж朝 剪雖?                    弛\n");
		printf("弛 A:鼠蝦橾 氈朝剪 嬴棲撿?? 棻艇 望煎 陞梱?                             弛\n");
		printf("弛 B:幗蝶韁 ж朝剪 偽擎等 掘唳й楚?                                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式式式<矇攪3 幗蝶韁>式式式式式式式式式式式式式式式忖\n");
		printf("弛 (喻楚醞)                                                             弛\n");
		printf("弛 雖�� : 喻楚 澀 睡艇棻. 傘朝 鼠蝦 喻楚 謠嬴п?                        弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:釭朝 嫦塭萄 謠嬴п~                                                弛\n");
		printf("弛 B:釭朝 ��м擊 謠嬴п~                                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);




	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 骨濠晦 頂 擅戲煎 葆檜觼陛 棻陛諮棻                                   弛\n");
		printf("弛 爾鏽 : 剪晦 舒 碟 碟嬪晦陛 謠戲衛啻蹂~ 鼠蝦 餌檜撮蹂?                弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:(渡�笞牉�) 盪�� 耀掘縑蹂                                           弛\n");
		printf("弛 B:(齒噙楝錶ж貊) 盪�� 嬴霜 嬴鼠 餌檜 嬴棲縑蹂                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式式式<矇攪4 溯蝶饜嫌>式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 溯蝶饜嫌縑 菟橫諦 濠葬縑 導懊棻.                              弛\n");
		printf("弛 霜錳碟檜 詭景っ擊 輿樟棻.                                            弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 渡褐: 辦葬 凳 詳擊梱?                                              弛\n");
		printf("弛 雖�� : 釭朝 だ蝶顫 詳戲溥堅 ж朝等 傘朝 蝶纔檜觼 詳擊楚?             弛\n");
		printf("弛 註褐: 斜楚 釭 堅晦 謠嬴у!!                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 霜錳 : 槳椒 輿僥 紫諦萄葬啊蝗棲棻.                                   弛\n");
		printf("弛 雖�� : 梱腦爾釭塭 ж釭嫌 寰褕蝶纔檜觼 ж釭 輿撮蹂.                   弛\n");
		printf("弛 渡褐擎 雖�ぜ抸� 輿僥ж朝 賅蝗縑 撲�捎�.                           弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:雖�ず� 傘 輿僥腎啪 澀и棻~~                                        弛\n");
		printf("弛 B:雖�ず� 傘 輿僥ж朝剪  傘鼠 詣氈棻~                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 擠衝檜 釭諮棻                                                        弛\n");
		printf("弛 雖�� : (鼠褕�� 蝶纔檜觼蒂 賭橫遽棻.)                                 弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:橫 雖�ず� 頂陛 賭橫紫 腎朝等 堅葆錶!                               弛\n");
		printf("弛 B:傘紫 褻褕п~                                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 嫣擊 棻 詳堅 啗骯渠 擅戲煎 鬲棻.                              弛\n");
		printf("弛 識陛問擎 32000錳檜 釭諮棻.                                           弛\n");
		printf("弛 雖��: 儅陝爾棻 號檜 釭諮啻...                                        弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:(蘋萄蒂 勒啻貊)棻 啗骯п輿撮蹂.                                    弛\n");
		printf("弛 B:ж釭 試盪 啗骯п輿撮蹂                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("忙式式式式式式式式式式式式式<矇攪5: и鬼奢錳>式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 裟輿諦 翔濠葬蒂 陛雖堅 諦憮 濠葬蒂 濩懊棻.                    弛\n");
		printf("弛 雖��: 螃棺 ж瑞 橫雅橫?                                              弛\n");
		printf("弛                                                                      弛\n");
		printf("弛 A:釭葷 惘雛懊橫!!傘朝 橫雅橫?                                        弛\n");
		printf("弛 B:釭朝 謠懊橫!!傘朝 橫雅橫?                                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖��: 辦葬 檜薯 餵縑 陞梱?? 頂陛 檜薯 陛瑭撿 腋憮...                    弛\n");
		printf("弛                                                                                  弛\n");
		printf("弛 A:辦葬 30碟虜 渦 氈棻 陛賊 寰腆梱?? 唳纂陛 傘鼠 謠嬴~!                           弛\n");
		printf("弛 B:斜楚斜楚~ 衛除檜 弊賦 檜溢啪 腑啻! 橡艇 陛濠! 釭紫 檜薯 陛瑭撿 腆 剪 偽嬴~     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 撿唳擊 爾賊憮 餵擊 陛晦 嬪п 勘橫陛堅 氈棻.                               弛\n");
		printf("弛 雖��: 嬴... 衛除檜 號檜 棵歷戲棲梱 頂陛 傘啻 餵梱雖 等溥棻 還啪.              弛\n");
		printf("弛                                                                                  弛\n");
		printf("弛 A:斜楚~ 斜歲 釭撿 堅蛾雖~!                                                       弛\n");
		printf("弛 B:嬴棲撿~ 釭 �母� 陛紫 鼻婦橈橫~                                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_jh_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.                            弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜縑 渠и 頂葆擠擊 憲葬堅 談棻.                         弛\n");
	printf("弛 雖��: 螃棺 薑蜓 營嘐氈歷堅, 棻擠縑 晦�� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠!           弛\n");
	printf("弛 渡褐:濡械...!雖�ず籲! 釭 й 樽晦陛 氈橫...  ""辦葬翱擁 й楚０""                    弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 雖�ず� 寰喟?                                                弛\n");
		printf("弛 雖�� : 橫 斜楚 寰喟~                                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 奢渠棻棋棻貊!斜歲 婁з檜釭 熱з 澀ж啊渡~!                              弛\n");
		printf("弛 雖�� : 橫~釭際雖 彊啪 п.                                                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 螃 詣氈渡!辦葬 饜蹂橾縑 虜釭晦煎 и剪 晦橘ж雖 ?                        弛\n");
		printf("弛 雖�� : 橫 6衛縑 虜釭晦煎 и剪 蜃雖?                                              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 錠錠!辦葬 饜蹂橾縑 и鬼 陛濠!                                           弛\n");
		printf("弛 雖�� : 謠嬴~斜歲 饜蹂橾 6衛縑 и鬼奢錳縑憮 虜釭濠.                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 斜楚~!!斜歲 饜蹂橾縑 瑭~澀濠!                                           弛\n");
		printf("弛 雖�� : 斜楚 傘紫 澀濠!                                                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�ぜ抰� 褻旎擎 陛梱錶霞 匙 偽棻.                                                弛\n");
		printf("弛 雖�ぜ抴� 腎啪 籐ж堅 ル⑷擊 澀 跤ж朝 匙 偽棻.                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 盪晦 傘陛 �鬄瑰� 耀掘 蜃嬴??                                         弛\n");
		printf("弛 渡褐 : 橫 寰喟~!傘陛 �鬄瑰� 耀掘 雖�ぜ戔董泠                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 橫 虜釭憮 奩陛錶 啻 樽晦 號檜 菟歷橫.�鬄瑰怜� 傘 鼠繫 雜ж棻堅 ж渦塭     弛\n");
		printf("弛 渡褐 : 六六六釭紫 葆雙陛雖撿 辦葬 饜蹂橾縑 虜釭晦煎 и 剪 晦橘ж雖 ?           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 橫~辦葬 橫蛤憮 虜釭朝啪 謠擊梱 ?                                          弛\n");
		printf("弛 雖�ぜ抴� ル⑷擊 澀 跤ж朝剪 偽棻.頂陛 濰模蒂 薑п撿啊棻!                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 斜楝賊 辦葬 輿蜓縑 и鬼 陛朝剪 橫陽 ? и鬼 撿唳 爾朝啪 薑蜓 謠剪萇!     弛\n");
		printf("弛 雖�� : 謠擎剪 偽嬴.斜歲 6衛縑 и鬼 奢錳 擅縑憮 虜釭濠.                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 斜楨~饜蹂橾縑 爾濰!澀濠!                                                弛\n");
		printf("弛 辦葬朝 橫替 薑紫 らп霞 匙 偽棻.                                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖��:斜楝啪 凳ж雖? 虞鼻 螃棲梱 賅腦啊棻                                         弛\n");
		printf("弛 碟嬪陛陛 褕鼻纂 彊棻.                                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐: 斜歲 骯疇檜塭紫 й梱?                                                    弛\n");
		printf("弛 雖�� : 橫~釭際雖 彊嬴.                                                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� :斜楚~釭 務朝剪 謠嬴~                                                       弛\n");
		printf("弛 辦葬朝 務晦 衛濛ц棻.                                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 斜楝啪~ 該葬縑 欽Ё濟 雲橫螺橫. 濡械虜.                                   弛\n");
		printf("弛 渡褐檜朝 雖�ぜ抸� 棻薑и 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻.                        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : (Я衝 醒戲貊) 仄..橫~ 敝膨棻.                                             弛\n");
		printf("弛 渡褐擎 雖�ぜ抸� 儀棻艇 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻.                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 喻概模葬陛 菟葬朝等? 幗蝶韁 ж釭瑭 .                                      弛\n");
		printf("弛 渡褐: 嬴 斜楛陛? 斜歲 掘唳й楚?                                                弛\n");
		printf("弛 辦萼 橫儀ж啪 幗蝶韁ж朝夠戲煎 陛晦煎ц棻.                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 3) = 5;

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 斜歇梱? 頂陛 謠嬴ж朝 喻楚剪萇.                                           弛\n");
		printf("弛 渡褐朝 幗蝶韁ж朝等煎 殖溥鬲棻.                                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 釭紫 嫦塭萄 謠嬴ж朝等 嫦塭萄蒂 菟戲賊 劃陛 離碟п雖朝 替釵檜 菟橫..      弛\n");
		printf("弛 辦萼 憮煎 奢馬檜 腎歷棻.                                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : 嬴 斜楚? 陪 嫦塭萄蒂 渦 謠嬴п..                                          弛\n");
		printf("弛 辦萼憮煎 歙陞溜棻.                                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 爾鏽 : 嬴.. 賸歎м棲棻.                                                          弛\n");
		printf("弛 雖�ぜ抸� ル薑檜 謠雖 彊嬴 爾檣棻.                                                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 爾鏽 : 謁 嬴霜檜轄?.                                                             弛\n");
		printf("弛 渡褐: 盪�� 螃棺 籀擠 虜陬朝等 盪朝 葆擠縑 菟橫憮蹂^^.                          弛\n");
		printf("弛 雖�ぜ怜� 渡�笞媋牉� 敝陛 說偃螺棻.                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : (敝陛 說偃雖貊) 丑..斜楚? 堅葆錶                                          弛\n");
		printf("弛 雖�ぜ抴� 薑蜓 堅葆錶ж朝剪 偽懊棻.                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�� : (渡�笞媋牉�)仄..橫 堅葆錶..                                               弛\n");
		printf("弛 雖�ぜ怜� 號檜 睡氬蝶楝錶 ж堅氈棻.                                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖�ぜ抴� 堅葆錶ж朝 斜喪曖 賅蝗縑 衙溘擊 替票棻.                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖�ぜ抴� 棻薑и 斜喪曖 賅蝗擊 爾懊棻.                                             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖��:橫? 啻陛 頂朝剪撿? 裟輿朝 頂陛 髦啪!                                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛檜勘煎朝 劃陛 睡褶ж棻’裟輿 и警 й梱?                                           弛\n");
		printf("弛渡褐:斜楚 и鬼 陛憮 裟輿 и警ж濠!                                              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛釭紫 釭葷 惘雛懊橫~ 釭葷 惘雛嬴憮 棻ч檜棻.                                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛釭紫 薑蜓 謠懊橫~ 棻擠縑紫 虜釭憮 啾楝 陞楚?                                      弛\n");
		printf("弛渡褐: 斜楚~! 斜剪 薑蜓 謠擎 儅陝檜棻!                                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");




		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖��: 嘐寰и等 霞瞼 陛瑭撿 腆 剪 偽嬴.                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖��;堅葆錶~~棻擠縑 傳 啾賊腎棲梱 螃棺擎 罹晦梱雖 ж濠                            弛\n");
		printf("弛渡褐: 斜楚~! 斜剪 薑蜓 謠擎 儅陝檜棻!                                           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖��: 號檜 棵歷戲棲梱 橡艇 陛濠.                                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛雖��: 嬴棲撿 衛除檜 號檜 棵橫憮 嬪яж棲械 頂陛 等溥棻 還啪                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
		break;
	}
}

void f_finish_jh(int total)
{
	if (total <= 41)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�ぜ抸� ル薑檜 謠雖 彊棻                    弛\n");
		printf("弛                                              弛\n");
		printf("弛 雖�� : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�ぜ抸� ル薑檜 嘐褕翻橫 爾檣棻                    弛\n");
		printf("弛                                                    弛\n");
		printf("弛 雖�� : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 雖�ぜ抸� ル薑檜 嫩棻                                   弛\n");
		printf("弛                                                        弛\n");
		printf("弛 雖�� : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}
void woman_ds(char p, person *user)
{
	do {
		printf("忙式式式式式式式式< 矇攪 1. 蘋驚 >式式式式式式式忖\n");
		printf("弛 雖�素怜� 耀掘蒂 模偃п鍍棻                   弛\n");
		printf("弛 翱塊籀蒂 嫡懊朝等 橫飩啪 п撿й梱?           弛\n");
		printf("弛                                              弛\n");
		printf("弛 A:試盪 蘋驚擊 и棻                           弛\n");
		printf("弛 B:錠! 饜蹂橾縑 瑭!><                         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ds_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式< 矇攪2. 羅 虜陴 >式式式式式式式式式忖\n");
		printf("弛 擒樓ц湍 衛除檜 棻陛螃堅 氈棻.                         弛\n");
		printf("弛 盪 詩葬憮 翕戮檜曖 Щ煎в 餌霞婁 毯擎 餌塋檜 憮 氈棻   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮檜朝 餌霞爾棻 澀儅曹 匙 偽棻.                    弛\n");
		printf("弛 渡褐 : 寰喟! 傘 翕戮檜 蜃雖??                弛\n");
		printf("弛 翕戮 : 橫 寰喟?? 頂陛 澀儅啖憮 夥煎 爾艘雖?冗冗      弛\n");
		printf("弛 渡褐 :  六六六六六堯氬紫 霤!!                      弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A:辦葬 檜薯 凳й梱?                                  弛\n");
		printf("弛 B: 陳噢紫 謠擎等 辦葬 骯疇й梱?.                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 薑瞳檜 �撣打�. 輿滲縑 欽Ё檜 蕨際啪 僭菟橫 氈棻.     弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A: (欽Ё擊 詩葬憮 夥塭爾貊) 諦~欽Ё檜 蕨際棻!        弛\n");
		printf("弛 B: (欽Ё濟擊 該葬縑 符戲貊) 釭 蕨輓?                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 橫儀л檜 ヴ萼 匙 偽棻.                        弛\n");
		printf("弛 辦葬朝 務棻陛 餌塋檜 路溥氈朝 夠戲煎 щц棻.         弛\n");
		printf("弛 翕戮 : 橫? 盪晦 餌塋菟檜 號檜 氈朝等 鼠蝦 橾檜雖?    弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A: 鼠蝦橾 氈朝剪 嬴棲撿?? 棻艇 望煎 陞梱?            弛\n");
		printf("弛 B: 幗蝶韁 ж釭瑭~ 掘唳й梱?                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式<矇攪3 幗蝶韁>式式式式式式式式忖\n");
		printf("弛 (喻楚醞)                                       弛\n");
		printf("弛 翕戮 : 喻楚 澀и棻~ 傘朝 鼠蝦 喻楚 謠嬴п?     弛\n");
		printf("弛                                                弛\n");
		printf("弛 A:釭朝 嫦塭萄 謠嬴п~                          弛\n");
		printf("弛 B:釭朝 ��м擊 謠嬴п~                          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		scanf("%c", &p);
		woman_ds_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 骨濠晦 頂 擅戲煎 葆檜觼陛 棻陛諮棻                   弛\n");
		printf("弛 爾鏽 : 剪晦 舒 碟 碟嬪晦陛 謠戲衛啻蹂~ 鼠蝦 餌檜撮蹂?弛\n");
		printf("弛                                                      弛\n");
		printf("弛 A:(渡�笞牉�) 盪�� 耀掘縑蹂                           弛\n");
		printf("弛 B:(齒噙楝錶ж貊) 盪�� 嬴霜 嬴鼠餌檜 嬴棲縑蹂~        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式 <矇攪4: 溯蝶饜嫌>式式式式式式式式式忖\n");
		printf("弛 幗蝶韁檜 部釭堅 辦葬朝 嫣擊 詳晦煎 ц棻.                   弛\n");
		printf("弛 辦葬朝 溯蝶饜嫌縑 菟橫諦 濠葬縑 導懊棻.                    弛\n");
		printf("弛 霜錳碟檜 詭景っ擊 輿樟棻.                                  弛\n");
		printf("弛 渡褐 : 辦葬 凳 詳擊梱?                                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 盪晦蹂~錚檜攪 罹晦 棺 詳湍勘煎 輿撮蹂!                      弛\n");
		printf("弛 霜錳 : 槳椒 螃棺 籀擠 瞄朝剪 偽擎等 輿僥擎 擅縑憮 紫諦 萄葬啊蝗棲棻弛\n");
		printf("弛 翕戮 : 啻..^^ 賸歎м棲棻...冗                                      弛\n");
		printf("弛 渡褐 檜朝 翕戮檜曖 賅蝗檜 傘鼠 敝罹錫棻                          弛\n");
		printf("弛                                                                    弛\n");
		printf("弛 A:惘雛嬴 翕戮嬴 敝罹錫橫 頂陛 輿僥ж堅 螢啪~~                      弛\n");
		printf("弛 B: �琱誘誘誘遜嗾� 斜啪 橡艇 擅縑 陛憮 輿僥ж堅 諦                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		scanf("%c", &p);
		woman_ds_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式忖\n");
		printf("弛 擠衝檜 釭諮棻                  弛\n");
		printf("弛 翕戮 : 褻偃皎韓 褻褕п憮 詳橫~ 弛\n");
		printf("弛                                弛\n");
		printf("弛 A:翕戮嬴 褻偃 詳橫 瑭夥~!      弛\n");
		printf("弛 B: 傘紫 褻褕п~                弛\n");
		printf("戌式式式式式式式式式式式式式式式式戎 \n");

		scanf("%c", &p);
		woman_ds_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 辦葬朝 嫣擊 棻 詳堅 啗骯渠 擅戲煎 鬲棻.弛\n");
		printf("弛 識陛問擎 32000錳檜 釭諮棻.             弛\n");
		printf("弛 翕戮: 儅陝爾棻 號檜 釭諮啻’.          弛\n");
		printf("弛                                        弛\n");
		printf("弛 A:(蘋萄蒂 勒啻貊)棻 啗骯п輿撮蹂       弛\n");
		printf("弛 B: ж釭 試盪 啗骯п輿撮蹂.             弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式<矇攪5:и鬼奢錳>式式式式式式式式式式式忖\n");
		printf("弛 辦葬朝 裟輿諦 翔濠葬蒂 陛雖堅 諦憮 濠葬蒂 濩懊棻.            弛\n");
		printf("弛 翕戮:螃棺 ж瑞 橫雅橫?                                       弛\n");
		printf("弛                                                              弛\n");
		printf("弛 A:釭葷 惘雛懊橫!!傘朝 橫雅橫?                                弛\n");
		printf("弛 B: 釭朝 謠懊橫!!傘朝 橫雅橫?                                 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮:  辦葬 檜薯 餵縑 陞梱?? 頂陛 檜薯 陛瑭撿 腋憮’                 弛\n");
		printf("弛                                                                              弛\n");
		printf("弛 A:辦葬 30碟虜 渦 氈棻 陛賊 寰腆梱?? 唳纂陛 傘鼠 謠嬴~!                       弛\n");
		printf("弛 B: 斜楚斜楚~ 衛除檜 弊賦 檜溢啪 腑啻! 橡艇 陛濠! 釭紫 檜薯 陛瑭撿 腆 剪 偽嬴~弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 辦葬朝 撿唳擊 爾賊憮 餵擊 陛晦 嬪п 勘橫陛堅 氈棻.                             弛\n");
		printf("弛 翕戮:嬴... 衛除檜 號檜 棵歷戲棲梱 頂陛 傘啻 餵梱雖 爾蛤陛萄 п還啪 惘雛雖? 弛\n");
		printf("弛                                                                                弛\n");
		printf("弛 A:斜楚~ 斜歲 釭撿 堅蛾雖~!                                                     弛\n");
		printf("弛 B: 嬴棲撿~ 釭 �母� 陛紫 鼻婦橈橫~                                              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		scanf("%c", &p);
		woman_ds_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("忙式式式式式式式式式式式式式式式式 <矇攪6  辦葬 餵 擅>式式式式式式式式式式式忖\n");
	printf("弛 辦葬 餵 擅縑 棻棻腦堅 ④橫韓 衛除檜 橡葆 陴雖 彊懊棻.                    弛\n");
	printf("弛 疏螳氈湍 陛煎蛔檜 麵雖堅 斜縑 渠и 頂 葆擠擊 憲葬堅 談棻.                弛\n");
	printf("弛 翕戮: 螃棺 薑蜓 羚燭檜歷堅, 棻擠縑 晦�萼� 腎賊 斜隆 �契� 陛憮 啾棻 螃濠! 弛\n");
	printf("弛 渡褐 : 濡械....!釭 й 樽晦陛 氈橫.※辦葬 翱擁 й楚０§                 弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
}

void woman_ds_C1_Q1(char p, person *user)
{
	switch (p)
	{
	case'A':
		*sum = 7;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 渡褐 : 翕戮嬴 寰喟?                             弛\n");
		printf("弛 翕戮 : 寰喟!六六 虜釭憮 寞陛錶!                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 渡褐 : 傘朝 羹渠塭堅 菟歷朝等 з掖儅��  橫陽?        弛\n");
		printf("弛 翕戮 : 棻棍虜и等 熱機 菟擊 陽 葆棻 濡 螃渦塭六六      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 六六盪喔縑 橾鎰 濠撿雖~! 斬等 辦葬 樹薯 и廓 虜陳梱?弛\n");
		printf("弛 翕戮 : 蜀 偽嬴摹 雖旎 虜釭濠堅 ж堅 談擎等?冗冗              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 渡褐 : 六六六釭 輿蜓縑朝 Щ葬и等 饜蹂橾縑 и鬼 陛濠!弛\n");
		printf("弛 翕戮 : 螃 謠棻謠棻~! 釭紫 и鬼 陛爾堅 談歷橫!          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 渡褐: 斜楚六六 斜歲 辦葬 饜蹂橾縑 虜釭濠!!!  弛\n");
		printf("弛 翕戮 : 錠! 饜蹂橾縑 瑭!><.                     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮檜諦 褻旎擎 陛梱錶霞 匙 偽棻.                弛\n");
		printf("弛 翕戮檜縑 渠п 褻旎擎 憲啪 脹 匙 偽棻!            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮: 寰喟 �公� 雖�素� 耀掘  蜃嬴??            弛\n");
		printf("弛 渡褐: 橫 寰喟~! 傘陛 雖�素� 耀掘 翕戮檜掘釭~     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮 : 蜃嬴六六 傘 蕨際棻堅 菟歷朝等 餌褒檜歷掘釭?^^   弛\n");
		printf("弛 渡褐 : 六六六堅葆錶~! 辦葬 樹薯 虜釭朝啪 謠擊梱?     弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮: 擠’雖旎 虜陳梱?!冗冗                弛\n");
		printf("弛 翕戮檜朝 嶸該楝蝶и 匙 偽棻.               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛渡褐 : 六六六斜楝賊 辦葬 輿蜓縑 и鬼 陛朝 剪 橫陽? 釭 饜蹂橾縛 衛除檜 惘雛剪萇! 弛\n");
		printf("弛翕戮 : 斜楚 斜楚!! 斜歲 饜蹂橾縑 爾濠!                                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 渡褐 : 斜楚~饜蹂橾縑 瞰渠 棵雖葆!!       弛\n");
		printf("弛 辦葬朝 橫替薑紫 陛梱錶霞 匙 偽棻.          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮:斜楝啪 凳ж雖? 虞鼻 螃棲梱 賅腦啊啻     弛\n");
		printf("弛 渡褐 : 斜歲 骯疇檜塭紫 й梱?               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎 \n");

		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 謠嬴 釭 務朝剪 謠嬴п       弛\n");
		printf("弛 渡褐: 斜楚~斜歲 辦葬 覬 務濠!    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");;
		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 斜楝啪~ 橫! 該葬縑 欽Ё濟檜 雲橫螺橫 陛虜�� 氈橫瑭~ 弛\n");
		printf("弛 渡褐檜朝 翕戮檜曖 棻薑и 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻.  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 渡褐:(欽Ё濟擊 該葬縑 符戲貊) 釭 蕨輓?                   弛\n");
		printf("弛 翕戮 : (欽Ё濟擊 該葬縑 符戲貊)頂陛 渦 蕨際雖?             弛\n");
		printf("弛 渡褐擎 翕戮檜曖 嶸該蝶楝遴 賅蝗縑 �ㄟ阱� 替郭晦 衛濛ц棻.弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮 : 橫? 喻概模葬陛 菟葬朝等? 幗蝶韁 ж釭瑭弛\n");
		printf("弛 渡褐: 嬴 斜楛陛? 斜歲 掘唳й楚?           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 3) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮 : 釭 幗蝶韁 謠嬴ж朝等! 辦葬 偽檜 爾楝陛濠! 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 螃 釭嫌 鏃щ檜 僅偽啻!頂陛 馬撩檜 Ё睡п憮 斜楛雖 嫦塭萄陛 謠渦塭!弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 橫職雖 傘 蝶嚏 氈渦塭! 釭朝 嫦塭萄 謠嬴п~弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;

	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式忖\n");
		printf("弛 爾鏽 : 嬴.. 賸歎м棲棻       弛\n");
		printf("弛 翕戮檜曖 ル薑檜 謠雖彊棻     弛\n");
		printf("戌式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 爾鏽 : 謁 嬴霜檜轄?                                      弛\n");
		printf("弛 渡褐 : 盪�� 螃棺 籀擠 虜陬朝等 盪朝 葆擠縑 菟橫憮蹂^^  弛\n");
		printf("弛 翕戮檜朝 觼啪 醒戲貊 敝陛 說偃螺棻.                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮 : 橫..橫! 斜楚 頂陛 檜楛等朝 籀擠檜橫憮冗冗冗 弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮 : 斜楚撿啊棻...冗冗橡艇 鬲棻 螢啪~      弛\n");
		printf("弛 翕戮檜曖 ル薑檜 謠雖 彊棻.                   弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮檜朝 澀 穫啖輿朝 斜喪曖 賅蝗縑 衙溘擊 替票棻.  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛 翕戮檜朝 棻薑и 斜喪曖 賅蝗擊 爾懊棻.        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮:橫? 啻陛 餌朝剪撿? 斜歲 裟輿朝 頂陛 髦啪!!弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮:釭該雖 啗骯п輿撮蹂                       弛\n");
		printf("弛 翕戮: 檜勘煎朝 劃陛 睡褶ж啻’裟輿 и警 й梱?  弛\n");
		printf("弛 渡褐:斜楚 и鬼 陛憮 裟輿 и警ж濠!           弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮:釭紫 釭葷 惘雛懊雖~!          弛\n");
		printf("弛 骨濠晦 碟嬪陛 檜鼻п螺棻.          弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮:釭紫 薑蜓 謠懊橫~! 棻擠縑紫 虜釭憮 啾楝 棻棲濠~!    弛\n");
		printf("弛 渡褐: 斜楚~! 斜剪 薑蜓 授 蟾檜蝶!?                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮: 嘐寰и等 釭 霞瞼 陛瑭撿 腆 剪 偽嬴! 橡艇 陛濠!   弛\n");
		printf("弛 嬴蓮遴 葆擠擊 菴煎ж堅 辦萼 轎嫦ц棻.                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 斜楚斜楚~ 衛除檜 弊賦 檜溢啪 腑啻!         弛\n");
		printf("弛 橡艇 陛濠! 釭紫 檜薯 陛瑭撿 腆 剪 偽嬴~    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖   \n");
		printf("弛 翕戮: 斜楚! 橡艇 餵縑 陛鍔嬴~!                   弛\n");
		printf("弛 嬴蓮遴 葆擠擊 菴煎ж堅 辦萼 轎嫦ц棻.            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
		printf("弛 翕戮: 嬴棲撿 寰腋~                               弛\n");
		printf("弛 衛除檜 號檜 棵橫憮 嬪яж棲械 頂陛 等溥棻 還啪!  弛\n");
		printf("弛 渡褐: 堅葆錶~                                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("忙式式式式式式式式式式式式式忖\n");
		printf("弛 澀跤 殮溘ж樟蝗棲棻.     弛\n");
		printf("弛 棻衛 摹鷗п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式戎\n");
		break;

	}
}

void f_finish_ds(int total)
{
	if (total <= 41)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮曖 ル薑檜 謠雖 彊棻                      弛\n");
		printf("弛                                              弛\n");
		printf("弛 翕戮 : 辦葬 憮煎 澀 寰蜃朝剪 偽嬴            弛\n");
		printf("弛        斜楚憮 ... 擠... 辦葬朝 嬴棋剪 偽嬴   弛\n");
		printf("弛        薑蜓 嘐寰                             弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                      弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("渡褐曖 翱擁褒溘擎 醱問瞳殮棲棻\n");
		printf("檜薑紫賊 賅鷓樂煎 嬴棲褐陛蹂?\n");

	}
	else if (total <= 57)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮曖 ル薑檜 嘐褕翻橫 爾檣棻                      弛\n");
		printf("弛                                                    弛\n");
		printf("弛 翕戮 : 螃棺 惘雛晦朝 ц橫                          弛\n");
		printf("弛        斬等 憮煎陛 虜釭晦縛 褻旎 睡褶и剪 偽嬴     弛\n");
		printf("弛        辦葬 斜傖 耀掘煎 雖頂濠                     弛\n");
		printf("弛        寰喟 斜歲 澀雖頂                            弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("褻旎 嬴蓮辦衛啻蹂\n");
		printf("褻旎 渦 碟嫦ж衛賊 樂煎 驍轎!!\n");
	}
	else if (total <= 73)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛 翕戮曖 ル薑檜 嫩棻                                     弛\n");
		printf("弛                                                        弛\n");
		printf("弛 翕戮 : 頂陛 試盪 蜓ж溥堅 ц朝等...                    弛\n");
		printf("弛        傘陛 試盪 蜓ц啻? 斜楚! 辦葬 翱擁ж濠           弛\n");
		printf("弛        陪 螃棺 傘曖 ч翕 ж釭ж釭 棻 葆擠縑 菟渦塭     弛\n");
		printf("弛        釭蒂 謠嬴п醜憮 堅葆錶 Ⅵ                       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		printf("諫漁ж衛捱蹂!!\n");
		printf("檜薇 褒瞪殮棲棻 �倣昄�!!\n");
	}
}