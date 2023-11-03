package member;
  // Font font = new Font("고딕", Font.BOLD, 30); 
//jobtn.setFont(font);
import javax.swing.*;

import game.Select_Screen;

import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class login_1p extends JFrame {
   private JTextField idtf;
   private JPasswordField pwtf;

   ImageIcon back = new ImageIcon("image/1plog_back.png");
   ImageIcon loginbtn = new ImageIcon("image/1p_lobtn.png");
   ImageIcon loginbtn_mouse = new ImageIcon("image/1p_lobtnmouse.png");
   ImageIcon joinbtn = new ImageIcon("image/1p_joinbtn.png");
   ImageIcon joinbtn_mouse = new ImageIcon("image/1p_joinbtnmouse.png");
   ImageIcon back1 = new ImageIcon("image/backbtn.PNG");
   ImageIcon back_mouse = new ImageIcon("image/backbtnmouse.PNG");
   
   JTextArea rank1pArea = new JTextArea();
   JTextArea rank2pArea = new JTextArea();
   
   loginDAO dao = new loginDAO();
   rankDAO Rdao = new rankDAO(); 
   
   ArrayList<Rank> datas = new ArrayList<Rank>(); 
   
   public static String id1;
   static String pw1;
	Font font = new Font("HY나무B", Font.PLAIN, 15);
	
   public login_1p() {

      JLabel backla = new JLabel(back);
      backla.setBounds(0, 0, 1000, 700);

      setTitle("1p 로그인");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

      Container c = getContentPane();

      setContentPane(backla);

      idtf = new JTextField();
      idtf.setBounds(119, 232, 163, 35);
      backla.add(idtf);
      idtf.setColumns(10);

      pwtf = new JPasswordField();
      pwtf.setBounds(119, 319, 163, 35);
      backla.add(pwtf);
      pwtf.setColumns(10);
      
      JButton jobtn = new JButton(joinbtn);
      jobtn.setBounds(485, 353, 150, 80);
      jobtn.setRolloverIcon(joinbtn_mouse);
      jobtn.setBorderPainted(false);
      backla.add(jobtn);
      
      jobtn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent arg0) {
    	  
      new joinmain();
      }
      });
      rank1pArea.setFont(font);
      rank1pArea.setBounds(735, 81, 137, 151);
      backla.add(rank1pArea);
      rank1p();//1p모드 TOP3 랭킹 출력 메소드 
      
      rank2pArea.setFont(font);
      rank2pArea.setBounds(735, 455, 130, 157);
      backla.add(rank2pArea);
      rank2p();
      
      JButton logbtn = new JButton(loginbtn);
      logbtn.addActionListener(new ActionListener() {
         public void actionPerformed(ActionEvent arg0) {
            id1 = idtf.getText();
            String pw1 = "";
            char[] getPw = pwtf.getPassword();
            for (int i = 0; i < getPw.length; i++) {
            pw1 += getPw[i]; }
            
            //System.out.print("click");
            System.out.println(id1);
            dao.IDPW1(id1);
            
           System.out.println(dao.IDPW1(id1).getPw());
           
            if(pw1.equals(dao.IDPW1(id1).getPw()))
            {
               JOptionPane.showMessageDialog(null, "로그인성공");
         	   dispose();
              
               new Select_Screen();
            }
            else 
            {
             JOptionPane.showMessageDialog(null,"ID / PW를 다시 확인하세요","로그인 실패",JOptionPane.ERROR_MESSAGE);
            }
         }
      });
      logbtn.setBounds(98, 530, 275, 80);
      logbtn.setRolloverIcon(loginbtn_mouse);
      logbtn.setBorderPainted(false);
      backla.add(logbtn);
      
      JButton backbtn = new JButton(back1);
      backbtn.setBounds(0, 0, 50, 28);
      backbtn.setRolloverIcon(back_mouse);
      backbtn.setBorderPainted(false);
      backla.add(backbtn);
      

      backbtn.addActionListener(new ActionListener() {
         public void actionPerformed(ActionEvent arg0) {
            dispose();
            new first_screen();
         }
      });

      
      setSize(1000, 700);

      Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
      // 전체 창 1/2 나눈 곳에 위치
      int xPos = screenSize.width / 2 - getSize().width / 2;
      int yPos = screenSize.height / 2 - getSize().height / 2;
      setResizable(false); // 크기 조정 불가하도록 설정
      setLocation(xPos, yPos);

      setVisible(true);

   }
   void rank1p(){
	   rank1pArea.setText("");
	   rank1pArea.append("  NIK  ID   1p점수  ");
	   datas = Rdao.get1p();
	   
	   if(datas != null) { 
	         // ArrayList 의 전체 데이터를 형식에 맞춰 출력 
	         for(Rank r : datas) { 
	            StringBuffer sb = new StringBuffer();
	            System.out.println("mem_nik:" +r.getnik());
	            System.out.println(r.getId());
	            System.out.println(r.getjumsu1());
	            
	            sb.append("\n   "+r.getnik()+"   ");
	            sb.append("   "+r.getId()+"   ");
	            sb.append("   "+r.getjumsu1()+"   \n");  
	            rank1pArea.append(sb.toString()); 
	         }
	   } 
	   else { 
	       	 	rank1pArea.append("\n\n등록된 점수가 없습니다. !!\n점수를 등록해 주세요 !!"); 
	        } 
	         // 생성자, 프레임 초기화
	   
   }
   void rank2p(){
	   rank2pArea.setText("");
	   rank2pArea.append("  NIK  ID   2p점수  ");
	   datas = Rdao.get2p();
	   
	   if(datas != null) { 
	         // ArrayList 의 전체 데이터를 형식에 맞춰 출력 
	         for(Rank r : datas) { 
	            StringBuffer sb = new StringBuffer();
	            System.out.println("mem_nik:" +r.getnik());
	            System.out.println(r.getId());
	            System.out.println(r.getjumsu1());
	            
	            sb.append("\n"+r.getnik()+"   ");
	            sb.append("   "+r.getId()+"   ");
	            sb.append("   "+r.getjumsu2()+"   \n");  
	            rank2pArea.append(sb.toString()); 
	         }
	   } 
	   else { 
	       	 	rank2pArea.append("\n\n등록된 점수가 없습니다. !!\n점수를 등록해 주세요 !!"); 
	        } 
	         // 생성자, 프레임 초기화
	   
   }

   public static void main(String[] args) {
      new login_1p();
   }
}