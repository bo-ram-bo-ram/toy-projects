package member;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class pwPanel extends JPanel {

	private JPasswordField nowpw = new JPasswordField();
	private JTextField newpw1 = new JTextField();
	private JTextField newpw2 = new JTextField();

	private JLabel nowla = new JLabel();
	private JLabel newla1 = new JLabel();
	private JLabel newla2 = new JLabel();

	private JButton okbtn = new JButton();
	private JButton eqbtn = new JButton();
	private JButton changebtn = new JButton();

	Font font = new Font("HY����B", Font.PLAIN, 20);

	loginDAO dao = new loginDAO();

	boolean sw1 = false;
	boolean sw2 = false;

	changeDAO CHdao = new changeDAO();
	String realpw;
	String regno;

	public pwPanel() {

		setLayout(null);

		setBackground(Color.ORANGE);
		nowla = new JLabel("���� ��й�ȣ : ");
		nowla.setFont(font);
		nowla.setBounds(20, 50, 150, 20);
		add(nowla);

		nowpw.setBounds(175, 47, 100, 30);
		add(nowpw);
		nowpw.setColumns(13);

		okbtn = new JButton("Ȯ��");
		okbtn.setFont(font);
		okbtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				login_1p player1 = new login_1p();
				player1.dispose();
				String pw1 = "";
				char[] getPw = nowpw.getPassword();
				for (int i = 0; i < getPw.length; i++) {
					pw1 += getPw[i];
				}

				if (pw1.equals(dao.IDPW1(player1.id1).getPw())) {
					JOptionPane.showMessageDialog(null, "�ùٸ� ��й�ȣ�Դϴ�");
					sw1 = true;
					regno = dao.IDPW1(player1.id1).getRegno();
					System.out.println("regno : " + regno);
					if (sw1 == true && sw2 == true) {
						// ���̵��ߺ�Ȯ�ΰ� �г����ߺ�Ȯ���� ���� �� �����ϱⰡ Ȱ��ȭ ��
						changebtn.setEnabled(true);
					}
				} else {
					JOptionPane.showMessageDialog(null, "PW�� �ٽ� Ȯ���ϼ���", "����", JOptionPane.ERROR_MESSAGE);
				}
			}
		});

		okbtn.setBounds(290, 47, 100, 30);
		add(okbtn);

		newla1 = new JLabel("�ٲ� ��й�ȣ : ");
		newla1.setFont(font);
		newla1.setBounds(20, 153, 150, 20);
		add(newla1);

		newpw1.setColumns(13);
		newpw1.setBounds(175, 150, 100, 30);
		add(newpw1);

		newla2 = new JLabel("�ѹ� �� �Է� : ");
		newla2.setFont(font);
		newla2.setBounds(20, 252, 150, 20);
		add(newla2);

		newpw2 = new JTextField();
		newpw2.setColumns(13);
		newpw2.setBounds(175, 250, 100, 30);
		add(newpw2);

		eqbtn = new JButton("Ȯ��");
		eqbtn.setFont(font);
		eqbtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				String new1 = newpw1.getText();
				String new2 = newpw2.getText();
				if (new1.equals(new2)) {
					JOptionPane.showMessageDialog(null, "��й�ȣ�� ��ġ�մϴ�");
					sw2 = true;
					realpw = new1;

					if (sw1 == true && sw2 == true) {
						// ���̵��ߺ�Ȯ�ΰ� �г����ߺ�Ȯ���� ���� �� �����ϱⰡ Ȱ��ȭ ��
						changebtn.setEnabled(true);
					}
				} else {
					JOptionPane.showMessageDialog(null, "PW�� �ٽ� Ȯ���ϼ���", "����", JOptionPane.ERROR_MESSAGE);
				}
			}
		});
		eqbtn.setBounds(290, 250, 100, 30);
		add(eqbtn);

		changebtn = new JButton("����");
		changebtn.setFont(font);
		changebtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				// ��й�ȣ ��������
				if (CHdao.PWChange(realpw, regno)) {
					JOptionPane.showMessageDialog(null, "PW ���� ����");
				} else {
					JOptionPane.showMessageDialog(null, "PW ������ �����Ͽ����ϴ�", "PW ���� ����", JOptionPane.ERROR_MESSAGE);
				}

			}
		});
		changebtn.setBounds(175, 350, 100, 30);

		changebtn.setEnabled(false);
		add(changebtn);
	}
}