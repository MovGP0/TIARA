/* Ghidra address: 0198aa20 */
/* Ghidra symbol: FUN_0198aa20 */


undefined8 FUN_0198aa20(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else if (param_3 < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

