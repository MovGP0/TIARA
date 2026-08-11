/* Ghidra address: 004b0600 */
/* Ghidra symbol: FUN_004b0600 */


int FUN_004b0600(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_3c;
  longlong local_38;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  int local_14;
  longlong local_10;
  
  local_50 = auStack_78;
  local_20 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_28 = 0;
  local_38 = local_20 + 8;
  local_3c = FUN_00595d40(local_38,&local_28);
  local_2c = local_3c;
  local_14 = local_3c;
  FUN_0041b840(*(longlong *)(local_20 + 8) + (longlong)local_3c * 8,param_2);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_14;
}

