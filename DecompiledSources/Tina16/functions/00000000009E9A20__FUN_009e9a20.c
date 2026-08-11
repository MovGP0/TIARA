/* Ghidra address: 009e9a20 */
/* Ghidra symbol: FUN_009e9a20 */


void FUN_009e9a20(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_009e76c0(param_1);
  iVar1 = (**(code **)*param_2)(param_2);
  local_1c = FUN_004b6da0(param_2);
  local_1c = iVar1 - local_1c;
  FUN_00419260(&local_28,&DAT_00406578,1,(longlong)local_1c);
  (**(code **)(*param_2 + 0x18))(param_2,local_28,local_1c);
  local_1c = FUN_00458e90(local_28,local_res18);
  if (local_1c == 0) {
    local_res18[0] = FUN_0045adf0();
  }
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  local_68 = (int)local_30 - local_1c;
  FUN_0045aba0(local_res18[0],&local_48,local_28,local_1c);
  FUN_004168e0(&local_50,local_48);
  (**(code **)(*param_1 + 0x58))(param_1,local_50);
  FUN_009e77f0(param_1);
  FUN_00414520(&local_50);
  FUN_00414480(&local_48);
  FUN_00419430(&local_28,&DAT_00406578);
  return;
}

