#include <idc.idc>

static main() {
    auto start = 0x18002E300;
    auto end = 0x18006A0FF;
    auto size = end - start + 1;
    
    auto fp = fopen("dump.bin", "wb");
    if (fp != 0) {
        savefile(fp, 0, start, size);
        fclose(fp);
        Message("导出完成: %d bytes\n", size);
    }
}