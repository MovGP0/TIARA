/* Ghidra address: 00ce7210 */
/* Ghidra symbol: FUN_00ce7210 */


undefined1 FUN_00ce7210(longlong param_1)

{
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x58) == '\0') {
    local_11 = FUN_00ce6c40(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x30),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
  }
  else {
    FUN_00ce6c20(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x30));
    local_11 = FUN_00879070(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
  }
  FUN_00414480(&local_10);
  return local_11;
}

