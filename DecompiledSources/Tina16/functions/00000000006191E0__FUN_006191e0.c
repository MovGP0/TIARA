/* Ghidra address: 006191e0 */
/* Ghidra symbol: FUN_006191e0 */


void FUN_006191e0(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00618e50(param_1);
  local_18 = FUN_00618e20(param_1,&local_10);
  while (local_18 != 0) {
    thunk_FUN_039b8e11(*(undefined8 *)(local_18 + 0x10));
    local_18 = FUN_00618e20(param_1,&local_10);
  }
  FUN_006191b0(param_1,local_10);
  return;
}

