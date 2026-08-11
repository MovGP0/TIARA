/* Ghidra address: 01569940 */
/* Ghidra symbol: FUN_01569940 */


double FUN_01569940(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = 0.0;
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  dVar4 = 0.0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_2,iVar2);
      dVar4 = (double)FUN_01602290(*(undefined8 *)(lVar1 + 0x40),&DAT_015699b8,0);
      dVar5 = dVar5 + dVar4;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      dVar4 = dVar5;
    } while (iVar3 != 0);
  }
  return dVar4;
}

