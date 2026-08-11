/* Ghidra address: 0113e930 */
/* Ghidra symbol: FUN_0113e930 */


void FUN_0113e930(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = 1 << (param_2 & 0x1f);
    iVar4 = iVar1 + -1;
    iVar2 = 1;
    if (0 < iVar4) {
      do {
        dVar7 = ((double)iVar2 * 6.283185307179586) / (double)iVar1;
        dVar5 = (double)FUN_0040bdd0(dVar7 / 2.0);
        dVar5 = dVar5 / (dVar7 / 2.0);
        dVar5 = dVar5 * dVar5;
        dVar6 = (double)FUN_0040bdd0(dVar7);
        dVar8 = (1.0 / dVar7) * (1.0 - dVar6 / dVar7);
        lVar3 = (longlong)iVar2;
        dVar6 = (double)FUN_0040bdd0(dVar7);
        *(double *)(param_3 + lVar3 * 0x10) =
             dVar5 * *(double *)(param_3 + lVar3 * 0x10) -
             dVar8 * *(double *)(param_1 + 0x10) * dVar6;
        dVar6 = (double)FUN_0040bcd0(dVar7);
        *(double *)(param_3 + 8 + lVar3 * 0x10) =
             dVar5 * *(double *)(param_3 + 8 + (longlong)iVar2 * 0x10) -
             dVar8 * (*(double *)(param_1 + 8) - *(double *)(param_1 + 0x10) * dVar6);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

