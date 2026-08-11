/* Ghidra address: 00408860 */
/* Ghidra symbol: FUN_00408860 */


undefined8 FUN_00408860(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((DAT_0200ac68 != (int *)0x0) && (cVar1 = FUN_00408770(), cVar1 != '\0')) {
    iVar3 = *DAT_0200ac68;
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*(longlong *)(DAT_0200ac68 + (longlong)iVar2 * 2 + 2) == param_1) {
          *(undefined8 *)(DAT_0200ac68 + (longlong)iVar2 * 2 + 2) =
               *(undefined8 *)(DAT_0200ac68 + (longlong)(*DAT_0200ac68 + -1) * 2 + 2);
          *DAT_0200ac68 = *DAT_0200ac68 + -1;
          uVar4 = 1;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    DAT_0200ac70 = 0;
  }
  return uVar4;
}

