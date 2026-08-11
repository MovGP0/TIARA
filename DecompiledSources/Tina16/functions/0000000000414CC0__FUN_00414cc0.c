/* Ghidra address: 00414cc0 */
/* Ghidra symbol: FUN_00414cc0 */


uint FUN_00414cc0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}

