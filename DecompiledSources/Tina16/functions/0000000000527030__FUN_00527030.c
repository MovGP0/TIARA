/* Ghidra address: 00527030 */
/* Ghidra symbol: FUN_00527030 */


undefined8 FUN_00527030(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0) {
    uVar1 = 0xff;
  }
  else if (0 < param_1) {
    uVar1 = 1;
  }
  return uVar1;
}

