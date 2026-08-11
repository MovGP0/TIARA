/* Ghidra address: 01626f30 */
/* Ghidra symbol: FUN_01626f30 */


void FUN_01626f30(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_01618e70(&local_18,*(undefined8 *)(param_1 + 0x10),0);
  FUN_01618e70(&local_20,*(undefined8 *)(param_1 + 0x18),0);
  uVar1 = FUN_01615df0(local_18,param_2);
  *param_3 = uVar1;
  uVar1 = FUN_01615df0(local_20,param_2);
  *param_4 = uVar1;
  FUN_00414560(&local_20,3);
  return;
}

