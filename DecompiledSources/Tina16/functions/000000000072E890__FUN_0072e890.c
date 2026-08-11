/* Ghidra address: 0072e890 */
/* Ghidra symbol: FUN_0072e890 */


undefined8 FUN_0072e890(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != (ushort *)0x0) {
    iVar1 = *(int *)(param_3 + -2);
  }
  if ((iVar1 < 2) || (0x1f < *param_3)) {
    FUN_00414ad0(param_2,param_3);
  }
  else {
    FUN_00416dc0(param_2,param_3,2,0x7fffffff);
  }
  return param_2;
}

