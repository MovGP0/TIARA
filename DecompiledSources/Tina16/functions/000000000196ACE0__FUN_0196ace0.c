/* Ghidra address: 0196ace0 */
/* Ghidra symbol: FUN_0196ace0 */


void FUN_0196ace0(longlong *param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  
  local_c8 = (undefined2 *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468700(&local_80,param_2);
  local_68 = local_80;
  uStack_60 = uStack_78;
  uStack_58 = uStack_70;
  FUN_00416780(&local_88,*param_3);
  FUN_00468a10(&local_a0,local_88);
  local_50 = local_a0;
  uStack_48 = uStack_98;
  uStack_40 = uStack_90;
  FUN_0046c840(&local_30,&local_68,1);
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973040(uVar2,param_1[0x36],&local_30,1);
  }
  FUN_0046cb70(&local_c0,&local_30,1,&LAB_0196af44);
  FUN_0046c3f0(&local_a8,&local_c0);
  if (local_a8 == 0) {
    *param_3 = 0;
  }
  else {
    FUN_0046cb70(&local_e0,&local_30,1,&LAB_0196af44);
    FUN_0046c3f0(&local_c8,&local_e0);
    *param_3 = *local_c8;
  }
  FUN_00460ba0(&local_e0);
  FUN_00414480(&local_c8);
  FUN_00460ba0(&local_c0);
  FUN_00414480(&local_a8);
  FUN_00460ba0(&local_a0);
  FUN_00414480(&local_88);
  FUN_00460ba0(&local_80);
  FUN_00460ba0(&local_30);
  return;
}

