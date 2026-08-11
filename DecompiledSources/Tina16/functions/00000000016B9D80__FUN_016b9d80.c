/* Ghidra address: 016b9d80 */
/* Ghidra symbol: FUN_016b9d80 */


void FUN_016b9d80(longlong param_1)

{
  while ((*(byte *)(param_1 + 0x20 + ((longlong)(ulonglong)*(byte *)(param_1 + 0x9a0) >> 3)) >>
          ((ulonglong)*(byte *)(param_1 + 0x9a0) & 7) & 1) != 0) {
    FUN_016b9d20(param_1);
  }
  return;
}

