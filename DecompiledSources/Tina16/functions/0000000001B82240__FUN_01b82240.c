/* Ghidra address: 01b82240 */
/* Ghidra symbol: FUN_01b82240 */


void FUN_01b82240(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = *param_3;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x78))(local_20,local_res10[0]);
  local_30 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
  FUN_0149ec30(local_30,local_20);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(local_30[5] + 0x90) + 0x80),0x8000);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(local_30[5] + 0x90) + 0x80),0xc);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),local_30);
  uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*local_30 + 0xe8))(local_30,uVar1,local_28 & 0xffffffff,local_28._4_4_);
  FUN_00410f20(local_20);
  FUN_00414480(local_res10);
  return;
}

