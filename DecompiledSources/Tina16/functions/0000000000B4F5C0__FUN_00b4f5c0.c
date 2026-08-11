/* Ghidra address: 00b4f5c0 */
/* Ghidra symbol: FUN_00b4f5c0 */


undefined1 FUN_00b4f5c0(longlong param_1)

{
  undefined1 local_19;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  FUN_00b15900(&local_10,*(undefined8 *)(param_1 + 0x40),&LAB_00b4f644);
  if (local_10 == (undefined1 *)0x0) {
    local_19 = 0;
  }
  else {
    local_19 = *local_10;
  }
  FUN_004144d0(&local_10);
  return local_19;
}

