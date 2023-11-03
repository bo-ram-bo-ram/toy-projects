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
	Joiner joiner = new Joiner(); //객체를 생성하여 회원가입하는 사용자가 입력하는 값 받아서 저장
	
	File temp = new File("c:\\Temp\\member.txt");

	Scanner sc = new Scanner(System.in);
	
	public int Joining() {
	
		System.out.println("┌─────────────────────────────────────┐");
		System.out.println("   ★☆★☆★☆회원가입을 시작합니다★☆★☆★☆");
		System.out.println("└─────────────────────────────────────┘"); 
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in)); //문자열 입력용
	    //* 표준 입력 스트림 System.in에 InputStreamReader 스트림을 연결
		//파일입출력용    
		BufferedWriter writer = null;
		try {
				writer = new BufferedWriter(new FileWriter("c:\\Temp\\member.txt", true));
				
				System.out.print("이름 : ");
				joiner.name = reader.readLine();	
				
				System.out.print("ID : ");
				joiner.ID = reader.readLine(); 	
			
				System.out.print("password : ");
				joiner.PASSWORD1 = reader.readLine();	
				System.out.print("확인을 위해 다시 한번 입력 해주새요... \n");
				System.out.print("password : ");
				joiner.PASSWORD2 = reader.readLine();
			
				while(joiner.PASSWORD2.equals(joiner.PASSWORD1)==false)
				{
					System.out.println("password가 서로 다릅니다. 다시 한번 입력 해주세요 \n");
					joiner.PASSWORD2 = reader.readLine();
				}
					
				do
				{
					System.out.println("관리자라면 1을 입력하고 알바생이라면 2를 입력하세요");
					master = sc.nextInt();
					
					if(master == 1)
					{
						joiner.account="NULL";
						joiner.bank="NULL";
					}
					else if(master == 2)
					{
						System.out.print("급여받을 계좌번호는?");
						joiner.account = reader.readLine();
						
						System.out.print("그 계좌는 어느 은행 계좌인가요?");
						joiner.bank = reader.readLine();
					}
					else //잘못 입력했을 경우 오류창
					{
						System.out.println("┌─────────────────────────────────────┐");
						System.out.println("│  잘못 입력하셨습니다                                                 │  "); 
						System.out.println("│  다시 입력해주세요                                                    │");
						System.out.println("└─────────────────────────────────────┘");
						
					}
				}while(master!=1  && master!=2);	//1의 아스키코드값 :49, 2의 아스키코드값 : 50
				
					   writer.write(String.format("%s		%s		%s		%s		%s		%s		",
				joiner.name , joiner.ID ,joiner.PASSWORD1, joiner.account, joiner.bank, master)); //입력한 정보 저장
			          
					   writer.newLine(); //메모장 줄 바꿈
			            
			            writer.close(); //BufferedWriter 멈춤	
					
			}catch(IOException e) {
			System.out.println("입출력 오류");}
		
		
	
		System.out.println("┌─────────────────────────────────────┐");
		System.out.println("  회원가입되셨습니다!");
		System.out.println("  로그인을 진행해 주세요");
		System.out.println("└─────────────────────────────────────┘");
		

		
		return master;
	}
}
