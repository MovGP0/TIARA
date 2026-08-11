/* Ghidra address: 01776660 */
/* Ghidra symbol: FUN_01776660 */


void FUN_01776660(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = (longlong *)0x0;
  if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x10) == 0) {
    local_40 = auStack_78;
    local_28 = FUN_0153c260(&DAT_0153c0f8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x170),local_28);
  }
  else {
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    (**(code **)(**(longlong **)(local_28 + 8) + 0x90))(*(longlong **)(local_28 + 8));
  }
  FUN_0043f750(&local_48,2);
  (**(code **)(**(longlong **)(local_28 + 8) + 0x78))(*(longlong **)(local_28 + 8),local_48);
  local_20 = (longlong *)FUN_013a5d40(param_2);
  uVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  FUN_0043f750(&local_50,uVar1);
  (**(code **)(**(longlong **)(local_28 + 8) + 0x78))(*(longlong **)(local_28 + 8),local_50);
  (**(code **)(**(longlong **)(local_28 + 8) + 0x88))(*(longlong **)(local_28 + 8),local_20);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_38,2);
  return;
}

