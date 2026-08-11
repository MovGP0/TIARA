/* Ghidra address: 0180e120 */
/* Ghidra symbol: FUN_0180e120 */


void FUN_0180e120(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  if (param_4 != (longlong *)0x0) {
    local_10 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    uVar1 = (**(code **)(*param_4 + 0x60))(param_4);
    FUN_007d55b0(local_10,uVar1);
    uVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    FUN_007d5610(local_10,uVar1);
    uVar1 = FUN_0060a330(param_4);
    FUN_007d5ad0(local_10,param_4,uVar1);
    local_38 = 0;
    local_30 = 1;
    FUN_007d6c70(local_10,param_1,param_2,param_3);
    FUN_007d6450(local_10);
    FUN_00410f20(local_10);
  }
  return;
}

