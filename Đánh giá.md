### I. Đánh giá ban đầu về các thuật toán

KMP: dựa vào sub parttern đã xuất hiện trước đó để không phải dò lại lần nữa

Boyer-Moore: Dựa vào ký tự mismacth để xem nó có xuất hiện trong parttern chưa. 

Rabin-Karp: dựa vào Hash function. 

### II. Trường hợp tốt nhất xấu nhất
- KMP (Knuth-Morris-Pratt):
  + Trường hợp tốt nhất: Khi parttern cần tìm là một chuỗi con của text, và không giống nhau trừ vị trí đầu tiên. Trong trường hợp này, độ phức tạp của KMP là O(n), với n là độ dài của parttern.
    
  + Trường hợp tệ nhất: Khi may mắn không mỉm cười, parttern cần tìm không thể được tìm thấy hoặc ở vị trí cuối cùng của txt, KMP phải so sánh từng ký tự của chuỗi cần tìm với từng ký tự của txt, dẫn đến độ phức tạp là O(n + m), với n là độ dài chuỗi txt và m là độ dài chuỗi parttern cần tìm.

    **** Xét trường ví dụ trên lớp: Trường hợp trùng lặp proper suffix/prefix giữa parttern và txt khiến chương trình phải quay lại xét nhiều lần cho đến khi chấp nhận "sự thật". Lúc này độ phức tạp là O(n+m)  

- Boyer-Moore:

  + Trường hợp tốt nhất: Khi có nhiều ký tự không khớp với parttern (ở chỗ không cần tìm) -> lướt qua nhanh , và có sự khớp của các ký tự khi về giữa hoặc tìm thấy luôn lúc đầu. Trong trường hợp này, Boyer-Moore có thể đạt đến hiệu suất tốt với thời gian chạy là O(n/m), với n là độ dài của chuỗi text và m là độ dài của chuỗi parttern cần tìm.

  + Trường hợp tệ nhất: Khi giữa chuỗi parttern cần tìm và chuỗi text không hề giống nhau. Trong trường hợp này, Boyer-Moore có thể phải duyệt qua tất cả các vị trí của chuỗi text, dẫn đến độ phức tạp là O(nm).

- Rabin-Karp:

  +  Trường hợp tốt nhất và tệ nhất đều là O(n+m). Trong trường hợp tốt nhất, hàm băm có thể tìm thấy parttern ở vị trí đầu tiên mà không cần kiểm tra lại từng ký tự. Trong trường hợp tệ nhất, chuỗi txt phải được kiểm tra ở mọi vị trí.

### III. Ứng dụng thực tế

- Giải thuật string matching thường dùng cho quét virus dựa trên signature:

    * Knuth-Morris-Pratt (KMP):

      Hiệu quả cao, tìm kiếm nhanh.
  
      Phù hợp với tập tin lớn.
  
    * Boyer-Moore (BM):

      Đơn giản hơn KMP.

      Hiệu quả tốt với tập tin nhỏ.
