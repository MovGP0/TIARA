/* Ghidra address: 013a4a80 */
/* Ghidra symbol: FUN_013a4a80 */


bool FUN_013a4a80(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    bVar2 = (int)*(short *)(param_2 + 0x24) == (uint)*(ushort *)(param_1 + 0x58);
  }
  return bVar2;
}

