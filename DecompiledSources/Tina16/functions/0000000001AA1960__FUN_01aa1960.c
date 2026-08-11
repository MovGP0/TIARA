/* Ghidra address: 01aa1960 */
/* Ghidra symbol: FUN_01aa1960 */


void FUN_01aa1960(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar6;
  longlong local_res10 [3];
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 *local_40;
  int local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  ulonglong uVar5;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_004170c0(&DAT_01aa1c84,local_res10[0],1);
  FUN_00416dc0(&local_58,local_res10[0],1,iVar2 + -1);
  FUN_0043ea00(&local_50,local_58);
  FUN_0043e130(&local_48,local_50);
  uVar5 = local_48;
  FUN_00414b50(local_res10,local_48);
  FUN_00414480(&local_28);
  local_30 = 0;
  if (local_res10[0] != 0) {
    local_30 = *(int *)(local_res10[0] + -4);
  }
  local_20 = 1;
  iVar2 = local_30;
  if (0 < local_30) {
    do {
      sVar1 = *(short *)(local_res10[0] + -2 + (longlong)local_20 * 2);
      uVar3 = sVar1 - 0x30;
      if (uVar3 < 0x10) {
        uVar4 = (int)CONCAT62((int6)(uVar5 >> 0x10),1) << ((byte)uVar3 & 0x1f);
        uVar5 = (ulonglong)uVar4;
        bVar6 = (uVar4 & 0x3ff) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00416780(&local_60,sVar1);
        uVar5 = local_60;
        FUN_00416ad0(&local_28,local_60);
      }
      local_20 = local_20 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_1c = FUN_0043fc00(local_28);
  iVar2 = FUN_004170c0(&DAT_01aa1c98,local_res10[0],1);
  if (iVar2 < 1) {
    iVar2 = FUN_004170c0(&DAT_01aa1cac,local_res10[0],1);
    if (((iVar2 < 1) && (iVar2 = FUN_004170c0(&DAT_01aa1cc0,local_res10[0],1), iVar2 < 1)) &&
       (iVar2 = FUN_004170c0(&LAB_01aa1cd4,local_res10[0],1), iVar2 < 1)) {
      FUN_007d5cb0(*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x58));
    }
    else {
      local_20 = 1;
      while ((local_20 < 7 && (*(int *)(&DAT_01fcdea4 + (longlong)local_20 * 4) != local_1c))) {
        local_20 = local_20 + 1;
      }
      if (local_20 < 7) {
        FUN_007d5cb0(*(undefined8 *)(param_1 + 0x20),local_20 + -1,*(undefined8 *)(param_1 + 0x58));
      }
    }
  }
  else {
    local_20 = 1;
    while ((local_20 < 7 &&
           (*(int *)((longlong)&UNWIND_INFO_01fcde88 + (longlong)local_20 * 4 + 4) != local_1c))) {
      local_20 = local_20 + 1;
    }
    if (local_20 < 7) {
      FUN_007d5cb0(*(undefined8 *)(param_1 + 0x28),local_20 + -1,*(undefined8 *)(param_1 + 0x58));
    }
  }
  FUN_00414560(&local_60,4);
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}

