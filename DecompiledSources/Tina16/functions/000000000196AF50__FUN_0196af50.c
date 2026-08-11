/* Ghidra address: 0196af50 */
/* Ghidra symbol: FUN_0196af50 */


void FUN_0196af50(longlong *param_1,undefined8 param_2,undefined2 *param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468700(&local_98,param_2);
  local_80 = local_98;
  uStack_78 = uStack_90;
  uStack_70 = uStack_88;
  FUN_00468530(&local_b0,*param_3,2);
  local_68 = local_b0;
  uStack_60 = uStack_a8;
  uStack_58 = uStack_a0;
  uVar1 = FUN_0194e130(param_4);
  FUN_00468530(&local_c8,uVar1,1);
  local_50 = local_c8;
  uStack_48 = uStack_c0;
  uStack_40 = uStack_b8;
  FUN_0046c840(&local_30,&local_80,2);
  lVar3 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973040(uVar4,param_1[0x37],&local_30,1);
  }
  FUN_0046cb70(&local_e0,&local_30,1,&LAB_0196b128);
  uVar2 = FUN_00462650(&local_e0);
  *param_3 = uVar2;
  FUN_00417840(&local_e0,&DAT_004013d8,4);
  FUN_00460ba0(&local_30);
  return;
}

