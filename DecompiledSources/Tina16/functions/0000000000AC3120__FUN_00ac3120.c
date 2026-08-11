/* Ghidra address: 00ac3120 */
/* Ghidra symbol: FUN_00ac3120 */


longlong FUN_00ac3120(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_68 = (undefined *)param_5;
  local_60 = param_6;
  FUN_00a92c40(local_res8,0,param_3,param_4);
  if (param_5 != 0) {
    FUN_00414ad0(local_res8 + 0xa0,*(undefined8 *)(param_5 + 0x38));
  }
  local_20 = (longlong *)(local_res8 + 0xa0);
  local_2c = 0;
  local_68 = &DAT_00ac345c;
  local_60 = param_6;
  FUN_00416cd0(&local_48,4,&DAT_00ac344c,param_7);
  if (local_48 != 0) {
    local_68 = &DAT_00ac345c;
    local_60 = param_6;
    FUN_00416cd0(&local_50,4,&DAT_00ac344c,param_7);
    local_2c = *(int *)(local_50 + -4);
  }
  local_24 = local_2c;
  if (0 < local_2c) {
    local_30 = 0;
    if (*local_20 != 0) {
      local_30 = *(int *)(*local_20 + -4);
    }
    local_28 = local_30;
    FUN_004169f0(local_20,local_30 + local_2c);
    local_68 = &DAT_00ac345c;
    local_60 = param_6;
    FUN_00416cd0(&local_58,4,&DAT_00ac344c,param_7);
    uVar2 = FUN_00416740(local_58);
    lVar3 = FUN_00414de0(local_20);
    FUN_00409a70(uVar2,lVar3 + -2 + (longlong)(local_28 + 1) * 2,(longlong)(local_24 * 2));
  }
  *(undefined4 *)(local_res8 + 0x7c) = 999999999;
  *(undefined4 *)(local_res8 + 0x94) = 999999999;
  *(undefined4 *)(local_res8 + 0x90) = 999999999;
  *(undefined4 *)(local_res8 + 0x9c) = 0;
  *(undefined4 *)(local_res8 + 0x98) = 0;
  FUN_00414560(&local_58,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

