/* Ghidra address: 01190880 */
/* Ghidra symbol: FUN_01190880 */


undefined8 FUN_01190880(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x1fa0);
  iVar1 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = (longlong)iVar1;
      *(double *)(*param_1 + 0x50 + lVar2 * 8) =
           *(double *)(*param_1 + 0x50 + lVar2 * 8) * *(double *)(*param_1 + 0xff8 + lVar2 * 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

