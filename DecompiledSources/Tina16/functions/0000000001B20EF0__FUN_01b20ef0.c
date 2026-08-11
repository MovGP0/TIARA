/* Ghidra address: 01b20ef0 */
/* Ghidra symbol: FUN_01b20ef0 */


int FUN_01b20ef0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1 * 2;
}

