/* Ghidra address: 0147d130 */
/* Ghidra symbol: FUN_0147d130 */


void FUN_0147d130(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,param_1);
  (**(code **)(*local_20 + 0x38))(local_20,&local_38);
  uVar1 = FUN_00f30500(local_38,0,0);
  uVar1 = FUN_004113f0(uVar1,&LAB_00f23b78);
  *param_2 = uVar1;
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

