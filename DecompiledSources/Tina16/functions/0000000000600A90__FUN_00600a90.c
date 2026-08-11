/* Ghidra address: 00600a90 */
/* Ghidra symbol: FUN_00600a90 */


undefined1 FUN_00600a90(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_11 = 0;
  if (DAT_02011fa0 != 0) {
    local_10 = thunk_FUN_040ef593(0);
    local_18 = thunk_FUN_03e5bd07(local_10,0x68);
    if (0xf < local_18) {
      thunk_FUN_041a3f2d(DAT_02011fa0,0,8,param_1 + 4);
      thunk_FUN_041a3f2d(DAT_02011fa0,8,8,
                         param_1 + 4 + (longlong)(int)(*(ushort *)(param_1 + 2) - 8) * 4);
      local_11 = 1;
    }
    thunk_FUN_041a9b5c(0,local_10);
  }
  return local_11;
}

