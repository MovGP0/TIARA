/* Ghidra address: 004b4500 */
/* Ghidra symbol: FUN_004b4500 */


void FUN_004b4500(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined1 auStack_78 [32];
  int local_58;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_004b3260(param_1);
  iVar1 = (**(code **)*param_2)(param_2);
  local_1c = FUN_004b6da0(param_2);
  local_1c = iVar1 - local_1c;
  FUN_00419260(&local_28,&DAT_00406578,1,(longlong)local_1c);
  (**(code **)(*param_2 + 0x28))(param_2,local_28,0,local_1c);
  local_1c = FUN_00458f20(local_28,local_res18,param_1[2]);
  (**(code **)(*param_1 + 0x58))(param_1,local_res18[0]);
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  local_58 = (int)local_30 - local_1c;
  FUN_0045aba0(local_res18[0],&local_48,local_28,local_1c);
  (**(code **)(*param_1 + 0x60))(param_1,local_48);
  FUN_004b3390(param_1);
  FUN_00414480(&local_48);
  FUN_00419430(&local_28,&DAT_00406578);
  return;
}

