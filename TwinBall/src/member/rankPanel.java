package member;

import java.awt.*;
import java.awt.event.*;
import java.sql.SQLException;

import javax.swing.*;

class rankPanel extends JPanel {

	private JLabel play1la = new JLabel();
	private JLabel play2la = new JLabel();
	
	private JTextField jumsu1la = new JTextField();
	private JTextField jumsu2la = new JTextField();
	
	Font font = new Font("HY나무B", Font.PLAIN, 20);

	JButton lookbtn = new JButton("조회");
	
	loginDAO dao = new loginDAO();
	rankDAO rankdao = new rankDAO();

	String regno;

	int jumsu1;
	int jumsu2;
	
	public rankPanel() {

		setLayout(null);

		
		setBackground(Color.ORANGE);
		play1la = new JLabel("나의 1p 최고점수 : " );
		play1la.setFont(font);
		play1la.setBounds(20, 50, 400, 20);
		add(play1la);

		play2la = new JLabel("나의 2p 최고점수 : ");
		play2la.setFont(font);
		play2la.setBounds(20, 153, 400, 20);
		add(play2la);

		lookbtn.setFont(font);
		lookbtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				login_1p player1 = new login_1p();
				player1.dispose();
				regno = dao.IDPW1(player1.id1).getRegno();

				jumsu1 = rankdao.jumsu1LOOK(regno);			
				jumsu2 = rankdao.jumsu2LOOK(regno);
				jumsu1la.setText(" "+Integer.toString(jumsu1));
				jumsu2la.setText(" "+Integer.toString(jumsu2));
			}
		});
		lookbtn.setBounds(150, 400, 100, 30);
		add(lookbtn);

		jumsu1la.setBounds(200, 40, 40, 40);
		jumsu1la.setFont(font);
		add(jumsu1la);
		
		jumsu2la.setBounds(200, 143, 40, 40);
		jumsu2la.setFont(font);
		add(jumsu2la);
	}
}