/* Ghidra address: 00418690 */
/* Ghidra symbol: FUN_00418690 */


void FUN_00418690(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  FUN_00418650(param_1,uVar1,param_2);
  return;
}

