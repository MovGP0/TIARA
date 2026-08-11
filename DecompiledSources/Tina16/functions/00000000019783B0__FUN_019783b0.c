/* Ghidra address: 019783b0 */
/* Ghidra symbol: FUN_019783b0 */


void FUN_019783b0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 param_6,longlong param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_01950000(param_2,param_3,param_4,param_5,param_6,param_7);
  if (*(longlong *)(param_2 + 0x240) != 0) {
    FUN_00468700(&local_e0,param_2);
    local_c8 = local_e0;
    uStack_c0 = uStack_d8;
    uStack_b8 = uStack_d0;
    FUN_00468530(&local_f8,param_3,0xfffffffffffffffc);
    local_b0 = local_f8;
    uStack_a8 = uStack_f0;
    uStack_a0 = uStack_e8;
    FUN_00468530(&local_110,param_4,0xfffffffffffffffc);
    local_98 = local_110;
    uStack_90 = uStack_108;
    uStack_88 = uStack_100;
    FUN_00468530(&local_128,param_5,1);
    local_80 = local_128;
    uStack_78 = uStack_120;
    uStack_70 = uStack_118;
    uVar1 = FUN_0194e130(param_6);
    FUN_00468530(&local_140,uVar1,1);
    local_68 = local_140;
    uStack_60 = uStack_138;
    uStack_58 = uStack_130;
    FUN_00468820(&local_158,*(undefined1 *)(param_1 + 0x1e8));
    local_50 = local_158;
    uStack_48 = uStack_150;
    uStack_40 = uStack_148;
    FUN_0046c840(&local_30,&local_c8,5);
    FUN_01973040(param_1,*(undefined8 *)(param_2 + 0x240),&local_30,1);
    FUN_0046cb70(&local_170,&local_30,1,&LAB_01978658);
    iVar2 = FUN_004644a0(&local_170);
    *(bool *)(param_7 + 8) = iVar2 != 0;
  }
  FUN_00417840(&local_170,&DAT_004013d8,7);
  FUN_00460ba0(&local_30);
  return;
}

