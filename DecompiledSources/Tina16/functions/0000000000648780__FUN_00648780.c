/* Ghidra address: 00648780 */
/* Ghidra symbol: FUN_00648780 */


undefined8 FUN_00648780(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044f900(&DAT_006487dc,param_2);
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    FUN_00416dc0(param_1,param_2,iVar1 + 1,0x7fffffff);
  }
  return param_1;
}

