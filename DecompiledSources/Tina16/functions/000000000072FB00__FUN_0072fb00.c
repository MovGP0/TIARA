/* Ghidra address: 0072fb00 */
/* Ghidra symbol: FUN_0072fb00 */


void FUN_0072fb00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_70 = auStack_d8;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_50 = 0;
  local_60 = 0;
  local_20 = 0;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = FUN_00410e60(&DAT_0072f9d8,1);
  if (local_58 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_58 + 0x10;
  }
  FUN_0041b840(&local_60,lVar2);
  *(undefined8 *)(local_58 + 0x18) = param_2;
  *(undefined8 *)(local_58 + 0x20) = local_48;
  *(undefined8 *)(local_58 + 0x28) = uStack_40;
  FUN_00419260(&local_50,&DAT_004210c0,1,3);
  local_20 = 0;
  FUN_0041ddd0(&local_20,PTR_PTR_02002638);
  FUN_00417600(local_38,&DAT_00401390,3);
  FUN_0041ddd0(&local_90,PTR_PTR_02002148);
  local_88 = local_90;
  FUN_0041ddd0(&local_a0,PTR_PTR_02004020);
  FUN_00416ba0(&local_98,&DAT_0072fe0c,local_a0);
  local_80 = local_98;
  FUN_0041ddd0(&local_a8,PTR_PTR_02005c30);
  local_78 = local_a8;
  FUN_00418240(local_38,&local_88,&DAT_00401390,3);
  local_68 = local_50;
  if (local_50 != 0) {
    local_68 = *(longlong *)(local_50 + -8);
  }
  local_b8 = local_68 + -1;
  if (local_58 == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_58 + 0x30;
  }
  uVar1 = FUN_0072ebb0(local_20,local_38,2,local_50);
  *param_4 = uVar1;
  FUN_00414480(&local_20);
  FUN_00417840(local_38,&DAT_00401390,3);
  FUN_00414560(&local_a8,4);
  FUN_0041b800(&local_60);
  FUN_00419430(&local_50,&DAT_004210c0);
  return;
}

