/* Ghidra address: 005bc0c0 */
/* Ghidra symbol: FUN_005bc0c0 */


void FUN_005bc0c0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_20 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_9e = param_2;
  local_9c = param_3;
  local_9a = param_4;
  FUN_00448e20(param_8,&local_a,&local_c,&local_e);
  local_108 = &local_16;
  FUN_00448ad0(param_8,&local_10,&local_12,&local_14);
  FUN_0041ddd0(&local_20,PTR_PTR_02001648);
  FUN_005bc050(auStack_128,&local_40,local_a,local_a0);
  FUN_00416780(&local_48,*(undefined2 *)(PTR_DAT_02004830 + 10));
  FUN_005bc050(auStack_128,&local_50,local_c,local_9e);
  FUN_00416780(&local_58,*(undefined2 *)(PTR_DAT_02004830 + 10));
  FUN_005bc050(auStack_128,&local_60,local_e,local_9c);
  FUN_005bc050(auStack_128,&local_68,local_10,local_9a);
  FUN_00416780(&local_70,*(undefined2 *)(PTR_DAT_02004830 + 0xc));
  FUN_005bc050(auStack_128,&local_78,local_12,param_5);
  FUN_00416780(&local_80,*(undefined2 *)(PTR_DAT_02004830 + 0xc));
  FUN_005bc050(auStack_128,&local_88,local_14,param_6);
  FUN_00416780(&local_90,*(undefined2 *)(PTR_DAT_02004830 + 0x17a));
  FUN_005bc050(auStack_128,&local_98,local_16,param_7);
  local_108 = (undefined2 *)local_50;
  local_100 = local_58;
  local_f8 = local_60;
  local_f0 = &DAT_005bc49c;
  local_e8 = local_68;
  local_e0 = local_70;
  local_d8 = local_78;
  local_d0 = local_80;
  local_c8 = local_88;
  local_c0 = local_90;
  local_b8 = local_98;
  FUN_00416cd0(&local_38,0xd,local_40,local_48);
  local_30 = local_38;
  local_28 = 0x11;
  local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffff00000000);
  uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_20,&local_30);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_98,0xd);
  FUN_00414480(&local_20);
  return;
}

