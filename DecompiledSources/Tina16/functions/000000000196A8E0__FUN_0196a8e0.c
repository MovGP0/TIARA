/* Ghidra address: 0196a8e0 */
/* Ghidra symbol: FUN_0196a8e0 */


void FUN_0196a8e0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
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
  
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468700(&local_80,param_2);
  local_68 = local_80;
  uStack_60 = uStack_78;
  uStack_58 = uStack_70;
  FUN_00468820(&local_98,*param_3);
  local_50 = local_98;
  uStack_48 = uStack_90;
  uStack_40 = uStack_88;
  FUN_0046c840(&local_30,&local_68,1);
  uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_01973040(uVar2,param_1[0x3a],&local_30,1);
  FUN_0046cb70(&local_b0,&local_30,1,&LAB_0196aa58);
  iVar1 = FUN_004644a0(&local_b0);
  *param_3 = iVar1 != 0;
  FUN_00417840(&local_b0,&DAT_004013d8,3);
  FUN_00460ba0(&local_30);
  return;
}

