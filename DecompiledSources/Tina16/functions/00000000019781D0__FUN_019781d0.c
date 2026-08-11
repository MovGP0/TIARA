/* Ghidra address: 019781d0 */
/* Ghidra symbol: FUN_019781d0 */


void FUN_019781d0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
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
  
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0194fe10(param_2,param_3,param_4,param_5,param_6);
  if (param_1[0x95] != 0) {
    (*(code *)param_1[0x95])(param_1[0x96],param_2);
  }
  if (*(longlong *)(param_2 + 0x228) != 0) {
    FUN_00468700(&local_90,param_2);
    local_78 = local_90;
    uStack_70 = uStack_88;
    uStack_68 = uStack_80;
    FUN_00468820(&local_a8,*(undefined1 *)(param_6 + 8));
    local_60 = local_a8;
    uStack_58 = uStack_a0;
    uStack_50 = uStack_98;
    FUN_0046c840(&local_40,&local_78,1);
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973040(uVar2,*(undefined8 *)(param_2 + 0x228),&local_40,1);
    FUN_0046cb70(&local_c0,&local_40,1,&LAB_019783a8);
    iVar1 = FUN_004644a0(&local_c0);
    *(bool *)(param_6 + 8) = iVar1 != 0;
  }
  FUN_00417840(&local_c0,&DAT_004013d8,3);
  FUN_00460ba0(&local_40);
  return;
}

