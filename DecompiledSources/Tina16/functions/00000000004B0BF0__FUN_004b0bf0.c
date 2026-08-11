/* Ghidra address: 004b0bf0 */
/* Ghidra symbol: FUN_004b0bf0 */


void FUN_004b0bf0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_18 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_20 = local_18 + 8;
  FUN_00595e20(local_20,param_2,param_3);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return;
}

