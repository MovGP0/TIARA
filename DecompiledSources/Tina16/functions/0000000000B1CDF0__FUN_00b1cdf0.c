/* Ghidra address: 00b1cdf0 */
/* Ghidra symbol: FUN_00b1cdf0 */


undefined8 FUN_00b1cdf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong local_30;
  int local_24;
  undefined1 local_1e [2];
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  undefined1 local_16 [2];
  ushort local_14;
  undefined1 local_12 [2];
  undefined8 local_10;
  
  local_40 = auStack_138;
  local_100 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_10 = 0;
  local_24 = FUN_00417170(&DAT_00b1d634,*(undefined8 *)(param_1 + 0x98),1);
  if (0 < local_24) {
    FUN_00416430(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98),1,local_24 + -1);
  }
  FUN_00b15430(&local_48,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d63c,&DAT_00b1d648);
  FUN_00414be0(param_1 + 0x98,local_48);
  FUN_00b15430(&local_50,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d650,&DAT_00b1d648);
  FUN_00414be0(param_1 + 0x98,local_50);
  FUN_00b15430(&local_58,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d658,0);
  FUN_00414be0(param_1 + 0x98,local_58);
  FUN_00b15430(&local_60,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d660,0);
  FUN_00414be0(param_1 + 0x98,local_60);
  FUN_00b15430(&local_68,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d66c,0);
  FUN_00414be0(param_1 + 0x98,local_68);
  FUN_00b15430(&local_70,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d674,&DAT_00b1d680);
  FUN_00414be0(param_1 + 0x98,local_70);
  FUN_00b15430(&local_78,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d68c,&DAT_00b1d698);
  FUN_00414be0(param_1 + 0x98,local_78);
  FUN_00448e20(param_3,local_12,&local_14,local_16);
  local_118 = local_1e;
  FUN_00448ad0(param_3,&local_18,&local_1a,&local_1c);
  local_30 = FUN_0040c840(param_3);
  FUN_00416780(&local_90,**(undefined2 **)(PTR_DAT_02004830 + (ulonglong)local_14 * 8 + 0x98));
  local_118 = &DAT_00b1d6bc;
  FUN_00416cd0(&local_88,3,&DAT_00b1d6bc,local_90);
  FUN_004168e0(&local_98,local_88);
  FUN_00b15430(&local_80,*(undefined8 *)(param_1 + 0x98),L"mmmmm",local_98);
  FUN_00414be0(param_1 + 0x98,local_80);
  FUN_0043f780(&local_b0,local_30 * 0x18 + (ulonglong)local_18);
  local_118 = &DAT_00b1d6bc;
  FUN_00416cd0(&local_a8,3,&DAT_00b1d6bc,local_b0);
  FUN_004168e0(&local_b8,local_a8);
  FUN_00b15430(&local_a0,*(undefined8 *)(param_1 + 0x98),&DAT_00b1d6c4,local_b8);
  FUN_00414be0(param_1 + 0x98,local_a0);
  FUN_0043f780(&local_d0,local_30 * 0x5a0 + (ulonglong)((uint)local_18 * 0x3c) + (ulonglong)local_1a
              );
  local_118 = &DAT_00b1d6bc;
  FUN_00416cd0(&local_c8,3,&DAT_00b1d6bc,local_d0);
  FUN_004168e0(&local_d8,local_c8);
  FUN_00b15430(&local_c0,*(undefined8 *)(param_1 + 0x98),L"[mm]",local_d8);
  FUN_00414be0(param_1 + 0x98,local_c0);
  FUN_0043f780(&local_f0,
               local_30 * 0x15180 + (ulonglong)((uint)local_18 * 0xe10) +
               (ulonglong)((uint)local_1a * 0x3c) + (ulonglong)local_1c);
  local_118 = &DAT_00b1d6bc;
  FUN_00416cd0(&local_e8,3,&DAT_00b1d6bc,local_f0);
  FUN_004168e0(&local_f8,local_e8);
  FUN_00b15430(&local_e0,*(undefined8 *)(param_1 + 0x98),L"[ss]",local_f8);
  FUN_00414be0(param_1 + 0x98,local_e0);
  FUN_00414480(&local_10);
  FUN_004168b0(&local_100,*(undefined8 *)(param_1 + 0x98));
  local_38 = local_100;
  FUN_0044a3a0(&local_10,local_100,param_3,PTR_DAT_02004830);
  FUN_004168e0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_100);
  FUN_00414520(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_004145c0(&local_e0,2);
  FUN_00414560(&local_d0,2);
  FUN_004145c0(&local_c0,2);
  FUN_00414560(&local_b0,2);
  FUN_004145c0(&local_a0,2);
  FUN_00414560(&local_90,2);
  FUN_004145c0(&local_80,8);
  FUN_00414480(&local_10);
  return param_2;
}

