package member;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class joinmain extends JFrame implements ActionListener {
	JTextField textId, nikText, birthdayText1, birthdayText2, birthdayText3, phoneText1, phoneText2, phoneText3,
			regnoText1;
	JPasswordField textPw, textRpw, regnoText2;

	joinDAO dao = new joinDAO();
	Member member;

	JLabel ml = new JLabel("HELLO"); // �޽��� ����� ���� ��
	String la = "test";

	JButton btnOk = new JButton("�����ϱ�");
	JButton btnCancel = new JButton("�������");
	JButton idOk = new JButton("�ߺ� Ȯ��");
	JButton nikOk = new JButton("�ߺ� Ȯ��");
	JButton pwOk = new JButton("PW Ȯ��");

	Boolean sw1 = false;
	Boolean sw2 = false;
	Boolean sw3 = false;

	public joinmain() {
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setTitle("ȸ������");

		Container c = getContentPane();

		ml.setBounds(50, 20, 300, 20);
		add(ml);

		JLabel logo = new JLabel("ȸ �� �� ��");
		logo.setBounds(210, 40, 200, 20);
		c.add(logo);

		JLabel idla = new JLabel("* ��  ��  ��");
		idla.setBounds(50, 90, 180, 20);
		c.add(idla);

		textId = new JTextField();
		textId.setBounds(180, 90, 150, 20);
		c.add(textId);

		JLabel pwla = new JLabel("* ��й�ȣ");
		pwla.setBounds(50, 140, 180, 20);
		c.add(pwla);

		textPw = new JPasswordField();
		textPw.setBounds(180, 140, 150, 20);
		c.add(textPw);

		JLabel rpwla = new JLabel("��й�ȣȮ��");
		rpwla.setBounds(50, 190, 150, 20);
		c.add(rpwla);

		textRpw = new JPasswordField();
		textRpw.setBounds(180, 190, 150, 20);
		c.add(textRpw);

		JLabel nikla = new JLabel("* �� �� ��");
		nikla.setBounds(50, 240, 150, 20);
		c.add(nikla);

		nikText = new JTextField();
		nikText.setBounds(180, 240, 150, 20);
		c.add(nikText);

		JLabel birthdayla = new JLabel("�� �� �� ��");
		birthdayla.setBounds(50, 290, 150, 20);
		c.add(birthdayla);

		JLabel b1 = new JLabel("��");
		JLabel b2 = new JLabel("��");
		JLabel b3 = new JLabel("��");
		b1.setBounds(222, 290, 40, 20);
		c.add(b1);
		b2.setBounds(277, 290, 40, 20);
		c.add(b2);
		b3.setBounds(330, 290, 40, 20);
		c.add(b3);
		birthdayText1 = new JTextField();
		birthdayText2 = new JTextField();
		birthdayText3 = new JTextField();
		birthdayText1.setBounds(180, 290, 40, 20);
		birthdayText2.setBounds(235, 290, 40, 20);
		birthdayText3.setBounds(290, 290, 40, 20);

		c.add(birthdayText1);
		c.add(birthdayText2);
		c.add(birthdayText3);

		JLabel phone = new JLabel("�� �� ��");
		phone.setBounds(50, 340, 150, 20);
		c.add(phone);

		JLabel c1 = new JLabel("-");
		JLabel c2 = new JLabel("-");
		c1.setBounds(225, 340, 40, 20);
		c.add(c1);
		c2.setBounds(280, 340, 40, 20);
		c.add(c2);

		phoneText1 = new JTextField();
		phoneText2 = new JTextField();
		phoneText3 = new JTextField();
		phoneText1.setBounds(180, 340, 40, 20);
		phoneText2.setBounds(235, 340, 40, 20);
		phoneText3.setBounds(290, 340, 40, 20);

		c.add(phoneText1);
		c.add(phoneText2);
		c.add(phoneText3);

		JLabel regno = new JLabel("�ֹε�Ϲ�ȣ");
		regno.setBounds(50, 390, 150, 20);
		c.add(regno);

		JLabel r1 = new JLabel("-");
		r1.setBounds(255, 390, 40, 20);
		c.add(r1);

		regnoText1 = new JTextField();
		regnoText2 = new JPasswordField();
		regnoText1.setBounds(180, 390, 70, 20);
		regnoText2.setBounds(265, 390, 70, 20);

		c.add(regnoText1);
		c.add(regnoText2);

		btnOk.setBounds(120, 440, 100, 20);
		c.add(btnOk);
		btnOk.setEnabled(false);
		btnOk.addActionListener(this);

		btnCancel.setBounds(240, 440, 100, 20);
		c.add(btnCancel);
		btnCancel.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) { // �ݵ�� ActionListener�޼ҵ� �������̵�
				dispose();
			}
		});

		idOk.setBounds(350, 90, 100, 20);
		c.add(idOk);
		idOk.addActionListener(this);

		nikOk.setBounds(350, 240, 100, 20);
		c.add(nikOk);
		nikOk.addActionListener(this);

		pwOk.setBounds(350, 140, 100, 20);
		c.add(pwOk);
		pwOk.addActionListener(this);

		c.setLayout(null);
		c.setBackground(Color.ORANGE);

		setSize(500, 600);
		setLocation(400, 300);
		setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		Object cmd = e.getSource();

		String id = textId.getText();
		String nik = nikText.getText();
		String birthday1 = birthdayText1.getText();
		String birthday2 = birthdayText2.getText();
		String birthday3 = birthdayText3.getText();
		int birthday = Integer.parseInt(birthday1 + birthday2 + birthday3);
		String phone1 = phoneText1.getText();
		String phone2 = phoneText2.getText();
		String phone3 = phoneText3.getText();
		int phone = Integer.parseInt(phone1 + phone2 + phone3);

		String pw = "";
		String rpw = "";

		char[] getPw = textPw.getPassword();
		for (int i = 0; i < getPw.length; i++) {
			pw += getPw[i];
		}

		char[] getRpw = textRpw.getPassword();
		for (int i = 0; i < getRpw.length; i++) {
			rpw += getRpw[i];
		}

		String regno1 = regnoText1.getText();
		String regno2 = "";
		char[] getReg = regnoText2.getPassword();
		for (int i = 0; i < getReg.length; i++) {
			regno2 += getReg[i];
		}


		char sex = 'A';	
		char sexchar = 'A';	
		for (int i = 0; i < 1; i++) {
			sexchar = getReg[0]; // �ֹι�ȣ ���ڸ��� ù��° ���ڸ� �޾� sexchar�� ����
		}
		switch(sexchar)	//������ ���� pk�� mem_regno�� ���� ���ڰ� ������, ���ڸ� M, ���ڸ� W
		{
			case '1': sex = 'M';	//2000��� ���� ��� ����
					  break;
			case '2': sex = 'W';	//2000��� ���� ��� ����
			          break;
			case '3': sex = 'M';	//2000��� ���� ��� ����
	                  break;
			case '4': sex = 'W';	//2000��� ���� ��� ����
	                  break;
			case '5': sex = 'M';	//�ܱ��� ����
					  break;
			case '6': sex = 'W';	//�ܱ��� ����
					  break;
			default :
				sex ='Z';	//����ڰ� �߸��� �ֹι�ȣ�� �Է��ϸ� ������ Z�� ���
		}
		String regno = sex + regno1 + regno2;
		
		System.out.println("sex : "+sex);
		System.out.println("sexchar : "+sexchar);
		System.out.println("regno : "+regno);
		
		// ���� ��������
		if (cmd == btnOk) {

			member = new Member();
			member.setId(id);
			member.setPw(pw);
			member.setnik(nik);
			member.setbir(birthday);
			member.setPhone(phone);
			member.setRegno(regno);
			System.out.println(id + "\n" + pw + "\n" + nik + "\n" + birthday + "\n" + phone + "\n" + regno);

			if (dao.newMember(member)) {
				ml.setText(nik + "�� ȸ�������� ���ϵ����!!");
				JOptionPane.showMessageDialog(null, "ȸ�����ԿϷ�");
				dispose();
			} else {
				ml.setText("�̹� ���̵� �ֽ��ϴ�!");
			}

		}

		// ���̵� �ߺ�Ȯ�� ������ ��
		else if (cmd == idOk) {

			dao.IDcheck(id);
			try {
				if (dao.rs.next()) {
					System.out.println("�ߺ�");
					la = "���̵� �ֽ��ϴ�!";
					JOptionPane.showMessageDialog(null, la, "ID �ߺ� Ȯ��", JOptionPane.ERROR_MESSAGE);
				} else {
					System.out.println("�ߺ��ƴ�");
					la = "��� ������ ���̵��Դϴ�";
					sw1 = true;
					JOptionPane.showMessageDialog(null, la);
				}
			} catch (SQLException e1) {
				e1.printStackTrace();
			}

		}
		// PW ��ġ Ȯ��
		else if (cmd == pwOk) {
			if (!pw.equals(rpw)) {
				JOptionPane.showMessageDialog(null, "pw�� �ٽ� Ȯ���ϼ���", "PW ����ġ", JOptionPane.ERROR_MESSAGE);
			} else {
				JOptionPane.showMessageDialog(null, "PW ��ġ");
				sw2 = true;
			}
		}
		// �г��� �ߺ� Ȯ��
		if (cmd == nikOk) {
			dao.NIKcheck(nik);
			try {
				if (dao.rs.next()) {

					System.out.println("�ߺ�");
					la = "�г����� �ֽ��ϴ�!";
					JOptionPane.showMessageDialog(null, la, "�г��� �ߺ� Ȯ��", JOptionPane.ERROR_MESSAGE);
				} else {
					System.out.println("�ߺ��ƴ�");
					sw3 = true;
					la = "��� ������ �г��� �Դϴ�";
					JOptionPane.showMessageDialog(null, la);
				}
			} catch (SQLException e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}
			//dao.NIKcheck(nik);
		}

		if (sw1 == true && sw2 == true && sw3 == true) {
			// ���̵��ߺ�Ȯ�ΰ� �г����ߺ�Ȯ���� ���� �� �����ϱ� Ȱ��ȭ ��
			btnOk.setEnabled(true);
		}

	}

	public static void main(String[] args) {
		new joinmain();

	}
}