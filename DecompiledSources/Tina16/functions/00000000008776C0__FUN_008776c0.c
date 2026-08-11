/* Ghidra address: 008776c0 */
/* Ghidra symbol: FUN_008776c0 */


undefined8 FUN_008776c0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  undefined1 local_a8;
  uint local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined1 local_88;
  undefined *local_80;
  undefined1 local_78;
  undefined2 local_70;
  undefined1 local_68;
  uint local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  ulonglong local_20;
  undefined2 local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  undefined8 local_10;
  
  local_30 = auStack_d8;
  local_10 = 0;
  FUN_00448e20(param_2,&local_16,&local_14,&local_12);
  if (param_3 == '\0') {
    local_18 = 0x20;
  }
  else {
    local_18 = 0x2d;
  }
  local_20 = FUN_00448e40(param_2);
  local_20 = local_20 & 0xffff;
  FUN_00414480(&local_10);
  FUN_0044a3a0(&local_10,L"HH\":\"nn\":\"ss",param_2,PTR_DAT_02004830);
  local_b0 = (&PTR_FUN_01e1e6d8)[local_20];
  local_a8 = 0x11;
  local_a0 = (uint)local_12;
  local_98 = 0;
  local_90 = local_18;
  local_88 = 9;
  local_80 = (&PTR_DAT_01e1e710)[local_14];
  local_78 = 0x11;
  local_70 = local_18;
  local_68 = 9;
  local_60 = (uint)local_16;
  local_58 = 0;
  local_50 = local_10;
  local_48 = 0x11;
  local_40 = &LAB_00877910;
  local_38 = 0x11;
  FUN_00876cf0(param_1,L"%s, %.2d%s%s%s%.4d %s %s",&local_b0,7);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

