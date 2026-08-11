/* Ghidra address: 01d31290 */
/* Ghidra symbol: FUN_01d31290 */


int FUN_01d31290(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1 * 2 + 4;
}

