/* Ghidra address: 00aaddf0 */
/* Ghidra symbol: FUN_00aaddf0 */


void FUN_00aaddf0(longlong param_1,byte param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_60 = auStack_b8;
  local_18 = 0;
  local_10 = 0;
  FUN_00419430(&local_10,&DAT_00a8b940);
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xf0);
  local_30 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf8);
  FUN_004192a0(&local_10,local_28,&DAT_00a8b940);
  local_40 = local_10;
  if (local_10 != 0) {
    local_40 = *(longlong *)(local_10 + -8);
  }
  local_48 = local_30;
  if (local_30 != 0) {
    local_48 = *(longlong *)(local_30 + -8);
  }
  local_50 = local_48;
  if (local_40 + -1 < local_48 + -1) {
    local_50 = local_40;
  }
  local_50 = local_50 + -1;
  local_34 = 0;
  if (-1 < (int)local_50) {
    iVar4 = (int)local_50 + 1;
    do {
      piVar1 = (int *)(local_10 + (longlong)local_34 * 4);
      *piVar1 = *piVar1 - *(int *)(local_30 + (longlong)local_34 * 4);
      local_34 = local_34 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004194b0(&local_18,local_10,&DAT_00a8b940);
  FUN_00419430(&local_10,&DAT_00a8b940);
  if (*(int *)(param_1 + 0x98) < *(int *)(param_1 + 0x9c)) {
    local_90 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98);
    local_88 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x98);
    local_80 = *(undefined4 *)(param_1 + 0x88 + (ulonglong)param_2 * 4);
    local_78 = local_18;
    local_98 = param_4;
    FUN_00aad510(*(undefined8 *)(param_1 + 0xd0),param_2,*(longlong *)(param_1 + 0xd0) + 0xf8,
                 param_3);
  }
  if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x84)) {
    local_90 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
    local_88 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x98);
    local_80 = *(undefined4 *)(param_1 + 0x88 + (ulonglong)param_2 * 4);
    local_78 = local_18;
    local_98 = param_4;
    FUN_00aad510(*(undefined8 *)(param_1 + 0xd0),param_2,*(longlong *)(param_1 + 0xd0) + 0xf0,
                 param_3);
  }
  local_1c = param_3;
  if (param_3 <= param_4) {
    iVar4 = (param_4 - param_3) + 1;
    do {
      lVar3 = (longlong)local_1c;
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf8) + lVar3 * 4);
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf0) + lVar3 * 4) < iVar2) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf0) + lVar3 * 4) = iVar2;
      }
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00417840(&local_18,&DAT_00a8b940,2);
  return;
}

