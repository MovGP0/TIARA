/* Ghidra address: 00957a00 */
/* Ghidra symbol: FUN_00957a00 */


void FUN_00957a00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  longlong *local_28;
  undefined1 local_19;
  
  local_30 = auStack_68;
  uVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  uVar1 = FUN_004113f0(uVar1,&PTR_FUN_0090eed0);
  local_48 = 0;
  local_28 = (longlong *)FUN_0094fe80(&PTR_FUN_00909bd0,1,uVar1,param_3);
  (**(code **)(*local_28 + 0x1a0))(local_28,param_4);
  local_19 = (**(code **)(*param_2 + 0xa0))(param_2);
  (**(code **)(*param_2 + 0xe0))(param_2,0);
  (**(code **)(*param_2 + 0x338))(param_2,local_28);
  (**(code **)(*param_2 + 0xe0))(param_2,local_19);
  return;
}

