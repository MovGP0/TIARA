/* Ghidra address: 007947e0 */
/* Ghidra symbol: FUN_007947e0 */


undefined8 FUN_007947e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = FUN_00793c60(param_1,param_3);
  iVar2 = FUN_00793bb0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    local_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_007936b0(param_2,param_3,&local_40);
  }
  else {
    FUN_00793f20(param_1,&local_40,param_3,uVar1,3);
    FUN_007936b0(param_2,param_3,&local_40);
  }
  return param_2;
}

