/* Ghidra address: 0083d5f0 */
/* Ghidra symbol: FUN_0083d5f0 */


undefined8 FUN_0083d5f0(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  if ((((param_2 < *param_4) || (param_4[2] < param_2)) || (param_3 < param_4[1])) ||
     (param_4[3] < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

