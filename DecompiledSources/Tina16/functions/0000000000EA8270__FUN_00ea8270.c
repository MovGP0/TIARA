/* Ghidra address: 00ea8270 */
/* Ghidra symbol: FUN_00ea8270 */


undefined8 FUN_00ea8270(undefined1 *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  if ((iVar1 < param_4) || (param_4 < 1)) {
    FUN_00ea68e0(param_4);
  }
  FUN_00ea7670(param_2,*(undefined8 *)(param_1 + 0x18),param_3,*param_1,param_4);
  return param_2;
}

