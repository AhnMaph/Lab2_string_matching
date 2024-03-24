#### I. Đánh giá ban đầu về các thuật toán

KMP: dựa vào parttern đã xuất hiện trước đó để không phải dò lại lần nữa

Boyer-Moore: Dựa vào ký tự đã xuất hiện trước đó. 

Rabin-Karp: dựa vào Hash function. 

#### II. Suy ngẫm về cách đưa ra "một bài toán khó" cho chính thuật toán này

Về KMP và Boyer-Moore: Rõ ràng việc phải quay lại "check" quá nhiều không phải là điều gì tốt. 

- Ví dụ:

  text: aaaaaaaaaaaaabaaa
  
  parttern: aaabaaa

-> Đánh giá: với test này có lẽ chúng ta phải quay đi quay lại nhiều hơn cả lò vi sóng hay bạn thân của em bạn với người yêu cũ.

Về Rabin-Karp: Tuy không check parttern giống hai giải thuật trên, có lẽ yếu điểm rõ ràng nhất là việc tràn số liệu p khi số mũ vượt quá tầm kiểm soát(?).

Hoặc trùng số sau khi hash do hash funtion quá "yếu".

#### III. Trường hợp tốt nhất xấu nhất

- KMP và Boyer-Moore:
             
  Trường hợp tốt: Trong xâu text/parttern ít xuất hiện suffix/prefix trùng lặp. O(m+n)
  
  Trường hợp xấu: Trong xâu text lặp parttern suffix/prefix quá nhiều khiến kiểm tra quay lại liên tục. O(m*n)

- Rabin-Karp:

  Trường hợp tốt: Không gặp giá trị hash trùng lặp một phát ăn luôn. O(m+n) 

  Trường hợp xấu: Hash function tạo ra giá trị 2 xâu khác nhau nhưng trùng lặp liên tục khiến chương trình phải check lại nhiều lần O(n*m) 


