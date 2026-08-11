/* Ghidra address: 0142a3e0 */
/* Ghidra symbol: FUN_0142a3e0 */


void FUN_0142a3e0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [20];
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_58);
  if (local_58 != 0) {
    *(undefined1 *)(param_1 + 0x708) = 1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_60);
    FUN_00441a10(&local_48,local_60);
    FUN_015fcb30(&local_38,local_2c);
    local_78 = (undefined1 *)local_48;
    FUN_00416cd0(&local_40,3,local_38,L"\\pmbus");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
    (**(code **)(*plVar1 + 0x100))(plVar1,local_40);
    *(undefined4 *)(param_1 + 0x728) = 1;
    local_78 = local_24;
    local_70 = local_28;
    FUN_0160c650(local_40,local_38,param_1 + 0x728,param_1 + 0x72c);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_68);
    FUN_00414ad0(param_1 + 0x730,local_68);
  }
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_48,3);
  return;
}

