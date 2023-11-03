package game;

import javax.swing.*;

import member.*;
import java.awt.*;
import java.awt.event.*;

public class result1p_screen extends JFrame{
   
   ImageIcon back = new ImageIcon("image/back_moniter.png");
   ImageIcon end = new ImageIcon("image/end.PNG");
   ImageIcon home = new ImageIcon("image/homebtn.PNG");
   ImageIcon restart = new ImageIcon("image/restartbtn.png");
   ImageIcon restart_mouse = new ImageIcon("image/restart_mouse.png");
   ImageIcon stop = new ImageIcon("image/stopbtn.png");
   ImageIcon stop_mouse = new ImageIcon("image/stop_mouse.png");
   ImageIcon gameover = new ImageIcon("image/gameover.PNG");
   ImageIcon user1 = new ImageIcon("image/user1.png");
   
   Font font2 = new Font("°ß°íµñ", Font.PLAIN, 70);
   Font font = new Font("HY³ª¹«B", Font.PLAIN, 50);
   
	loginDAO dao = new 	loginDAO();	
	rankDAO rankdao = new rankDAO();
   
   public result1p_screen() {
      
      setTitle("Twin Ball-1p¸ðµå °á°ú");
       setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
       Container c = getContentPane();
      
      JLabel backlabel = new JLabel(back);
      //backlabel.setSize(c.getSize());
      backlabel.setBounds(0, 0, 1000, 755);
      System.out.println(backlabel.getBounds());
      c.add(backlabel);
      
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
      Label_1P.setBounds(47, 165, 120, 100);
      panel.add(Label_1P);
      
      JLabel Jumsu_1p = new JLabel("New label");
      Jumsu_1p.setFont(font2);
      Jumsu_1p.setText(Integer.toString(NorthPanel.score2p));
      Jumsu_1p.setBounds(236, 170, 80, 100);
      panel.add(Jumsu_1p);
      
      
      JLabel result_1p = new JLabel();
      result_1p.setFont(font);
      result_1p.setBounds(364, 170, 150, 100);
      
      if(NorthPanel.score2p > NorthPanel.score1p)
      {
         result_1p.setText("½Â");
      }
      else if(NorthPanel.score2p < NorthPanel.score1p)
      {
         result_1p.setText("ÆÐ");
      }
      else
      {
         result_1p.setText("¹«½ÂºÎ");
      }
      
      panel.add(result_1p);
   
      JButton endbtn = new JButton(end);
      endbtn.setBounds(460, 414, 54, 54);
      endbtn.setBorderPainted(false);
      backlabel.add(endbtn);
      
      JButton homebtn = new JButton(home);
      homebtn.setBounds(45, 27, 54, 54);
      homebtn.setBorderPainted(false);
      backlabel.add(homebtn);
      homebtn.addActionListener(new ActionListener(){
      @Override
      public void actionPerformed(ActionEvent arg0) {
         dispose();
          new Select_Screen();
      }
      });
      JButton restartbtn = new JButton(restart);
      restartbtn.setBounds(10, 547, 289, 136);
      restartbtn.setRolloverIcon(restart_mouse);
      restartbtn.setBorderPainted(false);
      backlabel.add(restartbtn);
      restartbtn.addActionListener(new ActionListener(){
        @Override
        public void actionPerformed(ActionEvent arg0) {
           Main_1p.th.start();

        }

        });
         
      JButton stopbtn = new JButton(stop);
      stopbtn.setBounds(673, 552, 289, 138);
      stopbtn.setRolloverIcon(stop_mouse);
      stopbtn.setBorderPainted(false);
      backlabel.add(stopbtn);
      stopbtn.addActionListener(new ActionListener(){
        @Override
        public void actionPerformed(ActionEvent arg0) {
           System.exit(0);
        }

        });

      setVisible(true);
      
		login_1p player1 = new login_1p();
		player1.dispose();
		String regno = dao.IDPW1(player1.id1).getRegno();
		
		System.out.println(regno);
		rankdao.save(regno, NorthPanel.score1p);
      
		
      
   }
      public static void main(String[] args) {
         new result1p_screen();
      // TODO Auto-generated method stub

   }
}