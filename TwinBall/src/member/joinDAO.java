package member;

import java.sql.*;
import java.util.*;

public class joinDAO {
   String drivers = "org.postgresql.Driver"; // Postgresql의 JDBC 메인 클래스 이름
   String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC 데이터베이스 정보
   String username = "postgres";
   String password = "1234";
   Connection conn;

   PreparedStatement pstmt;
   ResultSet rs;
   String sql;

   public boolean newMember(Member member) {
      connectDB();
      sql = "INSERT INTO member(mem_regno,mem_id,mem_pw,mem_nik,mem_bir,mem_pn)"
      		+" VALUES(?,?,?,?,?,?);	"		//COMMIT
    		+"INSERT INTO game(game_regno, game_1p, game_2p)"
      		+" VALUES(?,NULL,NULL);	";	//COMMIT
      try {
         pstmt = conn.prepareStatement(sql);
         pstmt.setString(1, member.getRegno());
         System.out.println(1);
         pstmt.setString(2, member.getId());
         System.out.println(2);
         pstmt.setString(3, member.getPw());
         System.out.println(3);
         pstmt.setString(4, member.getnik());
         System.out.println(4);
         pstmt.setInt(5, member.getbir());
         System.out.println(5);
         pstmt.setInt(6, member.getPhone());
         System.out.println(6);
         pstmt.setString(7, member.getRegno());
         System.out.println(7);
         pstmt.executeUpdate();
      } catch (SQLException e) {
         e.printStackTrace();
         return false;
      } finally {
         closeDB();
      }
      return true;
   }

   public boolean IDcheck(String idcheck) {
      connectDB();
      //SELECT * from member WHERE mem_id = '1234';

      System.out.println(idcheck);
      String sql = "SELECT mem_id from member WHERE mem_id = " + "'"+idcheck+"';";
      
      try {
            pstmt = conn.prepareStatement(sql);
            System.out.println(idcheck);
            rs = pstmt.executeQuery(); 
            
            System.out.println(rs);               


      } catch (SQLException e) {
         e.printStackTrace();
         return false;
      } finally {
      }
      return true;

   }
   public boolean NIKcheck(String nikcheck) {
      connectDB();
      //SELECT * from member WHERE mem_id = '1234';

      System.out.println(nikcheck);
      String sql = "SELECT mem_id from member WHERE mem_id = " + "'"+nikcheck+"';";
      
      try {
            pstmt = conn.prepareStatement(sql);
            System.out.println(nikcheck);
            rs = pstmt.executeQuery(); 
            
            System.out.println(rs);               


      } catch (SQLException e) {
         e.printStackTrace();
         return false;
      } finally {
      }
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
