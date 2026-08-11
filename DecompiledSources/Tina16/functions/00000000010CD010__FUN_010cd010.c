/* Ghidra address: 010cd010 */
/* Ghidra symbol: FUN_010cd010 */


double FUN_010cd010(double param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  byte local_148 [296];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_148;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  iVar4 = 10;
  pbVar3 = &DAT_01f19ee0;
  do {
    iVar1 = FUN_00414f50(pbVar3,local_148,(ulonglong)*pbVar3 + 1);
    if (iVar1 == 0) {
      return param_1 * *(double *)(pbVar3 + 0x10);
    }
    pbVar3 = pbVar3 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_1;
}

