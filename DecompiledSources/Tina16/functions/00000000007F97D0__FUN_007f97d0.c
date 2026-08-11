/* Ghidra address: 007f97d0 */
/* Ghidra symbol: FUN_007f97d0 */


longlong FUN_007f97d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_00808090();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00808070(DAT_02012670,iVar4);
      if (((*(ushort *)(lVar3 + 0x34) & 0x200) == 0) &&
         (iVar2 = FUN_0043e420(param_1,*(undefined8 *)(lVar3 + 0x10)), iVar2 == 0)) {
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00808870();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00808850(DAT_02012670,iVar4);
      iVar2 = FUN_0043e420(param_1,*(undefined8 *)(lVar3 + 0x10));
      if (iVar2 == 0) {
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

