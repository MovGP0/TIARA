/* Ghidra address: 00b257a0 */
/* Ghidra symbol: FUN_00b257a0 */


undefined8 FUN_00b257a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00b258c0(param_1);
  if (iVar1 < param_3) {
    uVar2 = 0;
  }
  else {
    FUN_00415d10(param_2,param_3,0);
    uVar2 = FUN_00414df0(param_2);
    uVar2 = FUN_00b25770(param_1,uVar2,param_3);
  }
  return uVar2;
}

