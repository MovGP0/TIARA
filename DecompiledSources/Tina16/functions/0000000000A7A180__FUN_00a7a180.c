/* Ghidra address: 00a7a180 */
/* Ghidra symbol: FUN_00a7a180 */


longlong FUN_00a7a180(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_24 = thunk_FUN_0420b4c4(param_1);
    local_10 = thunk_FUN_0412a7bb(0x42,(longlong)local_24);
    if (local_10 != 0) {
      local_18 = thunk_FUN_0416a623(param_1);
      local_20 = thunk_FUN_0416a623(local_10);
      if ((local_18 != 0) && (local_20 != 0)) {
        FUN_00409a70(local_18,local_20,(longlong)local_24);
      }
      thunk_FUN_04172795(param_1);
      thunk_FUN_04172795(local_10);
    }
  }
  return local_10;
}

