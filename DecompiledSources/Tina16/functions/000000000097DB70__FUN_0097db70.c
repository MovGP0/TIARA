/* Ghidra address: 0097db70 */
/* Ghidra symbol: FUN_0097db70 */


void FUN_0097db70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_28 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  uVar1 = FUN_0097d7b0(param_3);
  (**(code **)(*local_28 + 0x10))(local_28,uVar1);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = FUN_0096fb60(&PTR_FUN_0091cbd0,1,param_1,param_2);
    *(undefined1 *)(local_20 + 0x88) = 1;
    (**(code **)(*local_28 + 0x48))(local_28,&local_38);
    FUN_00414b90(local_20 + 0x90,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  FUN_00410f20(local_28);
  FUN_004145c0(&local_40,2);
  return;
}

