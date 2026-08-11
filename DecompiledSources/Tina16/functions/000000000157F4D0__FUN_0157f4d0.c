/* Ghidra address: 0157f4d0 */
/* Ghidra symbol: FUN_0157f4d0 */


void FUN_0157f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 longlong *param_5)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_70;
  int local_6c;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_30 = *param_5;
  lStack_28 = param_5[1];
  local_20 = FUN_0157f930(&PTR_FUN_01576b50,1);
  *(undefined8 *)(local_20 + 0x40) = param_3;
  if (local_30 != 0) {
    *(longlong *)(local_20 + 0x50) = local_30;
    *(longlong *)(local_20 + 0x58) = lStack_28;
  }
  cVar1 = FUN_00440a20(param_1,1);
  if (cVar1 != '\0') {
    FUN_005d11b0(param_1);
  }
  FUN_005d0ce0(&local_50,param_2,&DAT_0157f7c8,1);
  FUN_0157fa90(local_20,param_1,3);
  FUN_0044f850(&local_48,param_2);
  FUN_004194b0(&local_60,local_50,&DAT_004210c0);
  local_58 = 0;
  while( true ) {
    local_68 = local_60;
    if (local_60 != 0) {
      local_68 = *(ulonglong *)(local_60 - 8);
    }
    if (local_68 <= local_58) break;
    FUN_00414b50(&local_38,*(undefined8 *)(local_60 + local_58 * 8));
    local_6c = 0;
    if (local_48 != 0) {
      local_6c = *(int *)(local_48 + -4);
    }
    local_70 = 0;
    if (local_38 != 0) {
      local_70 = *(undefined4 *)(local_38 + -4);
    }
    FUN_00416dc0(&local_88,local_38,local_6c + 1,local_70);
    local_98 = 1;
    FUN_00450070(&local_40,local_88,&DAT_0157f7d8,&DAT_0157f7e8);
    FUN_015825c0(local_20,local_38,local_40,param_4);
    local_58 = local_58 + 1;
  }
  FUN_00419430(&local_60,&DAT_004210c0);
  FUN_00410f20(local_20);
  FUN_00414480(&local_88);
  FUN_00419430(&local_60,&DAT_004210c0);
  FUN_00419430(&local_50,&DAT_004210c0);
  FUN_00414560(&local_48,3);
  return;
}

