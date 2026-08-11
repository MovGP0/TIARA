/* Ghidra address: 00bc3b80 */
/* Ghidra symbol: FUN_00bc3b80 */


void FUN_00bc3b80(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (*(short *)(param_1 + (ulonglong)uVar1 * 2) != 0) {
    uVar1 = uVar1 + 1;
  }
  return;
}

