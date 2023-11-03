package game;

import javax.swing.*;

import member.*;

import java.awt.*;
import java.awt.event.*;


public class Select_Screen2 extends JFrame {

   ImageIcon my = new ImageIcon("image/mymouse.png");
   ImageIcon my_mouse = new ImageIcon("image/my.png");
   ImageIcon play = new ImageIcon("image/play.png");
   ImageIcon play_mouse = new ImageIcon("image/playmouse.png");

   JButton infobtn = new JButton(my);
   JButton gamebtn = new JButton(play);

   public Select_Screen2() {

      setTitle("Twin Ball");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

      Container c = getContentPane();
      c.setLayout(null);
      c.setBackground(Color.ORANGE);

      
      gamebtn.setRolloverIcon(play_mouse);
      gamebtn.setBorderPainted(false);
      gamebtn.setBounds(610, 0, 632, 715);

      c.add(gamebtn);
      
      gamebtn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent arg0) {
    	  
    	  new Main_2p_key();
      }
      });
      
      ToolTipManager m = ToolTipManager.sharedInstance();
      m.setEnabled(true);
      gamebtn.setToolTipText("컴퓨터와 즐기는 60초간의 게임! 60초간 목표물을 맞추세요!");
      m.setInitialDelay(700);
      m.setDismissDelay(10000);
      
      infobtn.setRolloverIcon(my_mouse);
      infobtn.setBorderPainted(false);
      infobtn.setBounds(0, 0, 610, 715);
      c.add(infobtn);
      
      infobtn.addActionListener(new ActionListener() {

		public void actionPerformed(ActionEvent arg0) {
			new MyPage(Select_Screen2.this , "MyPage");
          }
          });

      setSize(1220, 740);
      
      Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
      // 전체 창 1/2 나눈 곳에 위치
      int xPos = screenSize.width / 2 - getSize().width / 2;
      int yPos = screenSize.height / 2 - getSize().height / 2;
      setResizable(false); // 크기 조정 불가하도록 설정
      setLocation(xPos, yPos);
      setVisible(true);

   }

   public static void main(String[] args) {
      new Select_Screen();

   }
}