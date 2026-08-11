/* Ghidra address: 00796bf0 */
/* Ghidra symbol: FUN_00796bf0 */


undefined8 FUN_00796bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar1 = FUN_00795f90(param_1,param_3);
  iVar2 = FUN_00795ed0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_00795950(param_2,param_3,&local_38);
  }
  else {
    FUN_00796270(param_1,&local_38,param_3,uVar1,3);
    FUN_00795950(param_2,param_3,&local_38);
  }
  return param_2;
}

