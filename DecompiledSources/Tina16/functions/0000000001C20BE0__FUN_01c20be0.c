/* Ghidra address: 01c20be0 */
/* Ghidra symbol: FUN_01c20be0 */


void FUN_01c20be0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x490),0);
  FUN_004168b0(local_20,param_3);
  FUN_006d85c0(uVar1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

