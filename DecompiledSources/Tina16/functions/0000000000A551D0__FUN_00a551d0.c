/* Ghidra address: 00a551d0 */
/* Ghidra symbol: FUN_00a551d0 */


undefined8 FUN_00a551d0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(ushort *)(param_1 + 0x120) < 0x20) {
    bVar2 = (1 << ((byte)*(ushort *)(param_1 + 0x120) & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x6c7) != '\0')) {
    uVar1 = FUN_00462650(param_1 + 0x120);
  }
  else {
    uVar1 = 0x1fffffff;
  }
  return uVar1;
}

