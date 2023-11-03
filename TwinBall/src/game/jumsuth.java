package game;

import java.awt.TextField;

import javax.swing.JLabel;


public class jumsuth extends Thread {

	private JLabel tf1p;
	private JLabel tf2p;
	public jumsuth(JLabel tf1p, JLabel tf2p) {
		this.tf1p = tf1p;
		this.tf2p = tf2p;
	}
	public void run(){
		while(true) {
		    tf1p.setText(Integer.toString(NorthPanel.score1p));
		    tf2p.setText(Integer.toString(NorthPanel.score2p));
		    
		    try {
				Thread.sleep(20);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}
}