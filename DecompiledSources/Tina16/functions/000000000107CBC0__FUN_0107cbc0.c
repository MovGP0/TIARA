/* Ghidra address: 0107cbc0 */
/* Ghidra symbol: FUN_0107cbc0 */


undefined8
FUN_0107cbc0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined8 local_res18;
  int local_res20;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_c8;
  local_78 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_a8 = L"\\bin\\xc32-gcc.exe\" ";
  FUN_00416cd0(&local_30,3,&DAT_0107cf14,*(undefined8 *)(param_1 + 0xb08));
  FUN_0107a920(param_1,&local_38,*(undefined8 *)(param_1 + 0xb38));
  if (local_res20 == 0) {
    local_70 = local_38;
    local_68 = 0x11;
    local_60 = local_res18;
    local_58 = 0x11;
    FUN_004414c0(&local_78,local_res18,&DAT_0107cf58);
    local_50 = local_78;
    local_48 = 0x11;
    FUN_00442f70(&local_28,*(undefined8 *)(param_1 + 0x4d08),&local_70,2);
    FUN_00416ad0(&local_30,local_28);
  }
  else if (local_res20 == 1) {
    local_88 = local_38;
    local_80 = 0x11;
    FUN_00442f70(&local_28,*(undefined8 *)(param_1 + 0x4d10),&local_88,0);
    local_a8 = L" -o Debug\\";
    local_a0 = local_res18;
    local_98 = &DAT_0107cf90;
    local_90 = param_5;
    FUN_00416cd0(&local_30,6,local_30,local_28);
  }
  else {
    local_a8 = L"\\bin\\xc32-bin2hex.exe\" ";
    FUN_00416cd0(&local_30,3,&DAT_0107cf14,*(undefined8 *)(param_1 + 0xb08));
    FUN_00416ba0(&local_28,L"Debug\\",local_res18);
    FUN_00416ad0(&local_30,local_28);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00410f20(local_10);
  FUN_00414480(&local_78);
  FUN_00414560(&local_38,5);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_5);
  return param_2;
}

