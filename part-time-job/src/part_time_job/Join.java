package part_time_job;

import java.io.*;
import java.util.*;

class Joiner{	
		String name;
		String account;
		String bank;
		String ID;
		String PASSWORD1;
		String PASSWORD2;
}


public class Join {
	

	int master=0;
	Joiner joiner = new Joiner(); //��ü�� �����Ͽ� ȸ�������ϴ� ����ڰ� �Է��ϴ� �� �޾Ƽ� ����
	
	File temp = new File("c:\\Temp\\member.txt");

	Scanner sc = new Scanner(System.in);
	
	public int Joining() {
	
		System.out.println("������������������������������������������������������������������������������");
		System.out.println("   �ڡ١ڡ١ڡ�ȸ�������� �����մϴ١ڡ١ڡ١ڡ�");
		System.out.println("������������������������������������������������������������������������������"); 
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in)); //���ڿ� �Է¿�
	    //* ǥ�� �Է� ��Ʈ�� System.in�� InputStreamReader ��Ʈ���� ����
		//��������¿�    
		BufferedWriter writer = null;
		try {
				writer = new BufferedWriter(new FileWriter("c:\\Temp\\member.txt", true));
				
				System.out.print("�̸� : ");
				joiner.name = reader.readLine();	
				
				System.out.print("ID : ");
				joiner.ID = reader.readLine(); 	
			
				System.out.print("password : ");
				joiner.PASSWORD1 = reader.readLine();	
				System.out.print("Ȯ���� ���� �ٽ� �ѹ� �Է� ���ֻ���... \n");
				System.out.print("password : ");
				joiner.PASSWORD2 = reader.readLine();
			
				while(joiner.PASSWORD2.equals(joiner.PASSWORD1)==false)
				{
					System.out.println("password�� ���� �ٸ��ϴ�. �ٽ� �ѹ� �Է� ���ּ��� \n");
					joiner.PASSWORD2 = reader.readLine();
				}
					
				do
				{
					System.out.println("�����ڶ�� 1�� �Է��ϰ� �˹ٻ��̶�� 2�� �Է��ϼ���");
					master = sc.nextInt();
					
					if(master == 1)
					{
						joiner.account="NULL";
						joiner.bank="NULL";
					}
					else if(master == 2)
					{
						System.out.print("�޿����� ���¹�ȣ��?");
						joiner.account = reader.readLine();
						
						System.out.print("�� ���´� ��� ���� �����ΰ���?");
						joiner.bank = reader.readLine();
					}
					else //�߸� �Է����� ��� ����â
					{
						System.out.println("������������������������������������������������������������������������������");
						System.out.println("��  �߸� �Է��ϼ̽��ϴ�                                                 ��  "); 
						System.out.println("��  �ٽ� �Է����ּ���                                                    ��");
						System.out.println("������������������������������������������������������������������������������");
						
					}
				}while(master!=1  && master!=2);	//1�� �ƽ�Ű�ڵ尪 :49, 2�� �ƽ�Ű�ڵ尪 : 50
				
					   writer.write(String.format("%s		%s		%s		%s		%s		%s		",
				joiner.name , joiner.ID ,joiner.PASSWORD1, joiner.account, joiner.bank, master)); //�Է��� ���� ����
			          
					   writer.newLine(); //�޸��� �� �ٲ�
			            
			            writer.close(); //BufferedWriter ����	
					
			}catch(IOException e) {
			System.out.println("����� ����");}
		
		
	
		System.out.println("������������������������������������������������������������������������������");
		System.out.println("  ȸ�����ԵǼ̽��ϴ�!");
		System.out.println("  �α����� ������ �ּ���");
		System.out.println("������������������������������������������������������������������������������");
		

		
		return master;
	}
}
