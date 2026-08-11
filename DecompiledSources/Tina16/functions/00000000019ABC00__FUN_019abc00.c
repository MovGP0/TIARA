/* Ghidra address: 019abc00 */
/* Ghidra symbol: FUN_019abc00 */


undefined8 FUN_019abc00(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0x20) || (0x7e < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

