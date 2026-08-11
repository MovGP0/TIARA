/* Ghidra address: 004bf7b0 */
/* Ghidra symbol: FUN_004bf7b0 */


void FUN_004bf7b0(longlong param_1,ushort param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == '\0') {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x158) + -8);
    }
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar2 * 8);
        *(ushort *)(lVar1 + 0x34) = *(ushort *)(lVar1 + 0x34) & ~param_2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x158) + -8);
    }
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar2 * 8);
        *(ushort *)(lVar1 + 0x34) = *(ushort *)(lVar1 + 0x34) | param_2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

