package game;
import javax.swing.*;
public class timerth2 extends Thread {

	private JLabel timerla;
	static int n ;
	   
	timerth2(JLabel timerla){
		this.timerla = timerla;
	}
	
	public void run(){
	   for(n=15;n>=0;n--)
	    {
		   System.out.println(n);
		   timerla.setText(Integer.toString(n));
	    	try {
	    		Thread.sleep(1000);		
	    	}
	    	catch(InterruptedException e) {
	    		return;
	    	}
	   }
	   interrupt();
	   
	   Main_2p_key.onsw2 = true;	
	   
	   JOptionPane.showMessageDialog(null, "시간종료");
	   
	   new result2p_screen();
	   
	}

}
