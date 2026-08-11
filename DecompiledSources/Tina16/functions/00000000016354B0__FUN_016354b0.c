/* Ghidra address: 016354b0 */
/* Ghidra symbol: FUN_016354b0 */


void FUN_016354b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01618e70(&local_10,*(undefined8 *)(param_2 + 0x10),0);
  FUN_01618e70(&local_18,*(undefined8 *)(param_2 + 0x18),0);
  uVar1 = FUN_01615df0(local_10,param_3);
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  uVar1 = FUN_01615df0(local_18,param_3);
  *(undefined8 *)(param_2 + 0x78) = uVar1;
  FUN_00414560(&local_18,2);
  return;
}

