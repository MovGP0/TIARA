/* Ghidra address: 004b07a0 */
/* Ghidra symbol: FUN_004b07a0 */


undefined8 FUN_004b07a0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  FUN_004b0260(param_1,param_2,*(int *)(local_18 + 0x10) + -1);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return param_2;
}

