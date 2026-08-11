/* Ghidra address: 00b1c6d0 */
/* Ghidra symbol: FUN_00b1c6d0 */


int FUN_00b1c6d0(ushort param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = &DAT_01e82f94;
  do {
    if (*pbVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 1;
  } while (iVar1 != 0x24);
  return -1;
}

