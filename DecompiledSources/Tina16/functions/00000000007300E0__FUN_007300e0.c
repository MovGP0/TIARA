/* Ghidra address: 007300e0 */
/* Ghidra symbol: FUN_007300e0 */


void FUN_007300e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_70 = auStack_c8;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_48 = 0;
  local_58 = 0;
  local_20 = 0;
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_50 = FUN_00410e60(&DAT_0072ffc0,1);
  if (local_50 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_50 + 0x10;
  }
  FUN_0041b840(&local_58,lVar2);
  *(undefined8 *)(local_50 + 0x18) = param_2;
  *(undefined8 *)(local_50 + 0x20) = local_40;
  *(undefined8 *)(local_50 + 0x28) = uStack_38;
  FUN_00419260(&local_48,&DAT_004210c0,1,2);
  local_20 = 0;
  FUN_0041ddd0(&local_20,PTR_PTR_02002638);
  FUN_00417600(local_30,&DAT_00401390,2);
  FUN_0041ddd0(&local_88,PTR_PTR_02002148);
  local_80 = local_88;
  FUN_0041ddd0(&local_98,PTR_PTR_02004020);
  FUN_00416ba0(&local_90,&DAT_007303ac,local_98);
  local_78 = local_90;
  FUN_00418240(local_30,&local_80,&DAT_00401390,2);
  local_60 = local_48;
  if (local_48 != 0) {
    local_60 = *(longlong *)(local_48 + -8);
  }
  local_a8 = local_60 + -1;
  if (local_50 == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_50 + 0x30;
  }
  uVar1 = FUN_0072ebb0(local_20,local_30,1,local_48);
  *param_4 = uVar1;
  FUN_00414480(&local_20);
  FUN_00417840(local_30,&DAT_00401390,2);
  FUN_00414560(&local_98,3);
  FUN_0041b800(&local_58);
  FUN_00419430(&local_48,&DAT_004210c0);
  return;
}

