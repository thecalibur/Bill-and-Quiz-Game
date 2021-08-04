from random import randrange
while True:

    somay = randrange(1,101)
    solandoan = 0
    win = False
    while solandoan < 7:
        solandoan += 1
        songuoi = int(input("Máy đã có số từ 1 -> 100. Mời bạn đoán số: "))
        print("Bạn đã đoán lần thứ", solandoan)
        if somay == songuoi:
            print("Chúc mừng bạn đã đoán đúng. Số máy là:", somay)
            win = True
            break
        if somay > songuoi:
            print("Bạn đoán sai, số của máy lớn hơn số của bạn đấy.")
        elif somay < songuoi:
            print("Bạn đoán sai, só của máy nhỏ hơn sô của bạn đấy.")
    if win == False:
        print("GAME OVER!")
        print("SỐ MÁY LÀ:", somay)

    hoi = input("Tiếp không?")
    if hoi == 'k':
        break
print("CẢM ƠN BẠN ĐÃ CHƠI GAME!")


