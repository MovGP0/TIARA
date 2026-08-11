/* Ghidra address: 00589810 */
/* Ghidra symbol: FUN_00589810 */


byte FUN_00589810(ulonglong param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0xb5;
  iVar2 = 0;
  do {
    bVar1 = bVar1 ^ (byte)(param_1 >> ((byte)iVar2 & 0x3f));
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  return bVar1;
}

