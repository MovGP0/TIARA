/* Ghidra address: 00691eb0 */
/* Ghidra symbol: FUN_00691eb0 */


void FUN_00691eb0(longlong param_1)

{
  FUN_00786c70(param_1);
  if (*(char *)(param_1 + 0x48) == '\x1b') {
    *(undefined1 *)(param_1 + 0x48) = 0x1a;
  }
  if (*(char *)(param_1 + 0x4b) == '\x17') {
    *(undefined1 *)(param_1 + 0x4b) = 0x16;
  }
  if (*(char *)(param_1 + 0x49) == '\x03') {
    *(undefined1 *)(param_1 + 0x49) = 2;
  }
  if (*(char *)(param_1 + 0x4a) == '\a') {
    *(undefined1 *)(param_1 + 0x4a) = 6;
  }
  if (*(char *)(param_1 + 0x4c) == '\v') {
    *(undefined1 *)(param_1 + 0x4c) = 10;
  }
  if (*(char *)(param_1 + 0x4d) == '\x0f') {
    *(undefined1 *)(param_1 + 0x4d) = 0xe;
  }
  FUN_0068ff40(param_1);
  return;
}

