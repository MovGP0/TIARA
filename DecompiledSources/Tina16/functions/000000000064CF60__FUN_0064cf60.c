/* Ghidra address: 0064cf60 */
/* Ghidra symbol: FUN_0064cf60 */


void FUN_0064cf60(longlong param_1,undefined4 param_2)

{
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x298) = 1;
  }
  *(undefined4 *)(param_1 + 0x2a8) = param_2;
  return;
}

