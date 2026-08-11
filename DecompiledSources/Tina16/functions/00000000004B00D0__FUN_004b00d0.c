/* Ghidra address: 004b00d0 */
/* Ghidra symbol: FUN_004b00d0 */


void FUN_004b00d0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  FUN_004b0840(param_1,param_2,0);
  FUN_005999b0(local_18 + 8,param_2,5);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return;
}

