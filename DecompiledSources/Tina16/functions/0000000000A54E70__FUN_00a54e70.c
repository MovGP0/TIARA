/* Ghidra address: 00a54e70 */
/* Ghidra symbol: FUN_00a54e70 */


undefined1 FUN_00a54e70(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ushort *local_18;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_18 = (ushort *)(param_1 + 0x600);
  if (*local_18 < 0x20) {
    bVar1 = (1 << ((byte)*local_18 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_9 = FUN_00462650(param_1 + 0x600);
  }
  else {
    local_9 = 0;
  }
  return local_9;
}

