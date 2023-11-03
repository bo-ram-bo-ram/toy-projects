package member;

import java.sql.*;

public class changeDAO {

	String drivers = "org.postgresql.Driver"; // Postgresql의 JDBC 메인 클래스 이름
	String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC 데이터베이스 정보
	String username = "postgres";
	String password = "1234";
	Connection conn;

	PreparedStatement pstmt;
	ResultSet rs;
	String sql;

	//비밀번호 변경 메소드
	public boolean PWChange(String newPW, String regno) {
		connectDB();

		String sql = "UPDATE member SET mem_pw = '" + newPW + "' WHERE mem_regno = '" + regno + "';  COMMIT;";
		try {
				pstmt = conn.prepareStatement(sql);
				pstmt.executeUpdate();
				System.out.println(newPW);
				System.out.println(regno);
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		} finally {
			closeDB();
		}
		System.out.println("변경성공");
		return true;
	}
	//닉네임 변경 메소드
	public boolean NIKchange(String newNIK, String regno) {
		connectDB();

		String sql = "UPDATE member SET mem_nik = '" + newNIK + "' WHERE mem_regno = '" + regno + "';  COMMIT;";
		try {
				pstmt = conn.prepareStatement(sql);
				pstmt.executeUpdate();
				System.out.println(newNIK);
				System.out.println(regno);
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		} finally {
			closeDB();
		}
		System.out.println("변경성공");
		return true;
		
	}
	
	
	// DB연결 메서드
	public void connectDB() {
		try {
			Class.forName(drivers);
			System.out.println("드라이버 로딩 성공");
			conn = DriverManager.getConnection(url, username, password);
			System.out.println("연결 성공");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	// DB 연결 종료 메서드
	public void closeDB() {
		try {
			pstmt.close();
			conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

}
