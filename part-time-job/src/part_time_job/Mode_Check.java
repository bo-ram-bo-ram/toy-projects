package part_time_job;

import java.io.*;
import java.util.*;	//scanner와 calendar사용하기

public class Mode_Check extends Login {
	
	int master = logining();	//로그인할때 return값인 master값 받아오기
	Scanner sc = new Scanner(System.in);
	int is_choice_1;
	
	int total = 0;
	
	private void start_printCalendar(String when, Calendar cal) {
		
		int hour = cal.get(Calendar.HOUR_OF_DAY);	//24시간으로 나타낸 시간을 변수 hour에 저장
		int min = cal.get(Calendar.MINUTE);	//분을 변수 min에 저장
		int sec = cal.get(Calendar.SECOND);	//초를 변수 sec에 저장
		
		System.out.println(when +hour+"시"+min+"분"+sec+"초");
		
	}
	
	void dkfqk_mode_1(){
		System.out.println("┌─────────────────────────────────────┐");
		System.out.println("               < 메뉴 >");
		System.out.println("   1.출근했어요!");
		System.out.println("   2.종료할래요"); 
		System.out.println("└─────────────────────────────────────┘");
		is_choice_1 = sc.nextInt();
		
		do
		{
			if(is_choice_1==1)
			{
				Calendar start_work = Calendar.getInstance();
				start_printCalendar("출근한 시간 : ", start_work);		//사용자에서 현재시간 알려주기
				
				System.out.println("┌─────────────────────────────────────┐");
				System.out.println("               < 메뉴 >");
				System.out.println("       퇴근시 enter키를 눌러주세요");
				System.out.println("└─────────────────────────────────────┘");
				StopWatch.stopwatch(1);
				StopWatch.pause();
				StopWatch.stopwatch(0);
				
				Calendar end_work = Calendar.getInstance();
				start_printCalendar(" 퇴근한 시간 : ", end_work);
				
				String time = StopWatch.timerBuffer;	//일한 시간을 저장하는 변수
				System.out.println(" 일한시간 : " + time);	
			
				int today_money = Money.today_money(); //money에서 계산한 하루급여를 today_money에 저장
				System.out.println("오늘은 "+ today_money+"원을 벌었어요");
				
				BufferedWriter writer = null;
				
				try {
					writer = new BufferedWriter(new FileWriter("c:\\Temp\\1862007_김보람\\master.txt", true));
					writer.write(String.format("%s		", today_money));//입력한 정보 저장
					writer.close();
				
				BufferedReader reader1 = null;
				
				int total = 0;
					reader1 = new BufferedReader(new FileReader("c:\\Temp\\1862007_김보람\\master.txt"));
					String s = null; 
				       
				    while ((s = reader1.readLine()) != null)  
			      { 
				          
				      	 String[] split = s.split("		"); 
					
				      	 
				      	 for(int i =0; i<=100000; i++)
				     	 {
				      		 total += Integer.parseInt(split[i]);	//월급 계산하기
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
						       		 writer2.write(String.format("%s		%s		",id,total)); //입력한 정보 저장
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
				System.exit(1); 	//종료
			}
			else
			{
				System.out.println("┌─────────────────────────────────────┐");
				System.out.println("│  잘못 입력하셨습니다                                                 │  "); 
				System.out.println("│  다시 입력해주세요                                                    │");
				System.out.println("└─────────────────────────────────────┘");
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
			       		 System.out.println(" 알바생 "+split[0]+"의 이번달 월급 : "+split[6]+"원 입니다");
			       		 System.out.println(" 계좌번호는 "+split[3]+"이며 은행은 "+split[4]+"은행 입니다");
			       	 }
				     
		        }            
					reader2.close();
			} catch (IOException e) {
				
				e.printStackTrace();
			} 
		
		
		
	}
		

	protected void third_screen() {
	if(master==1)	//관리자라면
	{
		master_mode();
	}
	else	//알바생이라면
	{
		dkfqk_mode_1();
	}
	
}
}
	
	