/* Ghidra address: 004d2c10 */
/* Ghidra symbol: FUN_004d2c10 */


void FUN_004d2c10(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 8;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x20);
          if (*(uint *)(lVar1 + 0x10) <= uVar2) {
            FUN_00594f90();
          }
          FUN_004d2c10(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

