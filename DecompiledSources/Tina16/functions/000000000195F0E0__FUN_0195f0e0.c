/* Ghidra address: 0195f0e0 */
/* Ghidra symbol: FUN_0195f0e0 */


void FUN_0195f0e0(longlong param_1,ushort param_2)

{
  FUN_0195ba70(param_1,param_2);
  if ((param_2 & 8) != 0) {
    if (*(char *)(param_1 + 0x2f0) == '\0') {
      *(undefined1 *)(param_1 + 0x2f0) = 1;
    }
    else if (*(char *)(param_1 + 0x2f0) == '\x01') {
      *(undefined1 *)(param_1 + 0x2f0) = 0;
    }
  }
  if ((param_2 & 0x100) != 0) {
    if (*(char *)(param_1 + 0x341) == '\0') {
      *(undefined1 *)(param_1 + 0x341) = 1;
    }
    else if (*(char *)(param_1 + 0x341) == '\x01') {
      *(undefined1 *)(param_1 + 0x341) = 0;
    }
  }
  if ((param_2 & 0x10) != 0) {
    FUN_0195f6f0(param_1,6,1);
  }
  return;
}

