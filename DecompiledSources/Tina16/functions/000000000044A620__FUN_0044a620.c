/* Ghidra address: 0044a620 */
/* Ghidra symbol: FUN_0044a620 */


undefined8 FUN_0044a620(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = 1;
  while( true ) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    if (iVar3 < iVar1) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar1 * 2) & 0xdf;
    if (uVar2 == 0x44) {
      return 1;
    }
    if (uVar2 == 0x45) break;
    if (uVar2 == 0x4d) {
      return 0;
    }
    if (uVar2 == 0x59) {
      return 2;
    }
    iVar1 = iVar1 + 1;
  }
  return 2;
}

