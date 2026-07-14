#include <sh4a/input/keypad.h>

int main(void) {
    /* Test toi gian: khong dung bat ky thu vien do hoa hay malloc nao.
       Neu app thoat sach (khong crash), thi entry point hoat dong dung.
       Neu van crash, van de nam o startup code hoac linker script. */
    
    /* Chi doc phim va thoat - khong malloc, khong graphics */
    while (1) {
        keypad_read();
        if (get_key_state(KEY_POWER) || get_key_state(KEY_BACK)) {
            return -2;
        }
    }
}
