/* Ghidra address: 00a557b0 */
/* Ghidra symbol: FUN_00a557b0 */


void FUN_00a557b0(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(ushort *)(param_1 + 0x138) < 0x20) {
    bVar2 = (1 << ((byte)*(ushort *)(param_1 + 0x138) & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x6c8) != '\0')) {
    uVar1 = FUN_00462650(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
  }
  return;
}

