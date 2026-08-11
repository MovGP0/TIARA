/* Ghidra address: 00f8d1a0 */
/* Ghidra symbol: FUN_00f8d1a0 */


void FUN_00f8d1a0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x34fc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x34fc) = 1;
  }
  return;
}

