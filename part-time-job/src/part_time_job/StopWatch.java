package part_time_job;
import java.io.*;

public class StopWatch {
   static String timerBuffer; // 04:11:15 ���� ��� �ð� ���ڿ��� ����� ���� ����
   static int oldTime; // Ÿ�̸Ӱ� ON �Ǿ��� ���� �ð��� ����ϰ� �ִ� ����
   static int hour, min, sec;
   
   static void stopwatch(int onOff) {
    if (onOff == 1) // Ÿ�̸� �ѱ�
      {
    	oldTime = (int) System.currentTimeMillis() / 1000;
      }

    else if (onOff == 0) // Ÿ�̸� ����, �ú��ʸ� timerBuffer �� ����
      {
    	 secToHHMMSS(  ((int) System.currentTimeMillis() / 1000) - oldTime  );
     }
  }

  // ������ �� �ð��� �ʴ���(sec)�� �Է� �޾�, "04:11:15" ���� ������ ���ڿ��� �ú��ʸ� ����
    static void secToHHMMSS(int secs) {
    sec  = secs % 60;
    min  = secs / 60 % 60;
    hour = secs / 3600;

    timerBuffer = String.format("%02d:%02d:%02d", hour, min, sec);
  }


   static void pause() {
    try {
      System.in.read();
    } catch (IOException e) { }
  }


}