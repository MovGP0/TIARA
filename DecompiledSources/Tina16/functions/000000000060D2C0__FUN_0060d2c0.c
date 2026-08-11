/* Ghidra address: 0060d2c0 */
/* Ghidra symbol: FUN_0060d2c0 */


void FUN_0060d2c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_00410e60(&PTR_FUN_005f9f10,1);
  *(undefined8 *)(local_18 + 0x20) = param_2;
  *(undefined8 *)(local_18 + 0x10) = param_3;
  *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
  local_10 = local_18;
  FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
  *(longlong *)(param_1 + 0x48) = local_10;
  return;
}

