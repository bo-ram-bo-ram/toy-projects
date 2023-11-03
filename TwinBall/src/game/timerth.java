package game;

import javax.swing.JLabel;
import javax.swing.JOptionPane;


public class timerth extends Thread {

	private JLabel timerla;
	static int n ;
	
	timerth(JLabel timerla){
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
	   
	   Main_1p.onsw = true;	
	   JOptionPane.showMessageDialog(null, "시간종료");
	   
	   new result1p_screen();


	   
	}

}
