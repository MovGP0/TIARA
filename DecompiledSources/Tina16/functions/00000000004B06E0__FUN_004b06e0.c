/* Ghidra address: 004b06e0 */
/* Ghidra symbol: FUN_004b06e0 */


void FUN_004b06e0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_18 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_20 = 0;
  local_28 = local_18 + 8;
  FUN_00597280(local_28,param_2,&local_20);
  FUN_0041b840(*(longlong *)(local_18 + 8) + (longlong)param_2 * 8,param_3);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return;
}

