/* Ghidra address: 00b1f960 */
/* Ghidra symbol: FUN_00b1f960 */


undefined8 FUN_00b1f960(longlong param_1,undefined8 param_2,short param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  FUN_00414520(param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      psVar1 = (short *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      if (*psVar1 == param_3) {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_00414b90(param_2,*(undefined8 *)(lVar2 + 2));
        return param_2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_2;
}

