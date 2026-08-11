/* Ghidra address: 017cc990 */
/* Ghidra symbol: FUN_017cc990 */


void FUN_017cc990(int param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  
  bVar2 = false;
  for (iVar5 = 0; (!bVar2 && (iVar5 < *(int *)(param_2 + 0x10))); iVar5 = iVar5 + 1) {
    piVar3 = (int *)FUN_004aeac0(param_2,iVar5);
    iVar1 = *piVar3;
    lVar4 = FUN_004aeac0(param_2,iVar5);
    bVar2 = param_1 <= *(int *)(lVar4 + 4) && iVar1 <= param_1;
  }
  return;
}

