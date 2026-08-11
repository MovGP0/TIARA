/* Ghidra address: 00bafe00 */
/* Ghidra symbol: FUN_00bafe00 */


void FUN_00bafe00(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x44) = param_2;
  }
  return;
}

