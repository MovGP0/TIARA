/* Ghidra address: 0083d5d0 */
/* Ghidra symbol: FUN_0083d5d0 */


undefined8 FUN_0083d5d0(int param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((((param_1 < *param_3) || (param_3[2] < param_1)) || (param_2 < param_3[1])) ||
     (param_3[3] < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

