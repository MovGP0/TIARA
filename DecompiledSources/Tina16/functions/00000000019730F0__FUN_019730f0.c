/* Ghidra address: 019730f0 */
/* Ghidra symbol: FUN_019730f0 */


void FUN_019730f0(longlong param_1,longlong param_2,undefined1 param_3,undefined2 param_4,
                 undefined1 *param_5,undefined8 param_6,char param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0194fbb0(param_2,param_7,param_6);
  FUN_00468700(&local_c0,param_2);
  local_a8 = local_c0;
  uStack_a0 = uStack_b8;
  uStack_98 = uStack_b0;
  FUN_00468530(&local_d8,param_3,1);
  local_90 = local_d8;
  uStack_88 = uStack_d0;
  uStack_80 = uStack_c8;
  uVar1 = FUN_0194e130(param_4);
  FUN_00468530(&local_f0,uVar1,1);
  local_78 = local_f0;
  uStack_70 = uStack_e8;
  uStack_68 = uStack_e0;
  FUN_00468820(&local_108,*param_5);
  local_60 = local_108;
  uStack_58 = uStack_100;
  uStack_50 = uStack_f8;
  FUN_0046c840(&local_40,&local_a8,3);
  if (param_7 == '\0') {
    FUN_01973040(param_1,*(undefined8 *)(param_2 + 0x170),&local_40,1);
  }
  else {
    FUN_01973040(param_1,*(undefined8 *)(param_2 + 0x178),&local_40,1);
  }
  FUN_0046cb70(&local_120,&local_40,1,&LAB_019733a8);
  iVar2 = FUN_004644a0(&local_120);
  *param_5 = iVar2 != 0;
  if (param_7 == '\0') {
    if (*(longlong *)(param_1 + 0x328) != 0) {
      (**(code **)(param_1 + 0x328))
                (*(undefined8 *)(param_1 + 0x330),param_2,param_3,param_4,param_5);
    }
  }
  else if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(param_1 + 0x338))(*(undefined8 *)(param_1 + 0x340),param_2,param_3,param_4,param_5)
    ;
  }
  FUN_00417840(&local_120,&DAT_004013d8,5);
  FUN_00460ba0(&local_40);
  return;
}

