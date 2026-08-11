/* Ghidra address: 008774b0 */
/* Ghidra symbol: FUN_008774b0 */


undefined8 FUN_008774b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined *local_90;
  undefined1 local_88;
  uint local_80;
  undefined1 local_78;
  undefined *local_70;
  undefined1 local_68;
  uint local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  ulonglong local_20;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  undefined8 local_10;
  
  local_30 = auStack_b8;
  local_10 = 0;
  FUN_00448e20(param_2,&local_16,&local_14,&local_12);
  local_20 = FUN_00448e40(param_2);
  local_20 = local_20 & 0xffff;
  FUN_00414480(&local_10);
  FUN_0044a3a0(&local_10,L"HH\":\"nn\":\"ss",param_2,PTR_DAT_02004830);
  local_90 = (&PTR_FUN_01e1e6d8)[local_20];
  local_88 = 0x11;
  local_80 = (uint)local_12;
  local_78 = 0;
  local_70 = (&PTR_DAT_01e1e710)[local_14];
  local_68 = 0x11;
  local_60 = (uint)local_16;
  local_58 = 0;
  local_50 = local_10;
  local_48 = 0x11;
  local_40 = &LAB_008776ac;
  local_38 = 0x11;
  FUN_00876cf0(param_1,L"%s, %.2d %s %.4d %s %s",&local_90,5);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

