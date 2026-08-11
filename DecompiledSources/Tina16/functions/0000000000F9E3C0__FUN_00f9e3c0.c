/* Ghidra address: 00f9e3c0 */
/* Ghidra symbol: FUN_00f9e3c0 */


void FUN_00f9e3c0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x738) = 0;
  FUN_0064cf60(param_1,0x49e);
  if (*(int *)(param_1 + 0x748) == 1) {
    *(undefined4 *)(param_1 + 0x760) = 2;
    *(undefined4 *)(param_1 + 0x764) = 4;
    *(undefined4 *)(param_1 + 0x768) = 8;
    *(undefined4 *)(param_1 + 0x76c) = 0x10;
    *(undefined4 *)(param_1 + 0x770) = 0x20;
    *(undefined4 *)(param_1 + 0x774) = 0x40;
    *(undefined4 *)(param_1 + 0x778) = 0x80;
    *(undefined4 *)(param_1 + 0x77c) = 0x100;
  }
  else {
    *(undefined4 *)(param_1 + 0x760) = 1;
    *(undefined4 *)(param_1 + 0x764) = 2;
    *(undefined4 *)(param_1 + 0x768) = 4;
    *(undefined4 *)(param_1 + 0x76c) = 8;
    *(undefined4 *)(param_1 + 0x770) = 0x10;
    *(undefined4 *)(param_1 + 0x774) = 0x20;
    *(undefined4 *)(param_1 + 0x778) = 0x40;
    *(undefined4 *)(param_1 + 0x77c) = 0x80;
    *(undefined4 *)(param_1 + 0x780) = 0x100;
  }
  return;
}

