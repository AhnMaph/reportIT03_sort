### Sự khác biệt cơ bản trong độ nhanh chậm

Rõ ràng quicksort và sort c++ chiếm ưu thế hơn các giải thuật khác. Ngoài ra khi làm quicksort nó nhanh nhẹn hơn rất nhiều so với mergesort vì một lý do nào đó. Có thể
là vì số liệu lớn đem đến lợi thế cho quicksort(?).

Trái với giả thuyết rằng heap sort khá vô lý trên lớp, heap sort hoạt động khá tốt với bộ dữ liệu.

Dưới đây sẽ nói thêm về dữ liệu được sử dụng
### Bộ test

Bộ test có độ phức tạp n=1000000, float(a[i]<=1000)

Đây có thể là một thử thách khi phải xử lý việc tràn mảng xảy ra khi đệ quy sâu nhiều lần(đặc biệt là với các test tăng dần, giảm dần) nếu ta dùng vector mà quên giới hạn chúng (=1000000). Ngoài ra thì 2 test lần lượt là tăng dần và giảm dần
đã đánh vào điểm yếu chí mạng của quicksort nếu chọn pivot ở đầu hoặc cuối (không random). Dẫn đến nâng cấp hơn của chúng là chúng ta chọn vị trí pivot random để tránh bị 
rơi vào mất cân bằng. 


### Chọn thuật toán nào mới đúng?

Theo em nghĩ, sau khi làm test và code thì em nhận ra chúng ta không nên chỉ dùng 1 thuật toán sort cho mọi dữ liệu, vì đôi khi với các bộ dữ liệu khác nhau thì sẽ
tương thích với các test khác nhau.

![image](https://github.com/AhnMaph/reportIT03_sort/assets/157342518/450b27bb-647e-4820-a0d7-0f281b6dffff)
