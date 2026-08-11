/* Ghidra address: 01cb0050 */
/* Ghidra symbol: FUN_01cb0050 */


bool FUN_01cb0050(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  iVar2 = 1;
  do {
    if (*(char *)(param_1 + 0x1f + (longlong)iVar2) != '\0') {
      bVar1 = bVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return 1 < bVar1;
}

