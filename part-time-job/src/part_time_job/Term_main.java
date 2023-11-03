package part_time_job;

import part_time_job.*;

public class Term_main {
	
	public static void Intro() {

		System.out.println("┌─────────────────────────────────────┐");
		System.out.println("│            지켜줄게 너의 알바비                          │");
		System.out.println("└─────────────────────────────────────┘");
		
		}
	
	
	public static void main(String[] args)  {
		
		Intro();
		
		Member_Check check1 = new Member_Check();
		check1.second_screen();
		
		Mode_Check check2 = new Mode_Check();
		check2.third_screen();
		
		
		
		
	}

	
}
