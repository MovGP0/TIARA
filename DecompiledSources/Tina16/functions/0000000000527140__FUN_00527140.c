/* Ghidra address: 00527140 */
/* Ghidra symbol: FUN_00527140 */


undefined8 FUN_00527140(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else if (param_1 < param_2) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

