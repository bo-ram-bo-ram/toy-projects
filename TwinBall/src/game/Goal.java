package game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JComponent;

class Goal extends JComponent { // ��ǥ�� Ŭ����
	static int width, height;
	static Color color = Color.MAGENTA;
	private ImageIcon icon = new ImageIcon("image/goal.png");
	private Image img = icon.getImage(); // �̹��� ��ü

	public Goal(int w, int h) {
		width = w;
		height = h;
	}

	public void paint(Graphics g) { // (1)-C, (2)
		g.setColor(color);
		g.drawImage(img,650, 340, width, height,this);
		//g.drawImage(img, x, y, diameter, diameter, this);

	}
}