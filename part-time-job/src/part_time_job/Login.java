package part_time_job;

import java.io.*;
import java.util.*;

public class Login { 
	   
	   public int aa = 0;
	    public String names; //�̸�
	    String id;  //���̵�
	    String password; //��й�ȣ 
	    static Scanner sc = new Scanner(System.in); 
	    BufferedReader _input = null; 
	    boolean loginSuccess = false;//�α��� ���� ���� 
	    int master;//���������� �ƴ���

	public int logining()  
	   { 
			System.out.println("������������������������������������������������������������������������������");
			System.out.println("        �ڡ١ڡ١ڡٷα����� �����մϴ١ڡ١ڡ١ڡ�");
			System.out.println("������������������������������������������������������������������������������"); 
		
	     
	      System.out.print("���̵� : "); 
	      id = sc.nextLine(); 
	      System.out.print("��й�ȣ : "); 
	      password = sc.nextLine();   
	     
	     
	      
	      try  
	      { // ���� ó���� �⺻ 
	         _input = new BufferedReader(new FileReader("c:\\Temp\\member.txt")); // ���Ͽ��� ��Ʈ���� ���� �о���δ� 
	         String s = null;  
	         
	         while ((s = _input.readLine()) != null)  
	         { 
	            
	        	 String[] split = s.split("		"); //�� �� ������, ���ø� �Ѵ�. �Ľ� ������ ������ \t\t  
	             //id�� password���� �̹� �Է¹��� ���� ����Ǿ� �����Ƿ�, 
	             //�ؽ�Ʈ ���Ͽ��� read�� ���� �ٽ� ������ �ȵȴ�. 
	             
	             //id = split[1];  
	             //password = split[2];  
	             // ���۸� �� �� �����⿡ ���۸����� �ݾ� �ش�. 
	                         
	             //obj�� ���� ���� ���� equals() �޼ҵ带 ����Ѵ�. 
	             
	                if(id.equals(split[1]) && password.equals(split[2])) 
	             { 
	               //_input.close(); // BufferedReader ����
	               System.out.println("������������������������������������������������������������������������������");
	               System.out.println("                 �α��� ����!"); 
	   				System.out.println("������������������������������������������������������������������������������");
	               loginSuccess = true; //�α��� ��������
	               names = split[2];  //������ �̸� ���� ����
	               System.out.println("������������������������������������������������������������������������������");
	               System.out.println("  �̸� : " + split[0] + " �� �ȳ��ϼ���!"); 
	   				System.out.println("������������������������������������������������������������������������������");
	   				
	   				
	   				master = Integer.parseInt(split[5]);	//������ :1,1 �˹ٻ� : 2
	              
	   				aa++;
	               
	               break;//�ؽ�Ʈ ���� �߰��̶� �α����� �Ǹ�, while�� ���� 
	            }
	                break;
	         } 
	         
	         if(loginSuccess == false) 
	         {	//�α��� ���н� �ٽ� logining�޼ҵ� ȣ��
	            
		         System.out.print("�α��ο� �����߽��ϴ�.\n"); 
		         System.out.print("�ٽ� �Է����ּ���.\n\n"); 
		         
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