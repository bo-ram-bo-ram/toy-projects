package member;

import java.sql.*;

public class loginDAO {

   String drivers = "org.postgresql.Driver"; // Postgresql의 JDBC 메인 클래스 이름
   String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC 데이터베이스 정보
   String username = "postgres";
   String password = "1234";
   Connection conn;

   PreparedStatement pstmt;
   ResultSet rs;
   String sql;
   
   public Member IDPW1(String id) {
      connectDB();
      Member mem = new Member();
      String sql = "SELECT * from member WHERE mem_id = '" +id+"';";
      try {
            pstmt = conn.prepareStatement(sql);
            rs = pstmt.executeQuery();
            if(rs.next()) {
            mem.setId(rs.getString("mem_id"));
            System.out.println(1);
            mem.setPw(rs.getString("mem_pw"));
            System.out.println(2);
            mem.setnik(rs.getString("mem_nik"));
            System.out.println(3);
            mem.setbir(rs.getInt("mem_bir"));
            System.out.println(4);
            mem.setPhone(rs.getInt("mem_pn"));
            System.out.println(5);
            mem.setRegno(rs.getString("mem_regno"));
            System.out.println(6);
            
            System.out.println(mem.getId()+"!");
            System.out.println(mem.getPw()+"!");
            System.out.println(mem.getnik()+"!");
            System.out.println(mem.getbir()+"!");
            System.out.println(mem.getPhone()+"!");
            System.out.println(mem.getRegno()+"!");
            
            return mem;
            } 
            else {
               System.out.println("아이디없음");
            }
      } catch (SQLException e) {
         e.printStackTrace();
      } finally {
          closeDB();
         try {
            rs.close();
         } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
         }
         
      }
      return mem;
      }
   public Member IDPW2(String id) {
      connectDB();
      Member mem = new Member();
      String sql = "SELECT * from member WHERE mem_id = '" +id+"';";
      try {
            pstmt = conn.prepareStatement(sql);
            rs = pstmt.executeQuery();
            if(rs.next()) {
            mem.setId(rs.getString("mem_id"));
            System.out.println(1);
            mem.setPw(rs.getString("mem_pw"));
            System.out.println(2);
            mem.setnik(rs.getString("mem_nik"));
            System.out.println(3);
            mem.setbir(rs.getInt("mem_bir"));
            System.out.println(4);
            mem.setPhone(rs.getInt("mem_pn"));
            System.out.println(5);
            mem.setPhone(rs.getInt("mem_regno"));
            System.out.println(6);
            
            System.out.println(mem.getId()+"!");
            System.out.println(mem.getPw()+"!");
            System.out.println(mem.getnik()+"!");
            System.out.println(mem.getbir()+"!");
            System.out.println(mem.getPhone()+"!");
            System.out.println(mem.getRegno()+"!");
            } 
            else {
               System.out.println("아이디없음");
            }
      } catch (SQLException e) {
         e.printStackTrace();
      } finally {
          closeDB();
         try {
            rs.close();
         } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
         }
         
      }
      return mem;
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