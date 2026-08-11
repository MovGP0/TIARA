/* Ghidra address: 00a549c0 */
/* Ghidra symbol: FUN_00a549c0 */


undefined4 FUN_00a549c0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 local_24;
  undefined8 local_20 [2];
  ushort *local_10;
  
  local_20[0] = 0;
  local_24 = 0;
  local_10 = (ushort *)(param_1 + 0x528);
  if (*local_10 < 0x20) {
    bVar2 = (1 << ((byte)*local_10 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_24 = FUN_00462650(param_1 + 0x528);
  }
  else {
    cVar1 = FUN_0046c390(param_1 + 0x528);
    if (cVar1 != '\0') {
      FUN_00467e90(local_20,param_1 + 0x528);
      local_24 = FUN_0043fc50(local_20[0],0);
    }
  }
  FUN_00414480(local_20);
  return local_24;
}

