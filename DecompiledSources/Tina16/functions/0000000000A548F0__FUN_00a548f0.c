/* Ghidra address: 00a548f0 */
/* Ghidra symbol: FUN_00a548f0 */


undefined1 FUN_00a548f0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ushort *local_20;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_41 = 2;
  local_20 = (ushort *)(param_1 + 0x4c8);
  if (*local_20 < 0x20) {
    bVar2 = (1 << ((byte)*local_20 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_00468530(&local_40,1,1);
    cVar1 = FUN_0046f320(param_1 + 0x4c8,&local_40);
    if (cVar1 != '\0') {
      local_41 = 1;
    }
  }
  FUN_00460ba0(&local_40);
  return local_41;
}

