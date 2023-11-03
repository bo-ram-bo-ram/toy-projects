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

void f_screen_first()   //�ʱ�ȭ�� �Լ�
{
	system("cls");
	struct owner inform[] = { {"1862007", "�躸��"}, {"1860016", "����"}, {"1860054", "Ȳ��ȯ"} };
	struct owner *p = inform;
	int size = sizeof(inform) / sizeof(inform[0]);

	puts("������������������������������������������������������������������������������");
	puts("��    ?                            ��                                       ��");
	puts("��                  ��                     ?         ��            ?        ��");
	puts("��                                                                          ��");
	puts("��      ��                                                                  ��");
	puts("��                                 ����       ��                  ��        ��");
	puts("��                       ��   ��    ��  ����  ����  �� ��                   ��");
	puts("�� ��        ?           ��                   ��                            ��");
	puts("��                                                           ��         ?   ��");
	puts("��                                                                          ��");
	puts("��         ��                        ?                                      ��");
	puts("��             ?        ��                                                  ��");
	puts("��                           ?               ��                       ��    ��");
	puts("������������������������������������������������������������������������������");

	for (int i = 0; i < size; i++)
	{
		printf("                                                  %s      %s               \n", (p + i)->number, (p + i)->name);
	}
	printf("             [����ȭ������ �Ѿ���� ����Ű�� ��������]\n\n");
	printf("                        - PRESS ENTER KEY- \n");

	_getch();
}
void set_first(person *user)
{
	do {
		printf("��������������������������������������������������������������������\n");
		printf("�� ����� ���� �ɷ��� �׽�Ʈ�غ�����!                             ��\n");
		printf("�� '�츮 ���� �ҷ���'�� ���Ű� ȯ���մϴ�                         ��\n");
		printf("�� �� ������ ȸ���̽Ű���?                                        ��\n");
		printf("�� A:�ƴϿ�     B:��!                                             ��\n");
		printf("�� ��ù ���� ȸ�������� �ؾ��մϴ١�                            ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &a);
		if (a != 65 && a != 66)
		{
			system("cls");
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (a != 65 && a != 66);
	member(a);
	getchar();
	system("cls");


	do {
		printf("��������������������������������������������������������������\n");
		printf("�� �ȳ��ϼ���                                                 ��\n");
		printf("�� ����� ������ �����ΰ���?                                ��\n");
		printf("�� A:���ڿ���     B:���ڿ���                                ��\n");
		printf("��������������������������������������������������������������\n");
		scanf("%c", &gender);

		if (gender != 65 && gender != 66)
		{
			system("cls");
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (gender != 65 && gender != 66);

	switch (gender)
	{
	case 'A':
	{
		printf("��������������������������������������������������������������\n");
		printf("�� ��1. �ڹ���                                              ��\n");
		printf("�� ���� : ������Ű�                                        ��\n");
		printf("�� ����Ű�� �Ϳ��� �̹���                                   ��\n");
		printf("�� �� ���� ������ ���ϴ� ����                               ��\n");
		printf("��������������������������������������������������������������\n");

		printf("��������������������������������������������������������������\n");
		printf("�� ��2. ���̷�                                              ��\n");
		printf("�� ���� :�̼�������                                         ��\n");
		printf("�� �Ⱥη����� ������ �̹���                                 ��\n");
		printf("�� �Ⱥη����� ǥ���� ������                                 ��\n");
		printf("�� ���� �Ͽ� �ּ��� ���ϴ� ����                             ��\n");
		printf("��������������������������������������������������������������\n");

		printf("��������������������������������������������������������������\n");
		printf("�� ��3, �赵��                                              ��\n");
		printf("��  ���� : �������                                       ��\n");
		printf("�� ���ڸ��� �����ϸ� ��������                               ��\n");
		printf("�� Ȱ���ϰ� ���� ����                                       ��\n");
		printf("��������������������������������������������������������������\n");
		break;
	}

	case 'B':
	{
		printf("��������������������������������������������������������������\n");
		printf("�� ��4. �ֹμ�                                              ��\n");
		printf("��  ���� :���Ʊ�����                                        ��\n");
		printf("��  �ֱ��� ���� �Ϳ��� �̹���                               ��\n");
		printf("��  ���带 �� ���Ѵ�                                        ��\n");
		printf("��  �� ì���ִ� ����                                        ��\n");
		printf("��������������������������������������������������������������\n");

		printf("��������������������������������������������������������������\n");
		printf("�� ��5. ������                                              ��\n");
		printf("�� ���� :������Ű�                                         ��\n");
		printf("�� �����ϳ� �� ì���ش�                                     ��\n");
		printf("�� �β������� ���� �׷� ��Ȳ�� �Ⱦ��Ѵ�                     ��\n");
		printf("�� ǥ���� ������                                            ��\n");
		printf("��������������������������������������������������������������\n");

		printf("��������������������������������������������������������������\n");
		printf("�� ��6, ������                                              ��\n");
		printf("�� ���� :�������ǰ������а�                                 ��\n");
		printf("�� ���� ���ϸ� ���ӷ����� ����                              ��\n");
		printf("�� ������ ģ���� ������ �ݹ� ����� ������                  ��\n");
		printf("��������������������������������������������������������������\n");
	}
	break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
		system("pause");
		system("cls");
		break;


	}

	do {
		printf("����������������������������������������������������\n");
		printf("�� ����� ������ �����ΰ���?                      ��\n");
		printf("����������������������������������������������������\n");
		scanf("%d ", &character);
		system("cls");

		if (character != 65 && character != 66)
		{
			system("cls");
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
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
		printf("�ڡ١ڡ١ڡ�ȸ�������� �����մϴ١ڡ١ڡ١ڡ�\n");
		Sign_up(&user);
		Login(&user);
		break;

	case 'B':
		system("cls");
		printf("�ڡ١ڡ١ڡٷα����� �����մϴ١ڡ١ڡ١ڡ�\n");
		Login(&user);
		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
		system("pause");
		system("cls");
		break;
	}
	return 0;

}

void Sign_up(person *user)
{
	int sum = 0;
	printf("������ �̸��� �Է����ּ���\n");
	printf("�̸� : \n");
	scanf("%s", user->name);



	printf("\n");
	printf("�̸��� �ּ� : ");
	scanf("%s", user->email);

	printf("\n");
	printf("ID : ");
	scanf("%s", user->ID);


	printf("\n");
	printf("password : ");
	scanf("%s", user->password);

	printf("\n");
	printf("Ȯ���� ���� �ٽ� �ѹ� �Է� ���ֻ���... \n");
	printf("password : ");
	scanf("%s", user->again_password);

	while (strcmp(user->password, user->again_password) != 0)
	{
		printf("password�� ���� �ٸ��ϴ�. �ٽ� �ѹ� �Է� ���ּ��� \n");
		scanf("%s", user->again_password);
	}

	file(user);

	printf("ȸ�����ԵǼ̽��ϴ�.\n");
	system("pause");
	system("cls");
	printf("�α����� ������ �ּ���.\n\n");


}


void Login(person *user)
{
	char buf[100];
	int check1 = 0;
	int check2 = 0;

	FILE *f;

	f = fopen("member.txt", "r");
	printf("ID�� �Է� : ");
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
		printf("��й�ȣ �Է� : ");
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
		printf("ȯ���մϴ� %s ��!\n", user->name);
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
		printf("������ ������ �ʽ��ϴ�");
		exit(1);
	}


	fprintf(f, "�̸� : %s �̸��� : %s ID : %s password : %s \n", user->name, user->email, user->ID, user->password);
	fprintf(f, "\r\n");
	fclose(f);
}

void man_mj(char p, person *user)
{

	do {
		printf("������������������������< é��1. ù ���� >��������������������������\n");
		printf("�� �������ΰ� ���� ���ڰ� �ֺ��� �����Ÿ���.                      ��\n");
		printf("�� ���:Ȥ�� ���� �Ҿ��������??                                ��\n");
		printf("������: ��!�¾ƿ�! ���� �����ֽðھ��?                           ��\n");
		printf("�� A:���� ã�Ƶ�����ϱ� �� �ѳ� ���ּ���!                        ��\n");
		printf("�� B:������ �׳� �����ش�.                                        ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C1_Q1(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("��������������������������< é�� 2. ��  �� >������������������������\n");
		printf("�� ��ī������ ������ ���������� ����ó�� ����.                ��\n");
		printf("��                                                                ��\n");
		printf("�� A:���� ������ �Ѵ�.                                            ��\n");
		printf("�� B: ���� ���⸦ ��ٸ���.                                       ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("����������������������< é��3. �������� ��ȭ�� ��>������������������\n");
		printf("�� ����: �˼��ؿ�!���� ��ٸ��̾��...? �ʾ �˼��ؿ�!          ��\n");
		printf("��                                                                ��\n");
		printf("��  A:�ƴϿ���~ �� ����~!                                       ��\n");
		printf("��  B:(�κ�����)�����ƿ�. �پ������ ���� �������?               ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C3_Q3(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("����������������������������������������������������\n");
		printf("�� ����:������ �� ��ð� ��������??               ��\n");
		printf("��                                                ��\n");
		printf("�� A:���� ���� �ƴµ��� �ִµ� �����?          ��\n");
		printf("�� B:���� �� ��������... ��������?                ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("����������������������< é��4. �� �� >����������������������\n");
		printf("�� �����Ⱑ �ʹ� �����ϴ�. �������̶� �غ��߰ڴ�!       ��\n");
		printf("��                                                        ��\n");
		printf("�� A:���� ����ɰ� ����� ���ִ�~!                        ��\n");
		printf("�� B:Ȥ�� �� �а��� ����?                                 ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("����������������������������������������������������\n");
		printf("�� ����:�޴��� ������ �� ��������..??             ��\n");
		printf("��                                                ��\n");
		printf("�� A:�� �ƹ��ų� �� ������~                       ��\n");
		printf("�� B:����� �����  ���־,                   ��\n");
		printf("��  �� ������ ��ų�ǵ� �ʵ� ���������?         ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������\n");
		printf("�� �츮�� ����� �ֹ��ߴ�. �������帥��. ��� �ؾ��ұ�?     ��\n");
		printf("��                                                              ��\n");
		printf("�� A:�ʹ� ��ݾ����� �� ��������??                              ��\n");
		printf("��  ���� ������ �� ���ϰŵ社��                                 ��\n");
		printf("�� B:������ �ʹ� ���� �ɸ��°� ����...                          ��\n");
		printf("������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������\n");
		printf("�� �츮�� ��Ų ������ ���Դ�.                             ��\n");
		printf("��                                                        ��\n");
		printf("�� A:(����)�� ���ִ�~  �ʵ� �� �Ծ��~                  ��\n");
		printf("��  �� �ٵ� ���� �����Ұ� ����...                         ��\n");
		printf("�� B:���� ��� ����ٰ�!                                ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������\n");
		printf("�� �츮�� �Ļ縦 ���ϰ� ������ ���Դ�.                  ��\n");
		printf("�� ����:���� �츮 ���� ��𰥱�?                        ��\n");
		printf("��                                                      ��\n");
		printf("�� A:�� ��ȭƼ�� �ִµ� ��ȭ���� ����?                  ��\n");
		printf("�� B:��޽ð��� ���ο� ���� ���Դµ� �Ϸ�����?        ��\n");
		printf("����������������������������������������������������������\n");

		scanf("%c", &p);
		man_mj_C4_Q9(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);



	do {
		printf("������������������������< é�� 5. ��ȭ�� >����������������������\n");
		printf("�� ����:���� ǥ����״ϱ� ���⼭ ��� ��ٸ���?               ��\n");
		printf("��                                                            ��\n");
		printf("�� A:��� �� ȭ��� ������ ���� �����߾�~!                    ��\n");
		printf("�� B:�˰ھ�~������ ���ٿ�!�� ���� �ɾ� ������~!               ��\n");
		printf("����������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������������������\n");
		printf("�� ��ȭ�� ���۵Ǿ���, ��ȭ�� ���� ���� �����̰� ȭ��ǿ� ���ٰ��ߴ�.      ��\n");
		printf("��                                                                        ��\n");
		printf("�� A:(�Ұ�Ұ�)���� ȭ��� ������ ���ε� ���� ����.                       ��\n");
		printf("�� B:(�ٸ��� ���� �ø���)�� ������ �Ⱥ���                               ��\n");
		printf("����������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C5_Q11(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������\n");
		printf("�� ����: ���� ��ݽð� ������ ���� ������ �ɰ� ����.          ��\n");
		printf("��                                                            ��\n");
		printf("�� A:�� �������� ����� �ִµ� �߰�~                          ��\n");
		printf("�� B:�ð��� ���� �ʾ����ϱ� ���� ������ ������ �ٰ�!          ��\n");
		printf("����������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mj_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);


	printf("����������������������������������������������������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.            ��\n");
	printf("�� �����ִ� ���ε��� ������ �׳࿡ ���� �������� �˸��� �ʹ�.       ��\n");
	printf("�� ����: ���� ���� ����־���!                                      ��\n");
	printf("��       ������ ��ȸ �Ǹ� �׶� ȫ�� ���� ��� ����!                 ��\n");
	printf("�� ���:���...! �� �� ��Ⱑ �־�...""�츮���� �ҷ���""              ��\n");
	printf("����������������������������������������������������������������������\n");
	getchar();
	system("cls");



}
void man_mj_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�� �׳�~! ���� ������ �ð��� ��� �����ֽø� �� ��帱����~ ��\n");
		printf("�� ���:�� �˰ھ��~                                                �� \n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:����� ���� ã���̴ּµ� ������ �ǹ̷� ���̶� ��帱�Կ�!   ��\n");
		printf("�� ���:������?�׷� ���� ����^^                                   ��\n");
		printf("������������������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷� ���� �帱�Կ�!                                           ��\n");
		printf("�� ���:��~ �ȳ��� ������~!                                         ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ���:�ȳ��ϼ���~ ���Ŀ� �ô� ���� ã�Ƶ�ȴ� ����̿���!         ��\n");
		printf("�� ����:��! �ȳ��ϼ���! �Ʊ� ���� �����߾��~ Ȥ�� ���� �ð� �Ǽ���?  ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������������������\n");
		printf("�� ���:�̹��� ����� ���?                                           ��\n");
		printf("�� ����:�� ���ƿ�~!�׷� ���� 6�ÿ� �л굿 �������� ��ȭ�� �տ��� ������!  ��\n");
		printf("�� ���:�� �׷� �׶��ƿ�~ �ֹ�����~~                                    ��\n");
		printf("����������������������������������������������������������������������������\n");
		system("pause");
		system("cls");

		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����: ���� �Ʊ� ���� ã���ֽź� �¾ƿ�?                            ��\n");
		printf("�� ���:�� �¾ƿ�~ �Ʊ� �� ���ֽŴٴ� ��� ������ �ұ��?           ��\n");
		printf("������������������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� ����: ��...�̹��� ����� ����7�ÿ�                         ��\n");
		printf("�� �л굿 �������� ��ȭ�� �տ��� �����°� ���?             ��\n");
		printf("�� ���:�� ���ƿ�~ �׷� ����Ͽ� �ƿ�!                      ��\n");
		printf("����������������������������������������������������������������\n");
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
		printf("����������������������������������������������������������������\n");
		printf("�� ����:���� ���� ��ٸ��� �Ѱ� ���ƿ�! �˼��ؿ�!             ��\n");
		printf("�� ���:�ƴ� �����ƿ�~���� ��� �Ծ��.                     ��\n");
		printf("����������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� ����:���� ��ٸ��� �ؼ� �˼��ؿ�Ф�                         ��\n");
		printf("�� ���:���� �����ƿ�! �ٴٰ� �Ѿ����� ��������?              ��\n");
		printf("�� ����:�פ��� �� �Ѿ������!                                   ��\n");
		printf("������������������������������������������������������������������\n");

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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����: ��! �� ��� �ǰ� �����ؿ�!!                                ��\n");
		printf("�� ���:�׷� ��� ������ ����~ �� ���� �������� �־��!           ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��! �ǰ� �˶��Ͻó׿�!!                                       ��\n");
		printf("�� ���:������~�� ���� ������ ����!                               ��\n");
		printf("�� �츮�� �Ĵ����� ���鼭 ���̰� �����̶� ����� �˾Ҵ�.              ��\n");
		printf("�� �׷��� �츰 ���� ���ϰ� �ϱ�� �ߴ�.                               ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��...�׷� ��� ����������~                                  ��\n");
		printf("�� ���:�� ���ƿ�~ �� ��� �����ؿ�~                              ��\n");
		printf("�� �츮�� �Ĵ����� ���鼭 ���̰� �����̶� ����� �˾Ҵ�.              ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��..���� ��մ�~���簳�� �����ϳ�����...?                     ��\n");
		printf("�� ���:��..�� ���簳�� �������ε� �� �����ؾ߰ڳ�...^^             ��\n");
		printf("�� ���簳�׸� �ϴٺ��� �����̰� ���� �������� �ʾҴ�.                 ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 4) = 6;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:���� ������Ű���!                                            ��\n");
		printf("�� ���:��~ �б���Ȱ�� �Ҹ���?                                      ��\n");
		printf("�� ������ �׷��� ������ �ǰ��ϰ� ���鶧�� �־�!                       ��\n");
		printf("�� �츮�� ���� �а��� ���ɻ縦 ���ٺ��� ���� ��ȭ�� ������.           ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��..������..�׳� �츮 �Ѵ� �������~                        ��\n");
		printf("�� ���:�׷���~ ���� ����� �԰� �ʹ���~                          ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷���! ���� �����ϴ°� �� ���ؼ� ��û ����ϰŵ社��         ��\n");
		printf("�� ���:���� �׷��µ������� �ϰ� ��� �Ծ��!                     ��\n");
		printf("�� ����:������ �����̶� �����ϱ� �������Ű���~                        ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������\n");
		printf("�� ����:���������ڱ�? �� ���� ��� ���� �ϴµ�,                 ��\n");
		printf("�� ������ ���� ���� �� �˷��ٱ�?                                ��\n");
		printf("�� ���:�� ����?? �׷� ���� ����^^!                         ��\n");
		printf("�� ���ο� ���� ��ȭ�� �ϴٺ��� �����̴� ��ſ� ������.          ��\n");
		printf("�� ��ſ� �ϴ� ��������� ���� ���Ҵ�.                          ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷���...�� �� ���� ������.                                   ��\n");
		printf("�� ���:�� ���� ��������. �� ���;����ٵ�..                       ��\n");
		printf("�� �����̴� ������ �޴����� �ϱ� �����ߴ�. ���� �߸� �Ѱɱ�??         ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�� �׷�...? �����ϸ� ���� �� �������� �Ծ�~                   ��\n");
		printf("�� ���:�� ��¥? �׷� ��������ʰ� ���ְ� ������~                   ��\n");
		printf("�� �����̴� ǥ���� �� ���� �ʾҴ�.                                    ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�� ����? ����! �� �� �ڻ��Ѱ� ����!                         ��\n");
		printf("�� ���:�ڻ��ϱ�~ ������ٵ� ���� �Ծ�!                             ��\n");
		printf("�� ����: ����~ �ʵ� ������ڴ�! �� �Ծ�!                          ��\n");
		printf("�� �츮�� �Ļ縦 �ϸ鼭 ���� ��ȭ�� ������.                           ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷��׷�~ ���� ��ȭ �������ڰ� �Ϸ��ߴµ� �� ��ȭ��������!  ��\n");
		printf("�� ���:�����ؼ� �����̴�~! �󸥰���!                               ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("��������������������������������������������������������������������������\n");
		printf("�� ����:���� ������ ���� �������ؼ� �׷��� ���� ��ȭ���� ���°� �? ��\n");
		printf("�� ���:�׷� �׷� ��ȭ��������~!                                      ��\n");
		printf("��������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��! ����?? �ʹ� ���ִ�~ ������ ���� ���!                     ��\n");
		printf("�� ���:���ֱ�~�ð� ���� �ٵƳ�~�� ����!                      ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("��������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �׷� ���� ������ �ɾƼ� ��ٸ��� �־�~                     ��\n");
		printf("�� ���:�׷� �׷� ������ ���ٿ�~!                                     ��\n");
		printf("��������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷�! �� ���ٿͼ� ��ȭ ��������!                            ��\n");
		printf("�� ���:����� �����ִϱ� �� ������!                              ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �� ����. ��ȭ������ �̾�.                              ��\n");
		printf("�� ���:�Ƴ� �� ���ٿ�~�� ����� ���ðŰ����ϱ�~                  ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�츮�� ���� ������ �ʹ� �����ѵ� �� �ձ����� �������ֶ�.    ��\n");
		printf("�� ���:�˾Ҿ�~ �׷� 10���̸����??                                 ��\n");
		printf("�� ����:��~�� ��� �ȴʰ� ���� ����~                                  ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:����?? �ʹ� ����~ ���� ���� ���Ƽ� ������ �� �����ŵ�Ф� ��\n");
		printf("�� ���:�������� ����~�θ���� �����Ͻðڴ�~                      ��\n");
		printf("�� ����:�׷�~ �� ����~!                                             ��\n");
		printf("������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������\n");
		printf("�� ������ ǥ���� ���� �ʴ�                      ��\n");
		printf("��                                              ��\n");
		printf("�� ���� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� ������ ǥ���� �̽�½�� ���δ�                      ��\n");
		printf("��                                                    ��\n");
		printf("�� ���� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� ������ ǥ���� ���                                     ��\n");
		printf("��                                                        ��\n");
		printf("�� ���� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}


void man_mr(char p, person *user)
{

	do {
		printf("������������������������< é��1. ù ���� >��������������������������\n");
		printf("�� �������ΰ� ���� ���ڰ� �ֺ��� �����Ÿ���.                      ��\n");
		printf("�� ���:Ȥ�� �����Ҿ�����ź� ����??                            ��\n");
		printf("�� �̷�:��...��..ã�� �ּż� �����մϴ�. ���� �ֽðھ��...?      ��\n");
		printf("��                                                                ��\n");
		printf("�� A:���� ã�Ƶ�����ϱ� �� �ѳ� ���ּ���!                        ��\n");
		printf("�� B:������ �׳� �����ش�.                                        ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C1_Q1(p, user);
		getchar();
		system("cls");



	} while (p != 65 && p != 66);


	do {
		printf("��������������������������< é�� 2. ��  �� >������������������������\n");
		printf("�� ��ī������ ������ ���������� ����ó�� ����.                ��\n");
		printf("��                                                                ��\n");
		printf("�� A:���� ������ �Ѵ�.                                            ��\n");
		printf("�� B: ���� ���⸦ ��ٸ���.                                       ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C2_Q2(p, user);
		getchar();
		system("cls");

	} while (p != 65 && p != 66);


	do {
		printf("����������������������< é��3. �������� ��ȭ�� ��>������������������\n");
		printf("��  �̷�:���� ��ٸ��̾��...? �ʾ �˼��ؿ�!                   ��\n");
		printf("��                                                                ��\n");
		printf("��  A:�� ��~ �� ���ô�~                                         ��\n");
		printf("��  B:�����ƿ�. �پ������ ���� �������?                         ��\n");
		printf("��������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C3_Q3(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������\n");
		printf("�� �̷�:������ �� ��ð� ��������??               ��\n");
		printf("��                                                ��\n");
		printf("�� A:���� ���� �ƴµ��� �ִµ� �����?          ��\n");
		printf("�� B:���� �� ��������... ��������?                ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C3_Q4(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("����������������������< é��4. �� �� >����������������������\n");
		printf("�� �����Ⱑ �ʹ� �����ϴ�. �������̶� �غ��߰ڴ�!       ��\n");
		printf("��                                                        ��\n");
		printf("�� A:���� ����ɰ� ����� ���ִ�~!                        ��\n");
		printf("�� B:�� ��̰� ����?                                      ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C4_Q5(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������\n");
		printf("�� �̷�:�޴��� ������ �� ��������..??             ��\n");
		printf("��                                                ��\n");
		printf("�� A:�� �ƹ��ų� �� ������~                       ��\n");
		printf("�� B:����� ����� �쵿�� ���ִٴµ�,           ��\n");
		printf("��   ���� �쵿 ��Ű�� �ʰ� ���������?          ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C4_Q6(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������\n");
		printf("�� �츮�� ����� �쵿�� �ֹ��ߴ�. �������帥��. ��� �ؾ��ұ�?    ��\n");
		printf("��                                                                    ��\n");
		printf("�� A:�� ���� �����Ѵ� �߾���?? Ȥ�� ���� �� �˷��ټ� �־�?            ��\n");
		printf("��   ���� ���и� B + �� ���԰ŵ�...��                                 ��\n");
		printf("�� B:������ �ʹ� ���� �ɸ��°� ����...                                ��\n");
		printf("������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C4_Q7(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������\n");
		printf("�� �츮�� ��Ų ������ ���Դ�.                             ��\n");
		printf("��                                                        ��\n");
		printf("�� A:�� ���� ���ִ�. �ʲ� ��� �� ������~               ��\n");
		printf("�� B:���� ��� ����ٰ�!                                ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C4_Q8(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������\n");
		printf("�� �츮�� �Ļ縦 ���ϰ� ������ ���Դ�.                  ��\n");
		printf("�� �̷�:���� �츮 ���� ��𰥱�?                        ��\n");
		printf("��                                                      ��\n");
		printf("�� A:�� ��ȭƼ�� �ִµ� ��ȭ���� ����?                  ��\n");
		printf("�� B:��԰� ���ϱ� �ҰԾ���...                          ��\n");
		printf("����������������������������������������������������������\n");

		scanf("%c", &p);
		man_mr_C4_Q9(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);


	do {
		printf("������������������������< é�� 5. ��ȭ�� >����������������������\n");
		printf("�� �̷�:���� ǥ����״ϱ� ���⼭ ��� ��ٸ���?               ��\n");
		printf("��                                                            ��\n");
		printf("�� A:��� �� ȭ��� ������ ���� �����߾�~!                    ��\n");
		printf("�� B:�˰ھ�~������ ���ٿ�!�� ���� �ɾ� ������~!               ��\n");
		printf("����������������������������������������������������������������\n");

		scanf("%c", &p);
		man_mr_C5_Q10(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������������������\n");
		printf("�� ��ȭ�� ���۵Ǿ���, ��ȭ�� ���� ���� �̷��� ȭ��ǿ� ���ٰ��ߴ�.        ��\n");
		printf("��                                                                        ��\n");
		printf("�� A:�׷�? �׷� ������ ���ٿ�~                                            ��\n");
		printf("�� B:(�ٸ��� ���� �ø���)�� ������ �Ⱥ���                               ��\n");
		printf("����������������������������������������������������������������������������\n");

		scanf("%c", &p);
		man_mr_C5_Q11(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	do
	{
		printf("����������������������������������������������������������������\n");
		printf("�� �̷�:��... ���� ��ݽð� ������ ���� ������ �ɰ� ����.     ��\n");
		printf("��                                                            ��\n");
		printf("�� A:�� �������� ����� �ִµ� �߰�~                          ��\n");
		printf("�� B:�ð��� ���� �ʾ����ϱ� ���� ������ ������ �ٰ�!          ��\n");
		printf("����������������������������������������������������������������\n");
		scanf("%c", &p);
		man_mr_C5_Q12(p, user);
		getchar();
		system("cls");


	} while (p != 65 && p != 66);

	printf("����������������������������������������������������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.            ��\n");
	printf("�� �����ִ� ���ε��� ������ �׳࿡ ���� �������� �˸��� �ʹ�.       ��\n");
	printf("�� �̷�: ���� ���� ����־���!                                      ��\n");
	printf("��       ������ ��ȸ �Ǹ� �׶� ȫ�� ���� ��� ����!                 ��\n");
	printf("�� ���:���...! �� �� ��Ⱑ �־�...""�츮���� �ҷ���""              ��\n");
	printf("����������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� �̷�:��...�� ������ �ð��� ��� ����ó �帱�״ϱ� �����ּ���.    ��\n");
		printf("�� ���:��! ���� �����ǰ� ������ �� ������!                       ��\n");
		printf("�� �׷��� ���� �̷���� ������ ��ȣ�� �޾Ҵ�.                         ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� �̷�:��...���� ������ �ǹ̷� �����ֽø� �� ��帱�Կ�.             ��\n");
		printf("�� ���:�� ��! �����ؿ�~                                             ��\n");
		printf("�� ���������ǰ� ������ �� ���ž� �Ұ� ���ƿ�!                       ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �̷�:��. �׷� ���� �����Կ�.                 ��\n");
		printf("�� �׷��� ���� �̷���� ������ ��ȣ�� �޾Ҵ�.   ��\n");
		printf("��������������������������������������������������\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������\n");
		printf("�� ���:�ȳ��ϼ���~ �Ʊ� ���� ã����� ����̿���!              ��\n");
		printf("�� �̷�:�� �ȳ��ϼ���. ���� �ٺ������� ���� ������ ����ȳ׿�.    ��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������\n");
		printf("�� ���:�ƴϿ���~ ���� ���� �������?                           ��\n");
		printf("�� ���� ������ �ȵǰ�, ������� �����Ұ� ���ƿ�                   ��\n");
		printf("�� �̷�:�׷� ����� ����6�ÿ� �������� ��ȭ������ �������?       ��\n");
		printf("�� ���:�� ���ƿ�! �׷� ����Ͽ� �ƿ�!                          ��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 1) = 3;
		system("cls");
		printf("����������������������������������������������������������\n");
		printf("�� �̷�:�� �Ʊ� ���Ŀ� ���� ã���̴ּ� �� �³���?       ��\n");
		printf("�� ���:�� �¾ƿ�~���� ���� �������?                 ��\n");
		printf("����������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� �̷�:��...�Ͽ��� ���� ���?                              ��\n");
		printf("�� ���:�� ���ƿ�! �׷� �Ͽ��� ����6�ÿ� ��ȭ���տ��� �ƿ�! ��\n");
		printf("����������������������������������������������������������������\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������\n");
		printf("�� �̷�:��...�� �˼��մϴ�. �󸥰���.                             ��\n");
		printf("�� ���:�ƴϿ���~ �� ���̳� ����������~                       ��\n");
		printf("�� �̷�:��...!���� �˼��ѵ� ���� �پ�ͼ� �׷��� ���� õõ�� ����.��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;




	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� �̷�:��..�ƴϿ��� �� �����ƿ�. ��ٸ��� �ؼ� �˼��ؿ�. ��\n");
		printf("�� ���:���� �ƴϿ���~���� �� �����ߴ°ɿ�??            ��\n");
		printf("�� �پ���ż� ����ŵ� ��� ��ġ�� �ɾҴ� ����.           ��\n");
		printf("������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������\n");
		printf("�� �̷�:�� ��.. �����ؿ�..!               ��\n");
		printf("�� �̷��� ����ɿ� ������ ����.           ��\n");
		printf("��������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������\n");
		printf("�� �̷�:�� �׷� �������� ������.          ��\n");
		printf("�� ���:�Ը��� ���������� ���ڳ׿�~!    ��\n");
		printf("��������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� �̷�:�� ���� ������ �߸Ծ��.                                ��\n");
		printf("�� ���:�׷��ٸ� �����̳׿�! �� ����~                       ��\n");
		printf("�� �츮�� �Ĵ��� ���鼭 ��ȭ�� ���� �����̶����� �˾Ҵ�.        ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 3) = 2;
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� �̷�:��...�׷��� ���� �ִ� �н������� ���Ƿ���?              ��\n");
		printf("�� ���:�� �׷���~ ���� �ƹ��ų� �� �߸Ծ��~                 ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� �̷�:��..�׷� �� ����.                                     ��\n");
		printf("�� ���:���� ������ �ȸԾ ����µ� �󸥰���!               ��\n");
		printf("���츮�� �Ĵ��� ���鼭 ��ȭ�� ���� �����̶����� �˾Ҵ�.         ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");

		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("������������������������������������������������\n");
		printf("�� �̷�:��...���� ��մ�...                   ��\n");
		printf("�� ���:�׷���? �׷� �ϳ� �� ���ٱ�??       ��\n");
		printf("������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:�װ� ��...�ƴѰ� ����..                       ��\n");
		printf("�� ���:��..�̾�. ��վ� �ϴ��� �˾Ҿ�..            ��\n");
		printf("�� ���:ū���̴�. �����Ⱑ �� ����������.           ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 4) = 6;
		system("cls");
		printf("��������������������������������������������������������������������\n");
		printf("�� �̷�:�� ���� �����ϴ°� ������                                 ��\n");
		printf("�� ���:�� ����?!?!�׷� ���߿� ���� ���� ���������� �����ҷ�??  ��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:�� �׷�~���� ��� ����.                       ��\n");
		printf("�� ���:�׷� ������ �� ���ؼ� ����!                 ��\n");
		printf("��������������������������������������������������������\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������\n");
		printf("�� �̷�:��....�׷� �� �쵿������?�̰� ���� ����Ʈ�޴���           ��\n");
		printf("�� ���:�׷��߰ڴ�~ �� ���԰�?                                  ��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������\n");
		printf("�� �̷�:�� ��� ��������.               ��\n");
		printf("�� ���:�̾�~ �װ͵� ���ְڳ�~          ��\n");
		printf("��������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("��������������������������������������������������������������������\n");
		printf("�� �̷�:�� �׷�? �׷� �װ� �Ծ�߰ڴ�. ��������?                  ��\n");
		printf("�� ���:�� �� ����� ��¥ ���־�! �� �ϰ� �Ծ��!             ��\n");
		printf("��������������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:�� �׷��߰ڴ�! �׷� �� �ϰ� ������~           ��\n");
		printf("�� ���:�׷��׷�!!                                  ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");

		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������������������������������\n");
		printf("�� �̷�: ���� ���ϱ� �ϴµ� ���� �� ����ġ�µ� ������?        ��\n");
		printf("�� ���:�� ������! �׷� ���߿� ���������� �˷���^^          ��\n");
		printf("����������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� �̷�:�׷� �ʵ� ���� �� �˷��� �� �־�?                       ��\n");
		printf("�� ���:�翬����~���� ������ ���� ���ϰŵ�!                   ��\n");
		printf("�� ���:�̷��� ���θ� �����ϴ°� ����.�����Ⱑ ���� ��������! ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �̷�:��...�׷��� �谡 ���� ���°�����.       ��\n");
		printf("�� ���:�� ���� �ѳ��� ���Ծ��ŵ社��         ��\n");
		printf("��������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �̷�:�� �׷�����. ���� �԰� �ٳ�.              ��\n");
		printf("�� ���:�������༭ ����!                      ��\n");
		printf("����������������������������������������������������\n");

		system("pause");
		system("cls");

		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:��...�� �׷� �Ծ��...�谡 ���� ���� ���ͱ���.��\n");
		printf("�� ���:�� ����� ���� ���ִ�! ���� �Ծ� ����?    ��\n");
		printf("��������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("������������������������������������������������\n");
		printf("�� �̷�:�Ƴ�..�� ���� �Ծ�^^                  ��\n");
		printf("�� ���:�׷�~ ���ְ� �Ծ�!                  ��\n");
		printf("�� �̷��� �Ȼ��� ����������.                  ��\n");
		printf("������������������������������������������������\n");

		system("pause");
		system("cls");



		break;

	case 'B':
		*(sum + 7) = 5;
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �̷�:��? �ȱ׷��൵ �Ǵµ� ����!           ��\n");
		printf("�� ���:�Ƴ�~�� ������ϱ� �� �Ծ��!       ��\n");
		printf("��������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������\n");
		printf("�� �̷�:���� ���� ���ִ�. ������ �� �;߰ھ�!       ��\n");
		printf("�� ���:���־ ��������! ���ְ� �Ծ�!           ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("������������������������������������������������������������������\n");
		printf("�� �̷�: �׷���?? ���� �ֱٿ� ���� ��ȭ ����;��µ� �ߵƴ�~    ��\n");
		printf("�� ���:Ȥ�� ����̾� ���ҵ� ��ȭ ����;����ž�??            ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� �̷�:��!�¾� �ʵ� �װ� ����;���?                     ��\n");
		printf("�� ���:��! �츮 ������ ����ϴ�^^                      ��\n");
		printf("�� �̷�:�׷���~! �� ��ȭ ���� ����                      ��\n");
		printf("������������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� �̷�:�׷���...���� ��ȭ�� ���̴µ� ��ȭ�� ����?          ��\n");
		printf("�� ���:�װ� ������! �� ��ȭ��������!!                    ��\n");
		printf("����������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �̷�:�׷� �ʰ� �����ؼ� �����̴�.            ��\n");
		printf("�� ���:�� ��ȭ���°� �����ؤ���              ��\n");
		printf("��������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:�� ����?? �׷� �������� ���� ��ȭ�� ����!     ��\n");
		printf("�� ���:�׷� �������� �ظ����� �������°� �?     ��\n");
		printf("��������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� �̷�:�׷��׷� �츮 ��ȭ�ð� �ʰڴ�~ �� ����!     ��\n");
		printf("�� ���:�׷�~! �����̶� �ݶ� �缭 �� ����             ��\n");
		printf("������������������������������������������������������������\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 9) = 0;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �̷�:�׷� �� ���ٿð�~                       ��\n");
		printf("�� ���:�ö� �����̶� �ݶ� ���� �����!       ��\n");
		printf("����������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("��������������������������������������������\n");
		printf("�� �̷�:��...?�׷� �˾Ҿ�....             ��\n");
		printf("�� �̷��� ǥ���� ����������.              ��\n");
		printf("��������������������������������������������\n");
		system("pause");
		system("cls");


		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������������������\n");
		printf("�� �̷�:(�Ұ�Ұ�) �˾Ҿ�..��ȭ ���� �����־�!    ��\n");
		printf("�� ���:�׷�~�ʵ� �����ͼ� ��ȭ ������!         ��\n");
		printf("����������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �̷�:�˾Ҿ�~                                   ��\n");
		printf("�� ���: ������ ���ٿ�~!!                       ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 10) = 2;
		system("cls");
		printf("����������������������������������������������������������������������\n");
		printf("�� �̷�:��...?�� �̾� �� ��������                                 ��\n");
		printf("�� ���:�� ������ ���̶���Ʈ�ε�...�� ���ٿ� ���� ���̶���Ʈ��~ ��\n");
		printf("����������������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �̷�:�� �׷� ��ȭ �� �����־�.                 ��\n");
		printf("�� �̷��� ǥ������ ��Ⱑ ��������.               ��\n");
		printf("����������������������������������������������������\n");

		system("pause");
		system("cls");


		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������������������������������������\n");
		printf("�� �̷�:�׷��� �츮���� ������ ������ �ָ�ȵɱ�? �ʹ� ���������׷�.��\n");
		printf("�� ���:�׷� ���� ���� �����ϴϱ�...���� �������ٰ�~              ��\n");
		printf("����������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �̷�:����~�� ����                          ��\n");
		printf("�� ���:�׷���~������ �������ϱ� �ϳ�~        ��\n");
		printf("����������������������������������������������������\n");

		system("pause");
		system("cls");
		break;


	case 'B':
		*(sum + 11) = 6;
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� �̷�:�� ����? ����~�̾������� �� �ձ����� ��Ź�Ұ�.      ��\n");
		printf("�� ���:�Ƴ� �����ð��� �翬�� ������ �������ִ°� �´°���!��\n");
		printf("����������������������������������������������������������������\n");

		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �̷�:�ʵ� �������� �� ����.                      ��\n");
		printf("�� ���:�׷� �ʳ� �θ���� �����Ͻðڴ�.�� ����~  ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");
		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
		break;

	}
}
void f_finish_mr(int total)
{
	if (total <= 41)
	{
		printf("��������������������������������������������������\n");
		printf("�� �̷��� ǥ���� ���� �ʴ�                      ��\n");
		printf("��                                              ��\n");
		printf("�� �̷� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� �̷��� ǥ���� �̽�½�� ���δ�                      ��\n");
		printf("��                                                    ��\n");
		printf("�� �̷� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� �̷��� ǥ���� ���                                     ��\n");
		printf("��                                                        ��\n");
		printf("�� �̷� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}



void man_dy(char p, person *user)
{


	do {

		printf("������������������������������<é�� 1.ù ����>������������������������������\n");
		printf("�� ���: Ȥ�� ���� �Ҿ�����ź� �¾ƿ�?                                 ��\n");
		printf("�� ����: ��!�¾ƿ�! ���� �����̿���Ф� ���� �����ֽðھ��?              ��\n");
		printf("��                                                                        ��\n");
		printf("�� A:���� �ֿ�������� �� ���ּ���!                                       ��\n");
		printf("�� B:�׳� �����ش�.                                                       ��\n");
		printf("����������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);



	do {
		printf("����������������������������������<é�� 2.�� ��>������������������������������\n");
		printf("�� ħ�뿡 ���� �ڵ����� �ϴ� ���� īī���忡 �׳��� ������ ������ ����.     ��\n");
		printf("�� ���:�Ʊ�ô� ���� �����̳�. ���� �����ؾߵǳ�??                       ��\n");
		printf("�� A:�������� �����ϴ� ���̽����� �����ٰ� ����Ѵ�.                        ��\n");
		printf("�� B: ���̽����� �� �� �����.                                              ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C2_Q2(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}

	} while (p != 65 && p != 66);



	do {
		printf("������������������������<é�� 3.�������ƹ�ȭ�� ��>����������������������������\n");
		printf("�� ����� ��ҿ� ���� �����ߴ�.                                             ��\n");
		printf("�� ���:���� �� �Գס�Ȥ�� ���� �� �ƴϰ���...?                           ��\n");
		printf("�� ��ӽð����� 10���� ������ ���ڰ� �پ�Դ�.                            ��\n");
		printf("�� ����: �˼��ؿ�!���� ��ٸ��̾��...? ���� �˼��ؿ��                     ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:�����ƿ�~����~                                                         ��\n");
		printf("�� B:��ġ�ø� ��¼�÷�����!! ���� ������!                                   ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������������\n");
		printf("�� ����:������ �� ��ð� ��������??                                         ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:�� ���� �ٸ��� ����� �ִµ� �����?                               �� \n");
		printf("�� B:���� �� �����ƿ� ��������?                                             ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C3_Q4(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������<é�� 4. �Ĵ�>����������������������������������\n");
		printf("�� �Ĵ翡 ���Դ�. ����� ���Ⱑ �帥��.                                   ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:���� ����ɰ� ����� ���־�~!                                          ��\n");
		printf("�� B:���� ������ ��û ����                                                  ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C4_Q5(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������������\n");
		printf("�� ����:�޴��� �پ��ϳ�~ �� ��������??                                      ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:�� �ƹ��ų�                                                            ��\n");
		printf("�� B:�� ��� ������ ������ ������??                                       ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C4_Q6(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������������\n");
		printf("���츮�� ����� �ֹ��ߴ�. �������帥��. ��� �ؾ��ұ�?                  ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:�� Ȥ�� �� ������?                                                     ��\n");
		printf("�� B:���� �����°�  �ʹ� ���� �ɸ���                                        ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C4_Q7(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������������������\n");
		printf("�� ����� ���Դ�.                                                       �� \n");
		printf("��                                                                        ��\n");
		printf("�� A:�� ���� ���� ���� ����                                               �� \n");
		printf("�� B:�� �� ��� ��¥ ���־�! �� �Ծ��! �����ϸ� ���� �� �ٰ�~!       ��\n");
		printf("����������������������������������������������������������������������������\n");

		scanf("%c", &p);
		man_dy_C4_Q8(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������������������\n");
		printf("�� �츮�� �Ļ縦 ���ϰ� ������ ���Դ�.                                    ��\n");
		printf("�� ����:��θ��ϱ� ��� ��������� ���� ��� ����?                      ��\n");
		printf("��                                                                        ��\n");
		printf("�� A:���� ����;��� ��ȭ���� �ߴµ� ���� ��������!                       �� \n");
		printf("�� B:��޽ð� ���ο� ĳ���� ���Դµ� �Ϸ� ����?                           ��\n");
		printf("����������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������<é�� 5. ��ȭ��>��������������������������������\n");
		printf("�� �׷��� �׳�� �Բ� ��ȭ�� ���� ��ȭ���� �Դ�.                                  ��\n");
		printf("�� �� ��ȭ ���� �����̶� �ݶ� �־�� �ϴµ� �緯 ���ٿð�~                        ��\n");
		printf("��                                                                                ��\n");
		printf("�� A:�Ƴ� �� ���⼭ ��ٸ����־� ���� ��ð�~!                                    ��\n");
		printf("�� B:�˰ھ�! ���� ġ��� �����!!                                                 ��\n");
		printf("������������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C5_Q10(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������������������������������������������������������������������������������\n");
		printf("�� ��ȭ�� ���۵Ǿ���, ��ȭ�� ���� ���� �����̰� ȭ��ǿ� ���ٰ��ߴ�.                            ��\n");
		printf("��                                                                                              ��\n");
		printf("�� A:(�Ұ�Ұ�)���� ȭ��� ������ ���ε� ���� ����.                                             ��\n");
		printf("�� B:(�ٸ��� ���� �ø���)�� ������ �Ⱥ���                                                     ��\n");
		printf("��������������������������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������������\n");
		printf("�� ��� ����� ��ȭ�� ������ ���� ���� �Ǿ���.                              ��\n");
		printf("�� �����̰� ��ݽð��� �־� ���� ���� �Ѵ�.                                 ��\n");
		printf("�� ����:�� ��ݽð� ������ ���� ������ �ɰ� ����~                           ��\n");
		printf("��                                                                          ��\n");
		printf("�� A:�� �������� ����� �ִµ� �߰�~                                        ��\n");
		printf("�� B:�ð��� ���� �ʾ����ϱ� ���� ������ ������ �ٰ�!                        ��\n");
		printf("������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		man_dy_C5_Q12(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");

		}
	} while (p != 65 && p != 66);

	printf("������������������������������������������������������������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.                    ��\n");
	printf("�� �����ִ� ���ε��� ������ �׳࿡ ���� �������� �˸��� �ʹ�.               ��\n");
	printf("�� ����: ���� ���� ����־���, ������ ��ȸ �Ǹ� �׶� ȫ�� ���� ��� ����!   ��\n");
	printf("�� ���:���...! �� �� ��Ⱑ �־�... ""�츮���� �ҷ���""                     ��\n");
	printf("������������������������������������������������������������������������������\n");
	getchar();
	system("cls");


}
void man_dy_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ����:(��Ȳ�ϸ�)�� ��! ���� ��帱�� ����~      ��\n");
		printf("��  ���:�������׷� �����帱�Կ�!               ��\n");
		printf("�� ����: ��~�׷� �����ּ���~                      ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:������ ã���̴ּµ� ������ �ǹ̷� ���̶� �ѳ� ��帱�Կ�~!          ��\n");
		printf("�� ���: ���ֽŴٸ� ������ �����Կ�!                                        ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����: (����ó�� �ָ�)���� �ٺ��� ���� �����ߵɰŰ��ƿ�! �����ּ���!!       ��\n");
		printf("�� ���: �� ������ ������~~                                                 ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ���:�˼��ؿ� �����ð��� �Ф�                                            ��\n");
		printf("�� ����:�����ƿ� ���ڸ����� ��� �ְŵ�� ������ ���� ���� �������?          ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ���: �� ������ �� �����ƿ�!!                                            ��\n");
		printf("�� ����: �׷� ����� ����6�ÿ� �л굿 �������� ��ȭ�� �տ��� ������~          ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� ����:�˼��ؿ�!! �� ���ż� �߸� �����׿�!                   ��\n");
		printf("�� ���: �������ϴ�.                                        ��\n");
		printf("����������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����: �� �´�! ������� �ϴµ� ������ ����������??                       ��\n");
		printf("�� ���:��...�ָ� ���?                                                   ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �̹��� ����� ���� 6�ÿ� �л굿 �������� ��ȭ�� �տ��� ������!   ��\n");
		printf("�� ���:��! �׷� �׶� �ƿ�~                                                 ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����: ��..��! �������� ��ٸ��̾��?                                       ��\n");
		printf("�� ���:�� ��10������??��ٷȾ��! �����ƿ�~                                ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����: ��~�׳� �׷� ������� ����!                                          ��\n");
		printf("�� ���:�� ���ƿ�~                                                          ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�� �������ּż� �����ؿ䤾���� �޸��� ���ؿ�!                         ��\n");
		printf("�� ���:�������׷��� �ȳѾ����ż� �����̳׿�!                               ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�� ���� �������ٵ� �� ����������!                                     ��\n");
		printf("�� ���:�� ���ƿ�~!                                                         ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:��~���ƿ�! �� ��� �ǰ� �����ؿ�!!                                  ��\n");
		printf("�� ���:�׷� �� ������� ����!                                            ��\n");
		printf("�� ����:�� �� ���ô�!!                                                      ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:��...�׷� ��� ������������??                                       ��\n");
		printf("�� ���:�� ���ƿ�~ �� ��� �����ؿ�~                                      ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�� �׷� ���ʿ� ���̴� ������ ����~!                                   ��\n");
		printf("�� ���:�� �� ���ô�~~                                                    ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:������������ ���� ��մ�                                              ��\n");
		printf("�� ���:��..�� ��վ�?? ���� ���簳�� �����ϰŵ礻����                      ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�������� �� ���ऻ����                                                ��\n");
		printf("�� ���:�˾Ҿ���� �����ؼ� ���ٰ�!                                       ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���簳�� ���п� �����̿� ���������!���� ��ȭ�� �ϸ鼭 ���� ������ ����� �˾Ҵ�!��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷���~������� �� ���� �� �ΰŰ���~                          ��\n");
		printf("�� ���:�״ϱ�~ ������ �� �ͺ��߰ھ�!                               ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�׶� ������ ����?����                                                 ��\n");
		printf("�� ���:�׷���? ���� �ٽ� ���ڤ���                                          ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ����:����� ����~                                                                ��\n");
		printf("�� �츮�� ��ȭ�� �ϸ鼭 ���� ������ ����� �˾Ҵ�!                                  ��\n");
		printf("��������������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:��...�׷�? �� ��� �����ǵ� ������ ������?                          ��\n");
		printf("�� ���:�׷�~�� ��� ������!!                                             ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������������\n");
		printf("�� ����:�׷� ����� ��Ų��??                                      ��\n");
		printf("�� ���:��~�� �ֹ�����!                                         ��\n");
		printf("����������������������������������������������������������������������\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �׷� ��� ����~~                                       ��\n");
		printf("�� ���:���� ����� ��¥ ���־�!                                  ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:����? �׷��� ���ϴϱ� ���ȴ٤���                                    ��\n");
		printf("�� ���:����ص� ����!!                                                     ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:����������! �� ������ ���� ���ڿ��̶�� �Ҽ� ���� ����!               ��\n");
		printf("�� ���:�� ����?? ���� �� �� ���ôµ� ������ �� ���� ����!                  ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�׷� ����! ���� �� �߸��ôµ� ���� ���ϸ� �ȵȴ�~����                 ��\n");
		printf("�� ���:�������׷��� ����!                                                  ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����⸦ �ϴٺ��ϱ� �����̴� ��ſ� ������ ������ ���ؼ� ���ߴ�.           �� \n");
		printf("�� ��ȭ�� ������ �� ������ ���Դ�.                                            ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:�װ� ����! ��...���� �� ��ٷ�����.                                   ��\n");
		printf("�� ���:�׷� �踹�� ��������?                                               ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� ����:��. ���� �ѳ��� ���Ծ��ŵ�..                                          ��\n");
		printf("�� �����̴� �谡 ���� ���ʹ��� ��¦ ¥���� ������. ������ �־�߰ڴ�.         ��\n");
		printf("�� ������ ����� ���Դ�. �������� ����� �� Ǯ�� �� ����.                   ��\n");
		printf("��������������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������\n");
		printf("�� ����:��??�׷� �� ���ְ� �Ծ�~                                      ��\n");
		printf("�� ���:�׷� �ʵ� ���ְ� �Ծ�~                                      ��\n");
		printf("������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �츮�� ������ �Ļ縦 �ߴ�.                         ��\n");
		printf("�� �������� ǥ���� �����ʴ�.                          ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("������������������������������������������������������������������������������������������\n");
		printf("�� ����:(���� �Ծ��)��~~ ��� ��¥ ���ִ�!!���� �Ծ ��� �߿��� ���� ���־�!  ��\n");
		printf("�� ���:�Կ� �¾Ƽ� �����̴٤������ְ� �Ծ�!                                          ��\n");
		printf("������������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������\n");
		printf("�� �������� ǥ���� �������.              ��\n");
		printf("��������������������������������������������\n");
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
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:�׷� ����~! ���� ��ȭ �Ⱥ��� �� �ȰŰ��Ƥ���                            ��\n");
		printf("�� ���:�����ؼ� �����̴�! �׷� ��ȭ���� ����!                                ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������������������������\n");
		printf("�� ��ȭ �������ڴ� ���ȿ� �������� ǥ���� �������.                               ��\n");
		printf("������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("������������������������������������������������������������������������������������������\n");
		printf("�� ����:���� ������ ���� �� �����ؼ� �׷��� ���� ��ȭ ��������.                       ��\n");
		printf("�� ���:�׷� �׷� ��ȭ ��������~!                                                     ��\n");
		printf("������������������������������������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������������������������������������\n");
		printf("�� ����:����! �׷� �츮 ���� ���� ���� ����!                                        ��\n");
		printf("�� ���:�׷�~� �� ������??                                                         ��\n");
		printf("������������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������������������������\n");
		printf("�� ����:�� ļ���� ������! �ʴ�??                                                ��\n");
		printf("�� ���:��! ���� ļ���� �����ϴµ�!!�츮 ���� �����Ѵ�!                       ��\n");
		printf("������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("�� �󿵽ð��� �ٰ��� �츮�� �󿵰����� ����                               ��\n");
		printf("��������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 9) = 0;
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:�÷� �� ļ���� ��������~!                                             ��\n");
		printf("�� ���:�� �׷������� ġ��� ����ֶ�~~                                       ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������\n");
		printf("�� ����:�׷� ���� �緯����~                                   ��\n");
		printf("�� ���:�׷�~�˾Ҿ� ���� �緯��~~                           ��\n");
		printf("����������������������������������������������������������������\n");
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
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �� ���� �ͼ� ��ȭ ���� ����.                                     ��\n");
		printf("�� ���:�׷��׷�! �����ؼ� ������~                                            ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 10) = 2;
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:�׷� �� ���ٿð�..                                                    ��\n");
		printf("�� ���: �� ���̶���Ʈ�ϱ� �� ���ٿ�~                                       ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� �������� ǥ���� ���� �����ʴ�.                                               ��\n");
		printf("����������������������������������������������������������������������������������\n");
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
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:������ �����ѵ� �� �ձ����� ������ ��~                                ��\n");
		printf("�� ���:��...�׷�...10���̸� ��??                                             ��\n");
		printf("�� ����:�� �� ��� �ȴ������� �� ����~                                        ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� �������� ǥ���� ���� �����ʴ�.                                               ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 11) = 6;
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� ����:�׷��ָ� �ʹ� ����~!�׷� �ż� �� ����!                                ��\n");
		printf("�� ���:���������� �ż���~�翬�� ���ε�! �� ���� ���!                      ��\n");
		printf("�� ����:����! �� ����!!                                                       ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������������������������������\n");
		printf("�� �������� ǥ����  ���� ���δ�!                                                ��\n");
		printf("����������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
}

void f_finish_dy(int total)
{
	if (total <= 41)
	{
		printf("��������������������������������������������������\n");
		printf("�� ������ ǥ���� ���� �ʴ�                      ��\n");
		printf("��                                              ��\n");
		printf("�� ���� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� ������ ǥ���� �̽�½�� ���δ�                      ��\n");
		printf("��                                                    ��\n");
		printf("�� ���� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� ������ ǥ���� ���                                     ��\n");
		printf("��                                                        ��\n");
		printf("�� ���� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}
void woman_ms(char p, person *user)
{

	do {

		printf("������������������<é�� 1. ī��>��������������������\n");
		printf("�� ��ȯ�̰� ģ���� �Ұ������?                    ��\n");
		printf("�� ����ó�� �޾Ҵµ� ��� �ؾ��ұ�?             ��\n");
		printf("��                                                ��\n");
		printf("�� A: ���� ī���� �Ѵ�.                           ��\n");
		printf("�� B: ������ ��ٸ���.                            ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C1_Q1(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {
		printf("����������������������<é�� 2.ù ����>����������������������\n");
		printf("�� ����ߴ� �ð��� �ٰ����� �ִ�.                         ��\n");
		printf("�� �� �ָ��� �μ����� ������ ������ ���� ����� �� �ִ�.  ��\n");
		printf("�� �μ��̴� �������� �߻��� �� ����.                      ��\n");
		printf("������������������������������������������������������������\n");
		getchar();
		system("cls");
		printf("������������������������������������������������������������ \n");
		printf("�� ���:�ȳ�! �� �μ��� ����??                ��\n");
		printf("�� �μ� : �� �ȳ�?? Ȥ�� ��ٸ� �� �ƴ���?                ��\n");
		printf("�� ���: �Ƴ�~��� �Ծ�!!                               ��\n");
		printf("�� ������� ó�� ���� �ұ�?                             ��\n");
		printf("��                                                        ��\n");
		printf("�� A:�츮 ���� ���ұ�?                                    ��\n");
		printf("�� B: ������ ������ �츮 ��å�ұ�?                        ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C2_Q2(p, user);
		getchar();
		system("cls");

		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("������������������������������������������������������������\n");
		printf("�� ������ �帥��. �ֺ��� ��ǳ�� ���ڰ� ����� �ִ�.       ��\n");
		printf("��                                                        ��\n");
		printf("�� A:(��ǳ�� �ָ��� �ٶ󺸸�) ��~��ǳ�� ���ڴ�!           ��\n");
		printf("�� B:(��ǳ���� �Ӹ��� ������) �� ����?                    ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C3_Q3(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("����������������������������������������������������������\n");
		printf("�� �츮�� ������� Ǯ�� �� ����.                        ��\n");
		printf("�� �츮�� �ȴٰ� ����� �����ִ� ������ ���ߴ�.         ��\n");
		printf("�� �μ� : ��? ���� ������� ���� �ִµ�? ���� ������?   ��\n");
		printf("��                                                      ��\n");
		printf("�� A:������ �ִ°� �ƴϾ�?? �ٸ� ��� ����?             ��\n");
		printf("�� B:����ŷ �ϳ���~ �����ұ�?                           ��\n");
		printf("����������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C3_Q4(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("������������������������<é��3: ����ŷ >��������������������\n");
		printf("�� (�뷡��)                                               ��\n");
		printf("�� �μ� : �뷡 ���Ѵ�~ �ʴ� ���� �뷡 ������?             ��\n");
		printf("��                                                        ��\n");
		printf("�� A:���� �߶�� ������~!                                 ��\n");
		printf("�� B:���� ������ ������~                                  ��\n");
		printf("������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C4_Q5(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("������������������������������������������������������������������\n");
		printf("�� ���ڱ� �� ������ ����ũ�� �ٰ��Դ�                           ��\n");
		printf("�� ���� : �ű� �� �� �����Ⱑ �����ó׿�~ ���� ���̼���?        ��\n");
		printf("��                                                              ��\n");
		printf("�� A: (��Ȳ�ϸ�) ���� ģ������.                                 ��\n");
		printf("�� B:(������) ���� ���� �ƹ����� �ƴϿ���^^                     ��\n");
		printf("������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C4_Q6(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("���������������� <é��4 ������� >��������������\n");
		printf("�� ����ŷ�� ������ �츮�� ���� �Ա�� �ߴ�    ��\n");
		printf("�� �츮�� ��������� ���� �ڸ��� �ɾҴ�     ��\n");
		printf("�� �������� �޴����� �̴ּ�                   ��\n");
		printf("������������������������������������������������\n");
		getchar();
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� ���: �츮 �� ������?                                      ��\n");
		printf("�� �μ� : (�����縦 �ϸ�) ���� �����Ľ�Ÿ �ϳ�              ��\n");
		printf("�� ���� : ���� �մ� �ֹ��� �տ��� ���͵帮�ڽ��ϴ�              ��\n");
		printf("�� �μ� : ��.. �˼��մϴ١��ФФФФ�                           ��\n");
		printf("������������������������������������������������������������������\n");
		getchar();
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� ���� �μ����� ����� �ʹ� �Ϳ�����           ��\n");
		printf("�� �μ��̰� �������� �ϰ��ִ�.��� �ؾ��ұ�?        ��\n");
		printf("��                                                    ��\n");
		printf("�� A:������ �μ��� �Ϳ����� ���� �ֹ��ϰ� �ð�~~      ��\n");
		printf("�� B: �ڤ����������� �װ� �� �տ� ���� �ֹ��ϰ� ��  ��\n");
		printf("��������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C4_Q7(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("��������������������������������������������������������\n");
		printf("�� �μ� : ����..������ �ֳ�...�������� �����ؼ� �Ծ�~ ��\n");
		printf("��                                                    ��\n");
		printf("�� A: (�칰�칰)����~                                 ��\n");
		printf("�� B:�ʵ� ������~                                     ��\n");
		printf("��������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C4_Q8(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("��������������������������������������������������������\n");
		printf("�� �츮�� ���� �� �԰� ���� ������ ����.            ��\n");
		printf("�� �Ѱ����� 32000���� ���Դ�.                         ��\n");
		printf("�� ����: �������� ���� ���Գס�.                      ��\n");
		printf("��                                                    ��\n");
		printf("�� A:(ī�带 �ǳ׸�)�� ������ּ���                   ��\n");
		printf("�� B: �ϳ� ���� ������ּ���                          ��\n");
		printf("��������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C4_Q9(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("������������������<é��5: �Ѱ����� >��������������������\n");
		printf("�� �츮�� ���ֿ� ���ڸ��� ������ �ͼ� �ڸ��� ��Ҵ�.  ��\n");
		printf("�� �μ�:���� �Ϸ� ���?.                            ��\n");
		printf("��                                                    ��\n");
		printf("�� A:���� �����Ҿ�!!�ʴ� ���?                      ��\n");
		printf("�� B:���� ���Ҿ�!!�ʴ� ���?                        ��\n");
		printf("��������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C5_Q10(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("������������������������������������������������������������������\n");
		printf("�� �μ�:  �츮 ���� ���� ����?? ���� ���� ������ �ż��� ��\n");
		printf("��                                                              ��\n");
		printf("�� A:�츮 30�и� �� �ִ� ���� �ȵɱ�?? ��ġ�� �ʹ� ����~!       ��\n");
		printf("�� B:�׷��׷�~ �ð��� ���� �̷��� �Ƴ�!                         ��\n");
		printf("��  �� ����! ���� ���� ������ �� �� ����~                     ��\n");
		printf("������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C5_Q11(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);

	do {

		printf("����������������������������������������������������\n");
		printf("�� �μ�: �ð��� ���� �ʾ����ϱ�             ��\n");
		printf("��     ���� �ʳ� ������ ������ �൵ ������?       ��\n");
		printf("��                                                ��\n");
		printf("�� A:�׷�~ �׷� ���� ����~!                     ��\n");
		printf("�� B:�ƴϾ�~ �� ȥ�� ���� �������~               ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		woman_ms_C5_Q12(p, user);
		getchar();
		system("cls");
		if (p != 65 && p != 66)
		{
			printf("������������������������������\n");
			printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
			printf("�� �ٽ� �������ּ���.       ��\n");
			printf("������������������������������\n");
		}
	} while (p != 65 && p != 66);


	printf("������������������������������������������������������������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.                    ��\n");
	printf("�� �����ִ� ���ε��� ������ �׿� ���� �������� �˸��� �ʹ�.                 ��\n");
	printf("�� �μ�: ���� ���� ����־���, ������ ��ȸ �Ǹ� �׶� ȫ�� ���� ��� ����!   ��\n");
	printf("�� ���:���...!���ƾ�~! �� �� ��Ⱑ �־�...   ""�츮���� �ҷ���""           ��\n");
	printf("������������������������������������������������������������������������������\n");
	getchar();
	system("cls");
}
void woman_ms_C1_Q1(char p, person *user)
{
	if (p == 'A')
	{
		*sum = 7;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ���:�μ��� �ȳ�?                         ��\n");
		printf("�� �μ� : �ȳ�! ���� �������༭ ����            ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ���:���Ʊ�������� ����µ� �б���Ȱ  �? ��\n");
		printf("�� �μ� : ����~���� ���� ��վ�!                  ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� ���:�������������̴� �츮 ���� �ѹ� ������?         ��\n");
		printf("�� �μ� : �׷��� �츮 ���� �����°� ������?               ��\n");
		printf("�� ���:���� �� �ָ����� �����ѵ� �ʵ� �ָ��� �Ѱ� ����!��\n");
		printf("�� �μ� :�� ��������~! ���� �Ѱ� ������ �;���!!          ��\n");
		printf("������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� ���:�׷����� �׷� �츮 ����Ͽ� ������!!        ��\n");
		printf("�� �μ� : ��! ����Ͽ� ��!><                          ��\n");
		printf("�� �μ��̿� ������ ������� �� ����.                  ��\n");
		printf("�� �μ��̿� ���� ������ �˰� �� �� ����!              ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*sum = 4;
		system("cls");
		printf("��������������������������������������������������������������\n");
		printf("�� �μ� : �ȳ� Ȥ�� ��ȯ�� ģ�� �¾�??             ��\n");
		printf("�� ���:�� �ȳ�~! �ʰ� ��ȯ�� ģ�� �μ��̱���~            ��\n");
		printf("��������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� �μ� : �� ���� �� ��� ���� �����.                ��\n");
		printf("��  ��ȯ�̰� �� ��û ���ϴٰ� �ϴ���^^~             ��\n");
		printf("�� ���:���� ���������� �츮 ���� �����°� ������?  ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������\n");
		printf("�� �μ�: ������ ���� ������ �������!~              ��\n");
		printf("�� �μ��̴� ���带 �� ���ϴ� �� ����.               ��\n");
		printf("�� ���� ���� ���ϴ°� ���� �� ����!                 ��\n");
		printf("�� ���:�׷��� �츮 �ָ��� �Ѱ� ���°� �?      ��\n");
		printf("�� �� ����Ͽ� �ð��� �����ŵ�!                     ��\n");
		printf("������������������������������������������������������\n");
		printf("�μ� :�׷� �׷�!! �׷� ����Ͽ� ����\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ���:�׷�~����Ͽ� ���� ������!!             ��\n");
		printf("�� �μ� : ��! ����Ͽ� ��!><                      ��\n");
		printf("�� �츮�� ������� ������� �� ����.              ��\n");
		printf("����������������������������������������������������\n");
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
		printf("������������������������������������������������������\n");
		printf("�� ���:�׷��� ������? ���� ���ϱ� �𸣰ڳ�       ��\n");
		printf("�� �μ� : �׷� ��å�̶� �ұ�?                     ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 1) = 3;
		system("cls");
		printf("��������������������������������������������������������������\n");
		printf("�� �μ� : ���� �� �ȴ°� ������                             ��\n");
		printf("��������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������\n");
		printf("�� �μ� : �׷���~ ��! �Ӹ��� ��ǳ���� �������� ������ �־��~     ��\n");
		printf("�� ����� �μ����� ������ ����� ȣ���� ������ �����ߴ�.        ��\n");
		printf("��������������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 2) = 9;
		system("cls");
		printf("��������������������������������������������������������������\n");
		printf("�� �μ� : (��ǳ���� �Ӹ��� ������) ���� ��ó�� ��������     ��\n");
		printf("�� ����� �μ����� �Ϳ��� ����� ȣ���� ������ �����ߴ�   ��\n");
		printf("��������������������������������������������������������������\n");
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
		printf("������������������������������������������������������\n");
		printf("�� �μ� : ��?; �뷧�Ҹ��� �鸮�µ�? ����ŷ �ϳ���   ��\n");
		printf("�� ���:�� �׷���? �׷� �����ҷ�?                 ��\n");
		printf("�� �μ� : �׷�~�� ������~!                        ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 3) = 2;
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �μ� : �� ����ŷ ������~ ������            ��\n");
		printf("�� ���:�׷�~����! ���� ����ŷ ������!        ��\n");
		printf("��������������������������������������������������\n");
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
		printf("������������������������������������������������������\n");
		printf("�� �μ� : ��� ���� ������ �Ȱ���><                 ��\n");
		printf("��       �߶�带 ������ ������ ��Ƴ��� ����̾�!  ��\n");
		printf("�� ���:�� ����??������������                     ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");
	}
	else if (p == 'B')
	{
		*(sum + 4) = 4;
		system("cls");
		printf("��������������������������������������������������������������\n");
		printf("�� �μ� : ��� ������ �� Ʈ�����ϳ�? ���� �߶�带 ������~  ��\n");
		printf("�� ���:�� �߶�庸�� ������ ����!                        ��\n");
		printf("��������������������������������������������������������������\n");
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
		printf("��������������������������������������������\n");
		printf("�� ���� : ��.. �˼��մϴ�                 ��\n");
		printf("�� �μ����� ǥ���� �����ʴ�               ��\n");
		printf("��������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 5) = 10;
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� ���� : �� ��������?                                    ��\n");
		printf("�� ���: ���� ���� ó�� �����µ� ���� ������ ����^^ ��\n");
		printf("�� �μ����� �Ͱ� ��������.                                ��\n");
		printf("������������������������������������������������������������\n");
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
		printf("������������������������������������������������������������\n");
		printf("�� �μ� : (�޴������� ���� ������) �����ФФФФ�     ��\n");
		printf("�� ���:�������� �β�������~!                           ��\n");
		printf("�� �μ��̴� �ſ� �Ϳ�����.                                ��\n");
		printf("������������������������������������������������������������\n");
		system("pause");
		system("cls");


	}
	else if (p == 'B')
	{
		*(sum + 6) = -5;
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� �μ� : ���..;�˰ھ�                         ��\n");
		printf("�� ���:�� �ֹ��ϰ��~~                     ��\n");
		printf("�� �μ����� ǥ���� �����ʴ�.                    ��\n");
		printf("��������������������������������������������������\n");
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
		printf("����������������������������������������������������\n");
		printf("�� �μ�: �� ������ �ƴ±���?                      ��\n");
		printf("�� �μ��̴� ���� �׳��� ����� �ŷ��� ������      ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 7) = 5;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ���:�ʵ� ������ �Ծ� �μ���!                ��\n");
		printf("�� �μ��̴� ������ �׳��� ����� ���Ҵ�           ��\n");
		printf("����������������������������������������������������\n");
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
		printf("����������������������������������������������������\n");
		printf("�� �μ�:��? �װ� ���°ž�? ���ִ� ���� ���!!     ��\n");
		printf("�� ���:���ִ� �Ѱ����� ��� �ɷ�!              ��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 8) = 4;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �μ�:������ ������ּ���                       ��\n");
		printf("�� �̰ɷδ� ���� �����ϴ١����� ��ĵ �ұ�?        ��\n");
		printf("�� ���:�׷� �Ѱ� ���� ���� ��ĵ����!           ��\n");
		printf("����������������������������������������������������\n");
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
		printf("��������������������������������������������������������\n");
		printf("�� ���� ���� �����Ҿ�~ ���� �����Ƽ� �����̴�~����    ��\n");
		printf("�� �μ����� ǥ���� �̽�½��.                          ��\n");
		printf("��������������������������������������������������������\n");
		system("pause");
		system("cls");



	}
	else if (p == 'B')
	{
		*(sum + 9) = 5;
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� ���:���� ���� ���Ҿ�~! �������� ������ � �ٴ���~!��\n");
		printf("�� �μ�: �׷�~! �װ� ���� ���� �����̴�!                  ��\n");
		printf("�� �μ��̴� ���� ���Ű���.                                ��\n");
		printf("������������������������������������������������������������\n");
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
		printf("������������������������������������������������������\n");
		printf("�� �μ�: �̾��ѵ� ��¥ ������ �� �� ����! �� ����!��\n");
		printf("�� ���:�׷�~��¿�� ���� ���� ���߰ڳ�~           ��\n");
		printf("�� �μ����� ǥ���� �����ʴ�.                        ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 10) = 5;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� �μ�:�׷�!������ �� ���Ǵϱ� �� ����!!     ��\n");
		printf("�� ���: �׷� �� ������ �θ�� �����Ͻðڴ�!  ��\n");
		printf("�� �μ��̴� �ڽ��� �������༭ �����Ѵ�.         ��\n");
		printf("����������������������������������������������������\n");
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
		printf("����������������������������������������������\n");
		printf("�� �μ�: �����̴� ���� �� ���� ����~!     ��\n");
		printf("�� ���:�� �������ְ� �ʵ� �󸥰�~!     ��\n");
		printf("�� �μ�:�˾Ҿ�~ �󸥰���! ���!             ��\n");
		printf("����������������������������������������������\n");
		system("pause");
		system("cls");

	}
	else if (p == 'B')
	{
		*(sum + 11) = 3;
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� �μ�: �ƴϾ� �ð��� ���� �ʾ �����ϴϱ� ���� ������ �ٰ�  ��\n");
		printf("�� ���:�׷� �׷�! ����~                                    ��\n");
		printf("������������������������������������������������������������������\n");
		system("pause");
		system("cls");

	}
}

void f_finish_ms(int total)
{
	if (total <= 41)
	{
		printf("��������������������������������������������������\n");
		printf("�� �μ��� ǥ���� ���� �ʴ�                      ��\n");
		printf("��                                              ��\n");
		printf("�� �μ� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� �μ��� ǥ���� �̽�½�� ���δ�                      ��\n");
		printf("��                                                    ��\n");
		printf("�� �μ� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� �μ��� ǥ���� ���                                     ��\n");
		printf("��                                                        ��\n");
		printf("�� �μ� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}


void woman_jh(char p, person *user)
{


	do {

		printf("����������������������������<é�� 1. ī��>������������������������\n");
		printf("�� �����̰� ģ���� �Ұ������                                   ��\n");
		printf("�� ����ó�� �޾Ҵµ� ��� �ؾ��ұ�?                           ��\n");
		printf("��                                                              ��\n");
		printf("�� A:���� ī���� �Ѵ�.                                          ��\n");
		printf("�� B:������ ��ٸ���.                                           ��\n");
		printf("������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("������������������������ <é�� 2. ù ����>��������������������������������\n");
		printf("�� ����ߴ� �ð��� �ٰ����� �ִ�.                                       ��\n");
		printf("�� �� �ָ��� �������� ������ ������ ���� ����� �� �ִ�.                ��\n");
		printf("�� �����̴� �������� �߻��� �� ����.                                    ��\n");
		printf("��                                                                      ��\n");
		printf("�� ���: �ȳ�! �� ������ ����??                             ��\n");
		printf("�� ���� : �� �ȳ�?? Ȥ�� ���� ��ٷȾ�                                  ��\n");
		printf("�� ���:  �Ƴ�~��� �Ծ�!                                             ��\n");
		printf("�� A:�츮 ���� ���ұ�?                                                  ��\n");
		printf("�� B:������ ������ �츮 ��å�ұ�?                                       ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {

		printf("��������������������������������������������������������������������������\n");
		printf("�� ������ �帥��. �ֺ��� ��ǳ�� ���ڰ� ����� �ִ�.                     ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:(��ǳ�� �ָ��� �ٶ󺸸�) ��~��ǳ�� ���ڴ�!                         ��\n");
		printf("�� B:(��ǳ���� �Ӹ��� ������) �� ����?                                  ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������������������������������������������������������\n");
		printf("�� �츮��  ��� ���� ������� Ǯ�� �� ����.                             ��\n");
		printf("�� �츮�� �ȴٰ� ����� �����ִ� ������ ���ߴ�.                         ��\n");
		printf("��                                                                      ��\n");
		printf("�� ���� : ��? ���� ��� ���� �����ִµ� ���ϴ� ����?                    ��\n");
		printf("�� A:������ �ִ°� �ƴϾ�?? �ٸ� ��� ����?                             ��\n");
		printf("�� B:����ŷ �ϴ°� ������ �����ҷ�?                                     ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("����������������������������<é��3 ����ŷ>��������������������������������\n");
		printf("�� (�뷡��)                                                             ��\n");
		printf("�� ���� : �뷡 �� �θ���. �ʴ� ���� �뷡 ������?                        ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:���� �߶�� ������~                                                ��\n");
		printf("�� B:���� ������ ������~                                                ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);




	do {
		printf("��������������������������������������������������������������������������\n");
		printf("�� ���ڱ� �� ������ ����ũ�� �ٰ��Դ�                                   ��\n");
		printf("�� ���� : �ű� �� �� �����Ⱑ �����ó׿�~ ���� ���̼���?                ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:(��Ȳ�ϸ�) ���� ģ������                                           ��\n");
		printf("�� B:(���������ϸ�) ���� ���� �ƹ� ���� �ƴϿ���                        ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("��������������������������<é��4 �������>��������������������������������\n");
		printf("�� �츮�� ��������� ���� �ڸ��� �ɾҴ�.                              ��\n");
		printf("�� �������� �޴����� �̴ּ�.                                            ��\n");
		printf("��                                                                      ��\n");
		printf("�� ���: �츮 �� ������?                                              ��\n");
		printf("�� ���� : ���� �Ľ�Ÿ �������� �ϴµ� �ʴ� ������ũ ������?             ��\n");
		printf("�� ����: �׷� �� ��� ������!!                                        ��\n");
		printf("��������������������������������������������������������������������������\n");
		system("pause");
		system("cls");

		printf("��������������������������������������������������������������������������\n");
		printf("�� ���� : �մ� �ֹ� ���͵帮�ڽ��ϴ�.                                   ��\n");
		printf("�� ���� : ������� �ϳ��� �Ƚɽ�����ũ �ϳ� �ּ���.                   ��\n");
		printf("�� ����� �������� �ֹ��ϴ� ����� ������.                           ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:���ƾ� �� �ֹ��ǰ� ���Ѵ�~~                                        ��\n");
		printf("�� B:���ƾ� �� �ֹ��ϴ°�  �ʹ� ���ִ�~                                 ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("��������������������������������������������������������������������������\n");
		printf("�� ������ ���Դ�                                                        ��\n");
		printf("�� ���� : (������ ������ũ�� ����ش�.)                                 ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:�� ���ƾ� ���� �� �Ǵµ� ����!                               ��\n");
		printf("�� B:�ʵ� ������~                                                       ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������������������������������������������������������\n");
		printf("�� �츮�� ���� �� �԰� ���� ������ ����.                              ��\n");
		printf("�� �Ѱ����� 32000���� ���Դ�.                                           ��\n");
		printf("�� ����: �������� ���� ���Գ�...                                        ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:(ī�带 �ǳ׸�)�� ������ּ���.                                    ��\n");
		printf("�� B:�ϳ� ���� ������ּ���                                             ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);



	do {
		printf("����������������������������<é��5: �Ѱ�����>����������������������������\n");
		printf("�� �츮�� ���ֿ� ���ڸ��� ������ �ͼ� �ڸ��� ��Ҵ�.                    ��\n");
		printf("�� ����: ���� �Ϸ� ���?                                              ��\n");
		printf("��                                                                      ��\n");
		printf("�� A:���� �����Ҿ�!!�ʴ� ���?                                        ��\n");
		printf("�� B:���� ���Ҿ�!!�ʴ� ���?                                          ��\n");
		printf("��������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ����: �츮 ���� ���� ����?? ���� ���� ������ �ż�...                    ��\n");
		printf("��                                                                                  ��\n");
		printf("�� A:�츮 30�и� �� �ִ� ���� �ȵɱ�?? ��ġ�� �ʹ� ����~!                           ��\n");
		printf("�� B:�׷��׷�~ �ð��� ���� �̷��� �Ƴ�! �� ����! ���� ���� ������ �� �� ����~     ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� �츮�� �߰��� ���鼭 ���� ���� ���� �ɾ�� �ִ�.                               ��\n");
		printf("�� ����: ��... �ð��� ���� �ʾ����ϱ� ���� �ʳ� ������ ������ �ٰ�.              ��\n");
		printf("��                                                                                  ��\n");
		printf("�� A:�׷�~ �׷� ���� ����~!                                                       ��\n");
		printf("�� B:�ƴϾ�~ �� ȥ�� ���� �������~                                                 ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		scanf("%c", &p);
		woman_jh_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("��������������������������������������������������������������������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.                            ��\n");
	printf("�� �����ִ� ���ε��� ������ �׿� ���� �������� �˸��� �ʹ�.                         ��\n");
	printf("�� ����: ���� ���� ����־���, ������ ��ȸ �Ǹ� �׶� ȫ�� ���� ��� ����!           ��\n");
	printf("�� ���:���...!���ƾ�~! �� �� ��Ⱑ �־�...  ""�츮���� �ҷ���""                    ��\n");
	printf("��������������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : ���ƾ� �ȳ�?                                                ��\n");
		printf("�� ���� : �� �׷� �ȳ�~                                                             ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : ����ٴѴٸ�!�׷� �����̳� ���� ���ϰڴ�~!                              ��\n");
		printf("�� ���� : ��~������ �ʰ� ��.                                                        ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : �� ���ִ�!�츮 ����Ͽ� ������� �Ѱ� ������� ?                        ��\n");
		printf("�� ���� : �� 6�ÿ� ������� �Ѱ� ����?                                              ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : ����!�츮 ����Ͽ� �Ѱ� ����!                                           ��\n");
		printf("�� ���� : ����~�׷� ����� 6�ÿ� �Ѱ��������� ������.                               ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : �׷�~!!�׷� ����Ͽ� ��~����!                                           ��\n");
		printf("�� ���� : �׷� �ʵ� ����!                                                           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� �����̿� ������ ������� �� ����.                                                ��\n");
		printf("�� �����̴� �ǰ� ���ϰ� ǥ���� �� ���ϴ� �� ����.                                   ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : ���� �ʰ� ���� ģ�� �¾�??                                         ��\n");
		printf("�� ��� : �� �ȳ�~!�ʰ� ���� ģ�� �����̱���~                                   ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �� ������ �ݰ��� �� ��� ���� �����.���̰� �� ��ô ���ϴٰ� �ϴ���     ��\n");
		printf("�� ��� : ���������� ���������� �츮 ����Ͽ� ������� �� �� ������� ?           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : ��~�츮 ��� �����°� ������ ?                                          ��\n");
		printf("�� �����̴� ǥ���� �� ���ϴ°� ����.���� ��Ҹ� ���ؾ߰ڴ�!                         ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : �׷��� �츮 �ָ��� �Ѱ� ���°� � ? �Ѱ� �߰� ���°� ���� ���ŵ�!     ��\n");
		printf("�� ���� : ������ ����.�׷� 6�ÿ� �Ѱ� ���� �տ��� ������.                           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ��� : �׷�~����Ͽ� ����!����!                                                ��\n");
		printf("�� �츮�� ��� ���� ������ �� ����.                                                 ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ����:�׷��� ������? ���� ���ϱ� �𸣰ڴ�                                         ��\n");
		printf("�� �������� �ɻ�ġ �ʴ�.                                                            ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���: �׷� ��å�̶� �ұ�?                                                    ��\n");
		printf("�� ���� : ��~������ �ʾ�.                                                           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� :�׷�~�� �ȴ°� ����~                                                       ��\n");
		printf("�� �츮�� �ȱ� �����ߴ�.                                                            ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �׷���~ �Ӹ��� ��ǳ�� ��������. ���.                                   ��\n");
		printf("�� ����̴� �������� ������ ����� ȣ���� ������ �����ߴ�.                        ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : (�ǽ� ������) ��..��~ �Ϳ���.                                             ��\n");
		printf("�� ����� �������� ���ٸ� ����� ȣ���� ������ �����ߴ�.                          ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �뷧�Ҹ��� �鸮�µ�? ����ŷ �ϳ��� .                                      ��\n");
		printf("�� ���: �� �׷���? �׷� �����ҷ�?                                                ��\n");
		printf("�� �츰 ����ϰ� ����ŷ�ϴ°����� ������ߴ�.                                       ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 3) = 5;

		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �׷���? ���� �����ϴ� �뷡�ŵ�.                                           ��\n");
		printf("�� ��Ŵ� ����ŷ�ϴµ��� �޷�����.                                                ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : ���� �߶�� �����ϴµ� �߶�带 ������ ���� ���������� ������ ���..      ��\n");
		printf("�� �츰 ���� ������ �Ǿ���.                                                         ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �� �׷�? �� �߶�带 �� ������..                                          ��\n");
		printf("�� �츰���� �����ȴ�.                                                               ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : ��.. �˼��մϴ�.                                                          ��\n");
		printf("�� �������� ǥ���� ���� �ʾ� ���δ�.                                                ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : �� ��������?.                                                             ��\n");
		printf("�� ���: ���� ���� ó�� �����µ� ���� ������ ����^^.                          ��\n");
		printf("�� �����̰� ��Ȳ���ϸ� �Ͱ� ��������.                                               ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : (�Ͱ� ��������) ��..�׷�? ����                                          ��\n");
		printf("�� �����̴� ���� �����ϴ°� ���Ҵ�.                                               ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�� ���� : (��Ȳ���ϸ�)��..�� ����..                                               ��\n");
		printf("�� �����̰� ���� �δ㽺���� �ϰ��ִ�.                                               ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("�������̴� �����ϴ� �׳��� ����� �ŷ��� ������.                                  ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("�������̴� ������ �׳��� ����� ���Ҵ�.                                             ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("������:��? �װ� ���°ž�? ���ִ� ���� ���!                                         ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("���̰ɷδ� ���� �����ϴ١����� ��ĵ �ұ�?                                           ��\n");
		printf("�����:�׷� �Ѱ� ���� ���� ��ĵ����!                                              ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("������ ���� �����Ҿ�~ ���� �����Ƽ� �����̴�.                                       ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("������ ���� ���Ҿ�~ �������� ������ � ����?                                      ��\n");
		printf("�����: �׷�~! �װ� ���� ���� �����̴�!                                           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");




		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("������: �̾��ѵ� ��¥ ������ �� �� ����.                                            ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("������;����~~������ �� ���Ǵϱ� ������ ������� ����                            ��\n");
		printf("�����: �׷�~! �װ� ���� ���� �����̴�!                                           ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������\n");
		printf("������: ���� �ʾ����ϱ� �� ����.                                                  ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");


		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("��������������������������������������������������������������������������������������\n");
		printf("������: �ƴϾ� �ð��� ���� �ʾ �����ϴϱ� ���� ������ �ٰ�                       ��\n");
		printf("��������������������������������������������������������������������������������������\n");
		system("pause");
		system("cls");



		break;
	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
		break;
	}
}

void f_finish_jh(int total)
{
	if (total <= 41)
	{
		printf("��������������������������������������������������\n");
		printf("�� �������� ǥ���� ���� �ʴ�                    ��\n");
		printf("��                                              ��\n");
		printf("�� ���� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� �������� ǥ���� �̽�½�� ���δ�                    ��\n");
		printf("��                                                    ��\n");
		printf("�� ���� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� �������� ǥ���� ���                                   ��\n");
		printf("��                                                        ��\n");
		printf("�� ���� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}
void woman_ds(char p, person *user)
{
	do {
		printf("������������������< é�� 1. ī�� >����������������\n");
		printf("�� ��ȯ�̰� ģ���� �Ұ������                   ��\n");
		printf("�� ����ó�� �޾Ҵµ� ��� �ؾ��ұ�?           ��\n");
		printf("��                                              ��\n");
		printf("�� A:���� ī���� �Ѵ�                           ��\n");
		printf("�� B:��! ����Ͽ� ��!><                         ��\n");
		printf("��������������������������������������������������\n");
		scanf("%c", &p);
		woman_ds_C1_Q1(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������< é��2. ù ���� >��������������������\n");
		printf("�� ����ߴ� �ð��� �ٰ����� �ִ�.                         ��\n");
		printf("�� �� �ָ��� �������� ������ ������ ���� ����� �� �ִ�   ��\n");
		printf("������������������������������������������������������������\n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������������   \n");
		printf("�� �����̴� �������� �߻��� �� ����.                    ��\n");
		printf("�� ��� : �ȳ�! �� ������ ����??                ��\n");
		printf("�� ���� : �� �ȳ�?? ���� �߻��ܼ� �ٷ� ������?����      ��\n");
		printf("�� ��� :  ������������㵵 ��!!                      ��\n");
		printf("��                                                      ��\n");
		printf("�� A:�츮 ���� ���ұ�?                                  ��\n");
		printf("�� B: ������ ������ �츮 ��å�ұ�?.                     ��\n");
		printf("���������������������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C2_Q2(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������\n");
		printf("�� ������ �帥��. �ֺ��� ��ǳ�� ���ڰ� ����� �ִ�.     ��\n");
		printf("��                                                      ��\n");
		printf("�� A: (��ǳ�� �ָ��� �ٶ󺸸�) ��~��ǳ�� ���ڴ�!        ��\n");
		printf("�� B: (��ǳ���� �Ӹ��� ������) �� ����?                 ��\n");
		printf("���������������������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C2_Q3(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������\n");
		printf("�� �츮�� ������� Ǯ�� �� ����.                        ��\n");
		printf("�� �츮�� �ȴٰ� ����� �����ִ� ������ ���ߴ�.         ��\n");
		printf("�� ���� : ��? ���� ������� ���� �ִµ� ���� ������?    ��\n");
		printf("��                                                      ��\n");
		printf("�� A: ������ �ִ°� �ƴϾ�?? �ٸ� ��� ����?            ��\n");
		printf("�� B: ����ŷ �ϳ���~ �����ұ�?                          ��\n");
		printf("���������������������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C2_Q4(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������<é��3 ����ŷ>������������������\n");
		printf("�� (�뷡��)                                       ��\n");
		printf("�� ���� : �뷡 ���Ѵ�~ �ʴ� ���� �뷡 ������?     ��\n");
		printf("��                                                ��\n");
		printf("�� A:���� �߶�� ������~                          ��\n");
		printf("�� B:���� ������ ������~                          ��\n");
		printf("����������������������������������������������������\n");
		scanf("%c", &p);
		woman_ds_C3_Q5(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������   \n");
		printf("�� ���ڱ� �� ������ ����ũ�� �ٰ��Դ�                   ��\n");
		printf("�� ���� : �ű� �� �� �����Ⱑ �����ó׿�~ ���� ���̼���?��\n");
		printf("��                                                      ��\n");
		printf("�� A:(��Ȳ�ϸ�) ���� ģ������                           ��\n");
		printf("�� B:(���������ϸ�) ���� ���� �ƹ����� �ƴϿ���~        ��\n");
		printf("���������������������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C3_Q6(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("�������������������������� <é��4: �������>��������������������\n");
		printf("�� ����ŷ�� ������ �츮�� ���� �Ա�� �ߴ�.                   ��\n");
		printf("�� �츮�� ��������� ���� �ڸ��� �ɾҴ�.                    ��\n");
		printf("�� �������� �޴����� �̴ּ�.                                  ��\n");
		printf("�� ��� : �츮 �� ������?                                   ��\n");
		printf("���������������������������������������������������������������� \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������������   \n");
		printf("�� ���� : �����~������ ���� �� �Դ��ɷ� �ּ���!                      ��\n");
		printf("�� ���� : �մ� ���� ó�� �˴°� ������ �ֹ��� �տ��� ���� �帮�ڽ��ϴ٦�\n");
		printf("�� ���� : ��..^^ �˼��մϴ�...��                                      ��\n");
		printf("�� ��� �̴� �������� ����� �ʹ� �Ϳ�����                          ��\n");
		printf("��                                                                    ��\n");
		printf("�� A:������ ������ �Ϳ����� ���� �ֹ��ϰ� �ð�~~                      ��\n");
		printf("�� B: �ڤ����������� �װ� �� �տ� ���� �ֹ��ϰ� ��                  ��\n");
		printf("������������������������������������������������������������������������ \n");
		system("pause");
		scanf("%c", &p);
		woman_ds_C4_Q7(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������\n");
		printf("�� ������ ���Դ�                  ��\n");
		printf("�� ���� : �������� �����ؼ� �Ծ�~ ��\n");
		printf("��                                ��\n");
		printf("�� A:������ ���� �Ծ� ����~!      ��\n");
		printf("�� B: �ʵ� ������~                ��\n");
		printf("������������������������������������ \n");

		scanf("%c", &p);
		woman_ds_C4_Q8(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);


	do {
		printf("��������������������������������������������   \n");
		printf("�� �츮�� ���� �� �԰� ���� ������ ����.��\n");
		printf("�� �Ѱ����� 32000���� ���Դ�.             ��\n");
		printf("�� ����: �������� ���� ���Գס�.          ��\n");
		printf("��                                        ��\n");
		printf("�� A:(ī�带 �ǳ׸�)�� ������ּ���       ��\n");
		printf("�� B: �ϳ� ���� ������ּ���.             ��\n");
		printf("�������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C4_Q9(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("��������������������������<é��5:�Ѱ�����>������������������������\n");
		printf("�� �츮�� ���ֿ� ���ڸ��� ������ �ͼ� �ڸ��� ��Ҵ�.            ��\n");
		printf("�� ����:���� �Ϸ� ���?                                       ��\n");
		printf("��                                                              ��\n");
		printf("�� A:���� �����Ҿ�!!�ʴ� ���?                                ��\n");
		printf("�� B: ���� ���Ҿ�!!�ʴ� ���?                                 ��\n");
		printf("������������������������������������������������������������������ \n");
		scanf("%c", &p);
		woman_ds_C5_Q10(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("����������������������������������������������������������������������������������   \n");
		printf("�� ����:  �츮 ���� ���� ����?? ���� ���� ������ �ż���                 ��\n");
		printf("��                                                                              ��\n");
		printf("�� A:�츮 30�и� �� �ִ� ���� �ȵɱ�?? ��ġ�� �ʹ� ����~!                       ��\n");
		printf("�� B: �׷��׷�~ �ð��� ���� �̷��� �Ƴ�! �� ����! ���� ���� ������ �� �� ����~��\n");
		printf("���������������������������������������������������������������������������������� \n");
		scanf("%c", &p);
		woman_ds_C5_Q11(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	do {
		printf("������������������������������������������������������������������������������������   \n");
		printf("�� �츮�� �߰��� ���鼭 ���� ���� ���� �ɾ�� �ִ�.                             ��\n");
		printf("�� ����:��... �ð��� ���� �ʾ����ϱ� ���� �ʳ� ������ ���𰡵� ���ٰ� ������? ��\n");
		printf("��                                                                                ��\n");
		printf("�� A:�׷�~ �׷� ���� ����~!                                                     ��\n");
		printf("�� B: �ƴϾ�~ �� ȥ�� ���� �������~                                              ��\n");
		printf("������������������������������������������������������������������������������������ \n");
		scanf("%c", &p);
		woman_ds_C5_Q12(p, user);
		getchar();
		system("cls");
	} while (p != 65 && p != 66);

	printf("���������������������������������� <é��6  �츮 �� ��>������������������������\n");
	printf("�� �츮 �� �տ� �ٴٸ��� ����� �ð��� �� ���� �ʾҴ�.                    ��\n");
	printf("�� �����ִ� ���ε��� ������ �׿� ���� �� ������ �˸��� �ʹ�.                ��\n");
	printf("�� ����: ���� ���� �����̾���, ������ ��ȸ�� �Ǹ� �׶� ȫ�� ���� ��� ����! ��\n");
	printf("�� ��� : ���....!�� �� ��Ⱑ �־�.���츮 ���� �ҷ�����                 ��\n");
	printf("������������������������������������������������������������������������������ \n");
}

void woman_ds_C1_Q1(char p, person *user)
{
	switch (p)
	{
	case'A':
		*sum = 7;
		system("cls");
		printf("����������������������������������������������������   \n");
		printf("�� ��� : ������ �ȳ�?                             ��\n");
		printf("�� ���� : �ȳ�!���� ������ �氡��!                ��\n");
		printf("���������������������������������������������������� \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������   \n");
		printf("�� ��� : �ʴ� ü���� ����µ� �б���Ȱ  �?        ��\n");
		printf("�� ���� : �ٴҸ��ѵ� ���� ���� �� ���� �� �����󤻤�      ��\n");
		printf("������������������������������������������������������������ \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������������\n");
		printf("�� ��� : �������ῡ ���� �ھ���~! �ٵ� �츮 ���� �ѹ� ������?��\n");
		printf("�� ���� : �� ���Ƽ� ���� �����ڰ� �ϰ� ������?����              ��\n");
		printf("������������������������������������������������������������������ \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� ��� : �������� �ָ����� �����ѵ� ����Ͽ� �Ѱ� ����!��\n");
		printf("�� ���� : �� ��������~! ���� �Ѱ� ������ �;���!          ��\n");
		printf("������������������������������������������������������������ \n");
		system("pause");
		system("cls");
		printf("����������������������������������������������������   \n");
		printf("�� ���: �׷����� �׷� �츮 ����Ͽ� ������!!!  ��\n");
		printf("�� ���� : ��! ����Ͽ� ��!><.                     ��\n");
		printf("���������������������������������������������������� \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������\n");
		printf("�� �����̿� ������ ������� �� ����.                ��\n");
		printf("�� �����̿� ���� ������ �˰� �� �� ����!            ��\n");
		printf("������������������������������������������������������ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*sum = 4;
		system("cls");
		printf("��������������������������������������������������������\n");
		printf("�� ����: �ȳ� Ȥ�� ��ȯ�� ģ��  �¾�??            ��\n");
		printf("�� ���: �� �ȳ�~! �ʰ� ��ȯ�� ģ�� �����̱���~     ��\n");
		printf("�������������������������������������������������������� \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������������������\n");
		printf("�� ���� : �¾Ƥ��� �� ���ڴٰ� ����µ� ����̾�����?^^   ��\n");
		printf("�� ��� : ����������~! �츮 ���� �����°� ������?     ��\n");
		printf("������������������������������������������������������������ \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������   \n");
		printf("�� ����: �������� ������?!����                ��\n");
		printf("�� �����̴� ���ӷ����� �� ����.               ��\n");
		printf("������������������������������������������������ \n");
		system("pause");
		system("cls");
		printf("��������������������������������������������������������������������������������������   \n");
		printf("����� : �������׷��� �츮 �ָ��� �Ѱ� ���� �� �? �� ����Ͽ� �ð��� �����ŵ�! ��\n");
		printf("������ : �׷� �׷�!! �׷� ����Ͽ� ����!                                            ��\n");
		printf("�������������������������������������������������������������������������������������� \n");
		system("pause");
		system("cls");
		printf("������������������������������������������������   \n");
		printf("�� ��� : �׷�~����Ͽ� ���� ������!!       ��\n");
		printf("�� �츮�� ������� ������� �� ����.          ��\n");
		printf("������������������������������������������������ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������   \n");
		printf("�� ����:�׷��� ������? ���� ���ϱ� �𸣰ڳ�     ��\n");
		printf("�� ��� : �׷� ��å�̶� �ұ�?               ��\n");
		printf("�������������������������������������������������� \n");

		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 1) = 6;
		system("cls");
		printf("����������������������������������������   \n");
		printf("�� ���� : ���� �� �ȴ°� ������       ��\n");
		printf("�� ���: �׷�~�׷� �츮 �� ����!    ��\n");
		printf("���������������������������������������� \n");
		system("pause");
		system("cls");;
		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������������������������������   \n");
		printf("�� ���� : �׷���~ ��! �Ӹ��� ��ǳ���� �������� ������ �־��~ ��\n");
		printf("�� ����̴� �������� ������ ����� ȣ���� ������ �����ߴ�.  ��\n");
		printf("���������������������������������������������������������������� \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 2) = 9;
		system("cls");
		printf("����������������������������������������������������������������   \n");
		printf("�� ���:(��ǳ���� �Ӹ��� ������) �� ����?                   ��\n");
		printf("�� ���� : (��ǳ���� �Ӹ��� ������)���� �� ������?             ��\n");
		printf("�� ����� �������� ���ӽ����� ����� ȣ���� ������ �����ߴ�.��\n");
		printf("���������������������������������������������������������������� \n");
		system("pause");
		system("cls");
		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������\n");
		printf("�� ���� : ��? �뷧�Ҹ��� �鸮�µ�? ����ŷ �ϳ�����\n");
		printf("�� ���: �� �׷���? �׷� �����ҷ�?           ��\n");
		printf("��������������������������������������������������\n");
		system("pause");
		system("cls");
		break;
	case 'B':
		*(sum + 3) = 5;
		system("cls");
		printf("������������������������������������������������������\n");
		printf("�� ���� : �� ����ŷ �����ϴµ�! �츮 ���� ��������! ��\n");
		printf("������������������������������������������������������\n");
		system("pause");
		system("cls");

		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("������������������������������������������������������������������������������   \n");
		printf("�� ���� : �� ���� ������ �Ȱ���!���� ������ ǳ���ؼ� �׷��� �߶�尡 ������!��\n");
		printf("������������������������������������������������������������������������������ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 4) = 4;
		system("cls");
		printf("������������������������������������������������������   \n");
		printf("�� ���� : ��¾�� �� ���� �ִ���! ���� �߶�� ������~��\n");
		printf("������������������������������������������������������ \n");
		system("pause");
		system("cls");


		break;

	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������\n");
		printf("�� ���� : ��.. �˼��մϴ�       ��\n");
		printf("�� �������� ǥ���� �����ʴ�     ��\n");
		printf("���������������������������������� \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 5) = 10;
		system("cls");
		printf("��������������������������������������������������������������   \n");
		printf("�� ���� : �� ��������?                                      ��\n");
		printf("�� ��� : ���� ���� ó�� �����µ� ���� ������ ����^^  ��\n");
		printf("�� �����̴� ũ�� ������ �Ͱ� ��������.                      ��\n");
		printf("�������������������������������������������������������������� \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������   \n");
		printf("�� ���� : ��..��! �׷� ���� �̷����� ó���̾������ ��\n");
		printf("�������������������������������������������������������� \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 6) = -5;
		system("cls");
		printf("��������������������������������������������������\n");
		printf("�� ���� : �׷��߰ڴ�...������ ���� �ð�~      ��\n");
		printf("�� �������� ǥ���� ���� �ʴ�.                   ��\n");
		printf("�������������������������������������������������� \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("��������������������������������������������������������   \n");
		printf("�� �����̴� �� ì���ִ� �׳��� ����� �ŷ��� ������.  ��\n");
		printf("�������������������������������������������������������� \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 7) = 3;
		system("cls");
		printf("�������������������������������������������������� \n");
		printf("�� �����̴� ������ �׳��� ����� ���Ҵ�.        ��\n");
		printf("�������������������������������������������������� \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������������������\n");
		printf("�� ����:��? �װ� ��°ž�? �׷� ���ִ� ���� ���!!��\n");
		printf("����������������������������������������������������\n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 8) = 4;
		system("cls");
		printf("����������������������������������������������������\n");
		printf("�� ����:������ ������ּ���                       ��\n");
		printf("�� ����: �̰ɷδ� ���� �����ϳס����� ��ĵ �ұ�?  ��\n");
		printf("�� ���:�׷� �Ѱ� ���� ���� ��ĵ����!           ��\n");
		printf("���������������������������������������������������� \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("����������������������������������������   \n");
		printf("�� ����:���� ���� ��������~!          ��\n");
		printf("�� ���ڱ� ������ �̻�������.          ��\n");
		printf("���������������������������������������� \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 9) = 5;
		system("cls");
		printf("��������������������������������������������������������������   \n");
		printf("�� ����:���� ���� ���Ҿ�~! �������� ������ � �ٴ���~!    ��\n");
		printf("�� ���: �׷�~! �װ� ���� �� ���̽�!?                       ��\n");
		printf("�������������������������������������������������������������� \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("������������������������������������������������������������   \n");
		printf("�� ����: �̾��ѵ� �� ��¥ ������ �� �� ����! �� ����!   ��\n");
		printf("�� �ƽ��� ������ �ڷ��ϰ� �츰 ����ߴ�.                  ��\n");
		printf("������������������������������������������������������������ \n");
		system("pause");
		system("cls");

		break;
	case 'B':
		*(sum + 10) = 5;
		system("cls");
		printf("������������������������������������������������   \n");
		printf("�� �׷��׷�~ �ð��� ���� �̷��� �Ƴ�!         ��\n");
		printf("�� �� ����! ���� ���� ������ �� �� ����~    ��\n");
		printf("������������������������������������������������ \n");
		system("pause");
		system("cls");


		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
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
		printf("������������������������������������������������������   \n");
		printf("�� ����: �׷�! �� ���� �����~!                   ��\n");
		printf("�� �ƽ��� ������ �ڷ��ϰ� �츰 ����ߴ�.            ��\n");
		printf("������������������������������������������������������ \n");
		system("pause");
		system("cls");
		break;

	case 'B':
		*(sum + 11) = 3;
		system("cls");
		printf("������������������������������������������������������ \n");
		printf("�� ����: �ƴϾ� �ȵ�~                               ��\n");
		printf("�� �ð��� ���� �ʾ �����ϴϱ� ���� ������ �ٰ�!  ��\n");
		printf("�� ���: ����~                                  ��\n");
		printf("������������������������������������������������������ \n");
		system("pause");
		system("cls");

		break;


	default:
		printf("������������������������������\n");
		printf("�� �߸� �Է��ϼ̽��ϴ�.     ��\n");
		printf("�� �ٽ� �������ּ���.       ��\n");
		printf("������������������������������\n");
		break;

	}
}

void f_finish_ds(int total)
{
	if (total <= 41)
	{
		printf("��������������������������������������������������\n");
		printf("�� ������ ǥ���� ���� �ʴ�                      ��\n");
		printf("��                                              ��\n");
		printf("�� ���� : �츮 ���� �� �ȸ´°� ����            ��\n");
		printf("��        �׷��� ... ��... �츮�� �ƴѰ� ����   ��\n");
		printf("��        ���� �̾�                             ��\n");
		printf("��        �ȳ� �׷� ������                      ��\n");
		printf("��������������������������������������������������\n");

		printf("����� ���ֽǷ��� ������Դϴ�\n");
		printf("�������� ���¼ַ� �ƴϽŰ���?\n");

	}
	else if (total <= 57)
	{
		printf("��������������������������������������������������������\n");
		printf("�� ������ ǥ���� �̽�½�� ���δ�                      ��\n");
		printf("��                                                    ��\n");
		printf("�� ���� : ���� ������� �߾�                          ��\n");
		printf("��        �ٵ� ���ΰ� �����⿣ ���� �����Ѱ� ����     ��\n");
		printf("��        �츮 �׳� ģ���� ������                     ��\n");
		printf("��        �ȳ� �׷� ������                            ��\n");
		printf("��������������������������������������������������������\n");

		printf("���� �ƽ���ó׿�\n");
		printf("���� �� �й��Ͻø� �ַ� Ż��!!\n");
	}
	else if (total <= 73)
	{
		printf("������������������������������������������������������������\n");
		printf("�� ������ ǥ���� ���                                     ��\n");
		printf("��                                                        ��\n");
		printf("�� ���� : ���� ���� ���Ϸ��� �ߴµ�...                    ��\n");
		printf("��        �ʰ� ���� ���߳�? �׷�! �츮 ��������           ��\n");
		printf("��        �� ���� ���� �ൿ �ϳ��ϳ� �� ������ �����     ��\n");
		printf("��        ���� �������༭ ���� ��                       ��\n");
		printf("������������������������������������������������������������\n");

		printf("�Ϻ��Ͻñ���!!\n");
		printf("���� �����Դϴ� ȭ����!!\n");
	}
}