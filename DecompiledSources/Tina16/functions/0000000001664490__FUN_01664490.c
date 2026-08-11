/* Ghidra address: 01664490 */
/* Ghidra symbol: FUN_01664490 */


void FUN_01664490(longlong param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(char *)(param_1 + 8) == '\0')) {
    if ((*(int *)(param_1 + 0x18) < 2) || (299 < *(int *)(param_1 + 0x1c))) {
      *(undefined4 *)(param_1 + 0x14) = 0x14;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) * 2;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

