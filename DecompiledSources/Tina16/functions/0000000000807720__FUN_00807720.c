/* Ghidra address: 00807720 */
/* Ghidra symbol: FUN_00807720 */


void FUN_00807720(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_0065a1e0(param_1);
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    iVar1 = FUN_00659110();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_00659130(param_1,iVar3);
        FUN_0064dbe0(uVar2,*(undefined1 *)(param_1 + 0xa9));
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

