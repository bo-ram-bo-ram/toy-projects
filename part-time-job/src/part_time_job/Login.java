package part_time_job;

import java.io.*;
import java.util.*;

public class Login { 
	   
	   public int aa = 0;
	    public String names; //이름
	    String id;  //아이디
	    String password; //비밀번호 
	    static Scanner sc = new Scanner(System.in); 
	    BufferedReader _input = null; 
	    boolean loginSuccess = false;//로그인 성공 여부 
	    int master;//관리자인지 아닌지

	public int logining()  
	   { 
			System.out.println("┌─────────────────────────────────────┐");
			System.out.println("        ★☆★☆★☆로그인을 시작합니다★☆★☆★☆");
			System.out.println("└─────────────────────────────────────┘"); 
		
	     
	      System.out.print("아이디 : "); 
	      id = sc.nextLine(); 
	      System.out.print("비밀번호 : "); 
	      password = sc.nextLine();   
	     
	     
	      
	      try  
	      { // 예외 처리는 기본 
	         _input = new BufferedReader(new FileReader("c:\\Temp\\member.txt")); // 파일에서 스트림을 통해 읽어들인다 
	         String s = null;  
	         
	         while ((s = _input.readLine()) != null)  
	         { 
	            
	        	 String[] split = s.split("		"); //한 줄 가져와, 스플릿 한다. 파싱 기준은 공백인 \t\t  
	             //id와 password에는 이미 입력받은 값이 저장되어 있으므로, 
	             //텍스트 파일에서 read한 값을 다시 덮어씌우면 안된다. 
	             
	             //id = split[1];  
	             //password = split[2];  
	             // 버퍼를 다 빼 내었기에 버퍼리더를 닫아 준다. 
	                         
	             //obj의 값을 비교할 때는 equals() 메소드를 사용한다. 
	             
	                if(id.equals(split[1]) && password.equals(split[2])) 
	             { 
	               //_input.close(); // BufferedReader 멈춤
	               System.out.println("┌─────────────────────────────────────┐");
	               System.out.println("                 로그인 성공!"); 
	   				System.out.println("└─────────────────────────────────────┘");
	               loginSuccess = true; //로그인 성공여부
	               names = split[2];  //저장한 이름 변수 지정
	               System.out.println("┌─────────────────────────────────────┐");
	               System.out.println("  이름 : " + split[0] + " 님 안녕하세요!"); 
	   				System.out.println("└─────────────────────────────────────┘");
	   				
	   				
	   				master = Integer.parseInt(split[5]);	//관리자 :1,1 알바생 : 2
	              
	   				aa++;
	               
	               break;//텍스트 파일 중간이라도 로그인이 되면, while문 종료 
	            }
	                break;
	         } 
	         
	         if(loginSuccess == false) 
	         {	//로그인 실패시 다시 logining메소드 호출
	            
		         System.out.print("로그인에 실패했습니다.\n"); 
		         System.out.print("다시 입력해주세요.\n\n"); 
		         
		         logining();
	         
	         }
	         
	         
	         
	      } 
	      catch (IOException e) 
	      { 
	         System.err.println(e); 
	         System.exit(1); 
	      } 
	      finally { 
	         
	         if(_input != null) 
	         { 
	            try {
					_input.close();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} 
	          } 
	      } 
	   
	   return master;
	   
	   } 
}