/* Ghidra address: 016264b0 */
/* Ghidra symbol: FUN_016264b0 */


undefined8 FUN_016264b0(int *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 9)) || (param_1[0x13] != 0x34)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

