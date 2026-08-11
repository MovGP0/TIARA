/* Ghidra address: 00aaeea0 */
/* Ghidra symbol: FUN_00aaeea0 */


void FUN_00aaeea0(longlong param_1,char param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  int local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined1 *local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  longlong local_18;
  longlong local_10;
  
  local_90 = auStack_e8;
  local_18 = 0;
  local_10 = 0;
  FUN_00419430(&local_10,&DAT_00a8b940);
  local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0xf0);
  local_30 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0xf8);
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
    iVar2 = (int)local_50 + 1;
    do {
      piVar1 = (int *)(local_10 + (longlong)local_34 * 4);
      *piVar1 = *piVar1 - *(int *)(local_30 + (longlong)local_34 * 4);
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004194b0(&local_18,local_10,&DAT_00a8b940);
  FUN_00419430(&local_10,&DAT_00a8b940);
  local_58 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x110);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x128);
  local_5c = iVar2 + -1;
  local_60 = 0;
  local_64 = 0;
  if (-1 < local_5c) {
    do {
      if (*(char *)(local_58 + local_64) == param_2) {
        local_60 = local_60 + *(int *)(local_18 + (longlong)local_64 * 4);
      }
      local_64 = local_64 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_1c = local_60;
  if (local_60 == 0) {
    local_70 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x110);
    local_78 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x158);
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x128);
    local_7c = iVar2 + -1;
    local_80 = 0;
    local_84 = 0;
    if (-1 < local_7c) {
      do {
        if (*(char *)(local_70 + local_84) == param_2) {
          local_80 = local_80 + *(int *)(local_78 + (longlong)local_84 * 4);
        }
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_20 = local_80;
    local_c8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x128) + -1;
    local_c0 = (param_4 - param_3) + local_80;
    local_b8 = local_80;
    local_b0 = param_5;
    FUN_00aad350(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x70),param_2,
                 *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x158,0);
  }
  else {
    local_c8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x128) + -1;
    local_c0 = param_4 - param_3;
    local_b8 = local_60;
    local_b0 = param_5;
    local_a8 = local_18;
    FUN_00aad510(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x70),param_2,
                 *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x158,0);
  }
  FUN_00417840(&local_18,&DAT_00a8b940,2);
  return;
}

