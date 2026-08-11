/* Ghidra address: 01776af0 */
/* Ghidra symbol: FUN_01776af0 */


void FUN_01776af0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x10) == 0) {
    local_28 = FUN_0153c260(&DAT_0153c0f8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x170),local_28);
  }
  else {
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    (**(code **)(**(longlong **)(local_28 + 8) + 0x90))(*(longlong **)(local_28 + 8));
  }
  (**(code **)(*local_20 + 0x60))(local_20,local_res10[0]);
  (**(code **)(**(longlong **)(local_28 + 8) + 0x88))(*(longlong **)(local_28 + 8),local_20);
  FUN_00410f20(local_20);
  FUN_00414480(local_res10);
  return;
}

