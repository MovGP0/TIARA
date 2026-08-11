/* Ghidra address: 004557c0 */
/* Ghidra symbol: FUN_004557c0 */


longlong FUN_004557c0(longlong param_1,short param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  lVar2 = FUN_00414de0(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  for (psVar3 = (short *)FUN_00414de0(param_1 + 8);
      psVar3 <= (short *)(lVar2 + (longlong)(iVar1 + -1) * 2); psVar3 = psVar3 + 1) {
    if (*psVar3 == param_2) {
      *psVar3 = param_3;
    }
  }
  return param_1;
}

