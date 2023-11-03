package game;

import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

class NorthPanel extends JPanel {

	ImageIcon back = new ImageIcon("image/jumsu.png");
	int n=60;
	JLabel timerla = new JLabel(Integer.toString(n));
	
	Font font = new Font("HY³ª¹«B", Font.PLAIN, 50);
	Font font2 = new Font("°ß°íµñ", Font.PLAIN, 60);
	
	JLabel tf1p = new JLabel("00");
	 static int score1p = 00;
	
	JLabel tf2p = new JLabel("00");
	 static int score2p = 00;
	
	public NorthPanel() {
		
		//Container con = getContentPane();
		setLayout(new FlowLayout());

	    JLabel backla = new JLabel(back);
	    add(backla);
	    
	    tf1p.setFont(font2);
	    tf1p.setBounds(535, 17, 80, 60);
	    tf1p.setText(Integer.toString(score1p));
	    backla.add(tf1p);

	    tf2p.setFont(font2);
	    tf2p.setBounds(885, 16, 80, 60);
	    tf2p.setText(Integer.toString(score2p));
	    backla.add(tf2p);
	    
	    timerla.setFont(font);
	    timerla.setBounds(690, 6, 100, 100);
	    backla.add(timerla);		    
	    
	    jumsuth jth = new jumsuth(tf1p,tf2p);
	    jth.start();
	    
	    timerth tth = new timerth(timerla) ;
	    tth.start();
	    
	}
}
