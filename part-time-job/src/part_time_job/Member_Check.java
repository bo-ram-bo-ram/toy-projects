package part_time_job;

import java.util.*;
import part_time_job.*;

public class Member_Check {

	int user;	//ȸ������ �ƴ��� �Է¹޴� user����
	int master;	//�α����� ����� master���� �ƴ��� �������ִ� ����
	Scanner sc = new Scanner(System.in);
	Join jo = new Join();
	Login L2 = new Login();
	
	protected void second_screen() {
		
		
			do	
			{
				System.out.println("������������������������������������������������������������������������������");
				System.out.println("    �ڡ١ڡ١ڡ�ȯ���մϴ١ڡ١ڡ١ڡ� ");
				System.out.println("    ȸ���̽Ű���?");
				System.out.println("    1.��  2.�ƴϿ� ȸ���� �ǰ�;��!  ");	
				System.out.println("������������������������������������������������������������������������������");
				
				user = sc.nextInt();
				
			}while(user!=1 && user!=2);
	
			if(user==1)
			{
			            L2.logining(); // �α���	
			}
			else if(user==2)
			{		//����ڰ� ȸ���� �ƴ϶�� Join �Լ��ΰ��� ȸ������
				jo.Joining();
				
				while (true)
	            {
		            L2.logining(); // �α���
		            
		            if(L2.aa == 1)
		            {
		            	break;
		            }
		            else if(L2.loginSuccess ==true)
		            {
		            	break;
		            }
	            break;
	            }
			}
			else //�߸� �Է����� ��� ����â
			{
				System.out.println("������������������������������������������������������������������������������");
				System.out.println("��  �߸� �Է��ϼ̽��ϴ�                                                 ��  "); 
				System.out.println("��  �ٽ� �Է����ּ���                                                    ��");
				System.out.println("������������������������������������������������������������������������������");
			}
		
	}

	
	
}	
		