/* Ghidra address: 00810760 */
/* Ghidra symbol: FUN_00810760 */


void FUN_00810760(longlong *param_1)

{
  FUN_00786c70(param_1);
  if ((char)param_1[0xe] == '\x1b') {
    *(undefined1 *)(param_1 + 0xe) = 0x1a;
  }
  if ((char)param_1[10] == '\x17') {
    *(undefined1 *)(param_1 + 10) = 0x16;
  }
  if (*(char *)((longlong)param_1 + 0x71) == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x71) = 2;
  }
  if ((char)param_1[0xc] == '\a') {
    *(undefined1 *)(param_1 + 0xc) = 6;
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\v') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 10;
  }
  if ((char)param_1[8] == '\x0f') {
    *(undefined1 *)(param_1 + 8) = 0xe;
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}

