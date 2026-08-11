/* Ghidra address: 01bd4b80 */
/* Ghidra symbol: FUN_01bd4b80 */


void FUN_01bd4b80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  uVar2 = (**(code **)(lVar1 + 0x78))(lVar1,1,0);
  local_20 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01bdd620);
  (**(code **)(*local_20 + 0x308))(local_20,param_1[100]);
  local_38 = (undefined4)param_1[0x12];
  local_34 = *(int *)((longlong)param_1 + 0x9c) + 1;
  local_30 = local_34;
  local_2c = local_38;
  local_28 = FUN_0064d1f0(param_1,&local_38);
  local_20[0xb6] = (longlong)param_1;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  FUN_01bd3b40(param_1,0);
  uVar2 = FUN_01c07120(param_1);
  uVar2 = FUN_01c03e40(uVar2);
  (**(code **)(*local_20 + 0x318))(local_20,uVar2);
  FUN_01be60b0(local_20,(int)local_28 - (int)param_1[0x12],local_28._4_4_);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  FUN_01bd3b40(param_1,1);
  FUN_00410f20(local_20);
  return;
}

