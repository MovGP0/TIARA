/* Ghidra address: 00c34840 */
/* Ghidra symbol: FUN_00c34840 */


void FUN_00c34840(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_98;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_78 = 0;
  FUN_004238d0(local_40,0,0,0);
  FUN_0041ddd0(&local_48,PTR_PTR_02002b90);
  pcVar1 = (code *)FUN_00411550(param_1,0xfffd);
  local_78 = local_78 & 0xffffff00;
  local_70 = local_40;
  local_68 = local_48;
  (*pcVar1)(param_1,param_1,0,(undefined1)local_28);
  FUN_00c32d00(param_1);
  local_24 = FUN_004b6da0(param_2);
  (**(code **)(*(longlong *)param_1[0xb] + 0x30))((longlong *)param_1[0xb],param_2);
  (**(code **)(*(longlong *)param_1[10] + 0x30))((longlong *)param_1[10],param_2);
  local_20 = (longlong *)FUN_00c1a6d0(&LAB_00c14fa0,1,param_1);
  (**(code **)(*local_20 + 0x30))(local_20,param_2);
  FUN_00410f20(local_20);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  local_28 = 100;
  local_78 = 0;
  FUN_004238d0(local_40,0,0,0);
  FUN_0041ddd0(&local_50,PTR_PTR_02002b90);
  pcVar1 = (code *)FUN_00411550(param_1,0xfffd);
  local_78 = CONCAT31(local_78._1_3_,1);
  local_70 = local_40;
  local_68 = local_50;
  (*pcVar1)(param_1,param_1,2,(undefined1)local_28);
  FUN_00414560(&local_50,2);
  return;
}

