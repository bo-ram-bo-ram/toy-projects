package game;

import javax.swing.*;

import member.loginDAO;
import member.login_1p;
import member.login_2p;
import member.rankDAO;

import java.awt.*;
import java.awt.event.*;

public class result2p_screen extends JFrame{
   
   ImageIcon back = new ImageIcon("image/back_moniter.png");
   ImageIcon end = new ImageIcon("image/end.PNG");
   ImageIcon home = new ImageIcon("image/homebtn.PNG");
   ImageIcon restart = new ImageIcon("image/restartbtn.png");
   ImageIcon restart_mouse = new ImageIcon("image/restart_mouse.png");
   ImageIcon stop = new ImageIcon("image/stopbtn.png");
   ImageIcon stop_mouse = new ImageIcon("image/stop_mouse.png");
   ImageIcon gameover = new ImageIcon("image/gameover.PNG");
   ImageIcon user1 = new ImageIcon("image/user1.png");
   ImageIcon user2 = new ImageIcon("image/user2.png");
   Font font2 = new Font("°ß°íµñ", Font.PLAIN, 70);
   Font font = new Font("HY³ª¹«B", Font.PLAIN, 50);
	loginDAO dao = new 	loginDAO();	
	rankDAO rankdao = new rankDAO();
	login_2p player2 = new login_2p();
   public result2p_screen() {
		player2.dispose();
      setTitle("Twin Ball-2p¸ðµå °á°ú");
       setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
       Container c = getContentPane();
      
      JLabel backlabel = new JLabel(back);
      backlabel.setBounds(0, 0, 782, 553);
      setContentPane(backlabel);
      
      setSize(1000, 755);
      
      JPanel panel = new JPanel();
      panel.setBounds(170, 30, 700, 360);
      panel.setBackground(Color.WHITE);
      backlabel.add(panel);
      panel.setLayout(null);
      
      JLabel GameOver = new JLabel(gameover);
      GameOver.setBounds(180, 25, 262, 75);
      panel.add(GameOver);
      
      JLabel Label_1P = new JLabel(user1);
      Label_1P.setBounds(67, 105, 120, 100);
      panel.add(Label_1P);
      
      JLabel Jumsu_1p = new JLabel("New label");
      Jumsu_1p.setFont(font2);
      Jumsu_1p.setText(Integer.toString(NorthPanel.score1p));
      Jumsu_1p.setBounds(246, 155, 150, 100);
      panel.add(Jumsu_1p);
      

      
      JLabel result_1p = new JLabel();
      result_1p.setBounds(374, 155, 150, 100);

      JLabel result_2p = new JLabel();
      result_2p.setBounds(374, 275,  150, 100);
      
      if(NorthPanel.score2p > NorthPanel.score1p)
      {
         result_2p.setText("½Â");
         result_1p.setText("ÆÐ");
      }
      else if(NorthPanel.score2p < NorthPanel.score1p)
      {
         result_2p.setText("ÆÐ");
         result_1p.setText("½Â");
      }
      else
      {
         result_1p.setText("¹«½ÂºÎ");
         result_2p.setText("");
      }
      
      result_1p.setFont(font);
      result_1p.setFont(font);
      panel.add(result_2p);
      panel.add(result_1p);      
      
      
      JLabel Label_2P = new JLabel(user2);
      Label_2P.setBounds(65, 235, 120, 100);
      panel.add(Label_2P);
      
      JLabel Jumsu_2p = new JLabel( );
      Jumsu_2p.setFont(font2);
      Jumsu_2p.setText(Integer.toString(NorthPanel.score2p));
      Jumsu_2p.setBounds(246, 275, 150, 100);
      panel.add(Jumsu_2p);
      
   
      
      JButton endbtn = new JButton(end);
      endbtn.setBounds(460, 414, 54, 54);
      endbtn.setBorderPainted(false);
      backlabel.add(endbtn);
      
      JButton homebtn = new JButton(home);
      homebtn.setBounds(45, 27, 54, 54);
      homebtn.setBorderPainted(false);
      backlabel.add(homebtn);
      
      JButton restartbtn = new JButton(restart);
      restartbtn.setBounds(10, 547, 289, 136);
      restartbtn.setRolloverIcon(restart_mouse);
      restartbtn.setBorderPainted(false);
      backlabel.add(restartbtn);
         
      JButton stopbtn = new JButton(stop);
      stopbtn.setBounds(673, 552, 289, 138);
      stopbtn.setRolloverIcon(stop_mouse);
      stopbtn.setBorderPainted(false);
      backlabel.add(stopbtn);

      

	  player2.dispose();
	  
	  
		 System.out.print(dao.IDPW1(player2.id1));
		 System.out.print(dao.IDPW1(player2.id2));
		 
		String regno = dao.IDPW1("1").getRegno();
		 System.out.print(regno);
		rankdao.save2(regno, NorthPanel.score1p);

		 regno = dao.IDPW2("2").getRegno();
		 System.out.print(regno);
		rankdao.save2(regno, NorthPanel.score2p);
      
      setVisible(true);
   }
      public static void main(String[] args) {
         new result2p_screen();
      // TODO Auto-generated method stub

   }
}