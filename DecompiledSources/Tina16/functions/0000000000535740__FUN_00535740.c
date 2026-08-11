/* Ghidra address: 00535740 */
/* Ghidra symbol: FUN_00535740 */


uint FUN_00535740(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *param_1 & *param_1 - 1;
    uVar2 = *param_1 & ~uVar1;
    *param_1 = uVar1;
  }
  return uVar2;
}

