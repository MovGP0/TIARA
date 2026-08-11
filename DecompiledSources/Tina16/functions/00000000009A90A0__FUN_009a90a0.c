/* Ghidra address: 009a90a0 */
/* Ghidra symbol: FUN_009a90a0 */


undefined8 FUN_009a90a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_009a83e0(param_1,param_3);
  iVar2 = FUN_009a8330(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00417740(&local_28,&DAT_009427f8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_009a7dc0(param_2,param_3,&local_28);
  }
  else {
    FUN_009a8770(param_1,&local_38,param_3,uVar1,3);
    FUN_009a7dc0(param_2,param_3,&local_38);
  }
  FUN_00417840(&local_38,&DAT_009427f8,2);
  return param_2;
}

