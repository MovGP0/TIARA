/* Ghidra address: 00606ee0 */
/* Ghidra symbol: FUN_00606ee0 */


void FUN_00606ee0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_14 = thunk_FUN_03a0580b(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),0,0);
    if (local_14 != 0) {
      local_10 = FUN_004095c0((longlong)local_14);
      thunk_FUN_03a0580b(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),local_14,local_10);
      FUN_004b89e0(param_2,local_10,(longlong)local_14);
      FUN_004095f0(local_10,(longlong)local_14);
    }
  }
  return;
}

