package part_time_job;

import java.io.*;
import java.util.*;	//scanner�� calendar����ϱ�

public class Mode_Check extends Login {
	
	int master = logining();	//�α����Ҷ� return���� master�� �޾ƿ���
	Scanner sc = new Scanner(System.in);
	int is_choice_1;
	
	int total = 0;
	
	private void start_printCalendar(String when, Calendar cal) {
		
		int hour = cal.get(Calendar.HOUR_OF_DAY);	//24�ð����� ��Ÿ�� �ð��� ���� hour�� ����
		int min = cal.get(Calendar.MINUTE);	//���� ���� min�� ����
		int sec = cal.get(Calendar.SECOND);	//�ʸ� ���� sec�� ����
		
		System.out.println(when +hour+"��"+min+"��"+sec+"��");
		
	}
	
	void dkfqk_mode_1(){
		System.out.println("������������������������������������������������������������������������������");
		System.out.println("               < �޴� >");
		System.out.println("   1.����߾��!");
		System.out.println("   2.�����ҷ���"); 
		System.out.println("������������������������������������������������������������������������������");
		is_choice_1 = sc.nextInt();
		
		do
		{
			if(is_choice_1==1)
			{
				Calendar start_work = Calendar.getInstance();
				start_printCalendar("����� �ð� : ", start_work);		//����ڿ��� ����ð� �˷��ֱ�
				
				System.out.println("������������������������������������������������������������������������������");
				System.out.println("               < �޴� >");
				System.out.println("       ��ٽ� enterŰ�� �����ּ���");
				System.out.println("������������������������������������������������������������������������������");
				StopWatch.stopwatch(1);
				StopWatch.pause();
				StopWatch.stopwatch(0);
				
				Calendar end_work = Calendar.getInstance();
				start_printCalendar(" ����� �ð� : ", end_work);
				
				String time = StopWatch.timerBuffer;	//���� �ð��� �����ϴ� ����
				System.out.println(" ���ѽð� : " + time);	
			
				int today_money = Money.today_money(); //money���� ����� �Ϸ�޿��� today_money�� ����
				System.out.println("������ "+ today_money+"���� �������");
				
				BufferedWriter writer = null;
				
				try {
					writer = new BufferedWriter(new FileWriter("c:\\Temp\\1862007_�躸��\\master.txt", true));
					writer.write(String.format("%s		", today_money));//�Է��� ���� ����
					writer.close();
				
				BufferedReader reader1 = null;
				
				int total = 0;
					reader1 = new BufferedReader(new FileReader("c:\\Temp\\1862007_�躸��\\master.txt"));
					String s = null; 
				       
				    while ((s = reader1.readLine()) != null)  
			      { 
				          
				      	 String[] split = s.split("		"); 
					
				      	 
				      	 for(int i =0; i<=100000; i++)
				     	 {
				      		 total += Integer.parseInt(split[i]);	//���� ����ϱ�
						  }  
				   }      
				              
					reader1.close();
								
					
				BufferedWriter writer2 = null;
				BufferedReader reader3 = null;
				
						writer2 = new BufferedWriter(new FileWriter("c:\\Temp\\member.txt", true));
						reader3 = new BufferedReader(new FileReader("c:\\Temp\\member.txt"));
						String s2 = null;
						
						 while ((s2 = reader1.readLine()) != null)  
					        {    
						       	 String[] split = s.split("		"); 
						       	 
						       	 if(id.equals(split[1]))
						       	 {
						       		 writer2.write(String.format("%s		%s		",id,total)); //�Է��� ���� ����
						       	 }
					        
					        }
						
						writer2.close();
						
							reader3.close();
						} catch (IOException e) {
							
							e.printStackTrace();
						}
			}	
     
			else if(is_choice_1==2)
			{
				System.exit(1); 	//����
			}
			else
			{
				System.out.println("������������������������������������������������������������������������������");
				System.out.println("��  �߸� �Է��ϼ̽��ϴ�                                                 ��  "); 
				System.out.println("��  �ٽ� �Է����ּ���                                                    ��");
				System.out.println("������������������������������������������������������������������������������");
			}
			}while(is_choice_1!=1 && is_choice_1!=2);
	
	
	
	}
	
	
	
	void master_mode() {
		 
		
		BufferedReader reader2 = null;
		
		try {
				reader2 = new BufferedReader(new FileReader("c:\\Temp\\member.txt"));
		
		
				String s = null; 
				
		        
		        while ((s = reader2.readLine()) != null)  
		        { 
		           
			       	 String[] split = s.split("		"); 
			
			       	 if(split[1] != null )
			       	 {
			       		 System.out.println(" �˹ٻ� "+split[0]+"�� �̹��� ���� : "+split[6]+"�� �Դϴ�");
			       		 System.out.println(" ���¹�ȣ�� "+split[3]+"�̸� ������ "+split[4]+"���� �Դϴ�");
			       	 }
				     
		        }            
					reader2.close();
			} catch (IOException e) {
				
				e.printStackTrace();
			} 
		
		
		
	}
		

	protected void third_screen() {
	if(master==1)	//�����ڶ��
	{
		master_mode();
	}
	else	//�˹ٻ��̶��
	{
		dkfqk_mode_1();
	}
	
}
}
	
	