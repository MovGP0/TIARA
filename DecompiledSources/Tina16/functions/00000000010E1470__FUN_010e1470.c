/* Ghidra address: 010e1470 */
/* Ghidra symbol: FUN_010e1470 */


byte FUN_010e1470(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = 1;
  iVar2 = 1;
  do {
    iVar3 = 0;
    do {
      bVar1 = bVar1 & *(longlong *)(param_1 + -0x38 + (longlong)iVar2 * 0x40 + (longlong)iVar3 * 8)
                      == 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x11);
  return bVar1;
}

