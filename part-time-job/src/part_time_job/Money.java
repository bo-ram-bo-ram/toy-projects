package part_time_job;
import part_time_job.*;


public class Money {
	static int pay = 8350;	//�ʱⰪ : �����ñ�
	
	static int today_money(){
	
		int today_money ;

		int hour = StopWatch.hour;
		int min = StopWatch.min;
		int sec = StopWatch.sec;
		
		today_money = hour * pay + min*(pay / 60) + sec*(pay/60/60);

		return today_money;
	}
}

