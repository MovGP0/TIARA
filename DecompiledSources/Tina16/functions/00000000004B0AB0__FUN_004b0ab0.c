/* Ghidra address: 004b0ab0 */
/* Ghidra symbol: FUN_004b0ab0 */


void FUN_004b0ab0(longlong param_1,int param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  if (param_2 < *(int *)(local_18 + 0x10)) {
    FUN_0059b610(local_18 + 8,param_2);
  }
  FUN_0059b400(local_18 + 8,(longlong)param_2);
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return;
}

