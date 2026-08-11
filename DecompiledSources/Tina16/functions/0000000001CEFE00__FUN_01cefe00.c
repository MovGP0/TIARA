/* Ghidra address: 01cefe00 */
/* Ghidra symbol: FUN_01cefe00 */


undefined8 FUN_01cefe00(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    uVar1 = 0;
  }
  else if (param_1 < param_3) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1 == param_3) && (param_2 < param_4)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

