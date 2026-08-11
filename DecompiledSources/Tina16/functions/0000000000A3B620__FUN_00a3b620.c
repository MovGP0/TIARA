/* Ghidra address: 00a3b620 */
/* Ghidra symbol: FUN_00a3b620 */


void FUN_00a3b620(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_20 + 0xd0))(local_20,param_2,param_3,param_4);
  uVar1 = (**(code **)(*local_20 + 0xe8))(local_20);
  FUN_00a3be70(param_1,uVar1,0,0);
  FUN_00410f20(local_20);
  return;
}

