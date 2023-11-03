package part_time_job;

import java.util.*;
import part_time_job.*;

public class Member_Check {

	int user;	//회원인지 아닌지 입력받는 user변수
	int master;	//로그인한 사람이 master인지 아닌지 구분해주는 변수
	Scanner sc = new Scanner(System.in);
	Join jo = new Join();
	Login L2 = new Login();
	
	protected void second_screen() {
		
		
			do	
			{
				System.out.println("┌─────────────────────────────────────┐");
				System.out.println("    ★☆★☆★☆환영합니다★☆★☆★☆ ");
				System.out.println("    회원이신가요?");
				System.out.println("    1.네  2.아니요 회원이 되고싶어요!  ");	
				System.out.println("└─────────────────────────────────────┘");
				
				user = sc.nextInt();
				
			}while(user!=1 && user!=2);
	
			if(user==1)
			{
			            L2.logining(); // 로그인	
			}
			else if(user==2)
			{		//사용자가 회원이 아니라면 Join 함수로가서 회원가입
				jo.Joining();
				
				while (true)
	            {
		            L2.logining(); // 로그인
		            
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
			else //잘못 입력했을 경우 오류창
			{
				System.out.println("┌─────────────────────────────────────┐");
				System.out.println("│  잘못 입력하셨습니다                                                 │  "); 
				System.out.println("│  다시 입력해주세요                                                    │");
				System.out.println("└─────────────────────────────────────┘");
			}
		
	}

	
	
}	
		