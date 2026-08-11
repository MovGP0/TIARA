/* Ghidra address: 014112e0 */
/* Ghidra symbol: FUN_014112e0 */


void FUN_014112e0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0040d200(param_3,0x20,0);
  FUN_0040d200(param_2,0x18,0);
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    uVar1 = FUN_014111d0(param_1,*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x730));
    param_2[1] = uVar1;
  }
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    uVar1 = FUN_014111d0(param_1,*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x738));
    param_2[2] = uVar1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x7e8);
  param_2[4] = *(undefined4 *)(param_1 + 0x7f8);
  param_2[5] = *(undefined4 *)(param_1 + 0x7fc);
  param_2[3] = *(undefined4 *)(param_1 + 0x7f4);
  if ((int)param_2[2] < (int)param_2[1]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_28);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_30);
    FUN_00416cd0(local_20,4,local_28,L" exceeds ",local_30,&DAT_014117ec);
    FUN_01411130(param_1,local_20[0]);
  }
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    uVar1 = FUN_014111d0(param_1,*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x758));
    param_3[1] = uVar1;
  }
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    uVar1 = FUN_014111d0(param_1,*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(param_1 + 0x768));
    param_3[2] = uVar1;
  }
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
  *(undefined8 *)(param_3 + 4) = uVar2;
  if ((int)param_3[2] < (int)param_3[1]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_40);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_48);
    FUN_00416cd0(&local_38,4,local_40,L" exceeds ",local_48,&DAT_014117ec);
    FUN_01411130(param_1,local_38);
  }
  if (*(int *)(param_1 + 0x7b0) < (int)param_2[2]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_58);
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_68,PTR_PTR_02005488);
    FUN_00b8e650(uVar2,&local_60,L"HDLStrings.Msg_PsgExceed",local_68);
    FUN_00416cd0(&local_50,3,local_58,&DAT_014117fc,local_60);
    FUN_01411130(param_1,local_50);
  }
  if (*(int *)(param_1 + 0x7b0) < (int)param_3[2]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_78);
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02005488);
    FUN_00b8e650(uVar2,&local_80,L"HDLStrings.Msg_PsgExceed",local_88);
    FUN_00416cd0(&local_70,3,local_78,&DAT_014117fc,local_80);
    FUN_01411130(param_1,local_70);
  }
  uVar1 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x720));
  *param_3 = uVar1;
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  *(undefined8 *)(param_3 + 6) = uVar2;
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
  *(undefined8 *)(param_3 + 4) = uVar2;
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,8);
  return;
}

