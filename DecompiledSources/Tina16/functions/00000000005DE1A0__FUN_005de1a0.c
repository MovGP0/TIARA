/* Ghidra address: 005de1a0 */
/* Ghidra symbol: FUN_005de1a0 */


void FUN_005de1a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ulonglong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_30 = 0;
  local_28 = (longlong *)0x0;
  local_20[0] = 0;
  local_20[0] = FUN_004095c0(0x8000);
  FUN_004b3260(param_2);
  (**(code **)(*param_2 + 0x90))(param_2);
  local_60 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  local_68 = 0x4000;
  local_3c = thunk_FUN_03b4b941(0,0,0,local_20[0]);
  if (local_3c == 0x3ffe) {
    FUN_005d1840(&local_30,*(undefined8 *)(param_1 + 8));
    FUN_00458e90(local_30,&local_28);
    local_48 = local_30;
    if (local_30 != 0) {
      local_48 = *(ulonglong *)(local_30 - 8);
    }
    local_3c = FUN_0045a100(local_28,local_30,0,local_48 & 0xffffffff);
    iVar2 = (**(code **)(*local_28 + 0x40))(local_28,1);
    FUN_00409620(local_20,(longlong)(local_3c * iVar2));
    local_60 = FUN_00416740(*(undefined8 *)(param_1 + 8));
    local_68 = local_3c;
    local_3c = thunk_FUN_03b4b941(0,0,0,local_20[0]);
  }
  lVar1 = local_20[0];
  if (local_3c != 0) {
    for (; local_38 = lVar1, 0 < local_3c; local_3c = local_3c - local_40) {
      FUN_004167d0(&local_58,local_38);
      (**(code **)(*param_2 + 0x78))(param_2,local_58);
      local_40 = FUN_00414d00(local_38);
      local_40 = local_40 + 1;
      lVar1 = local_38 + (longlong)local_40 * 2;
    }
  }
  FUN_004b3390(param_2);
  FUN_004095f0(local_20[0]);
  FUN_00414480(&local_58);
  FUN_00419430(&local_30,&DAT_00406578);
  return;
}

