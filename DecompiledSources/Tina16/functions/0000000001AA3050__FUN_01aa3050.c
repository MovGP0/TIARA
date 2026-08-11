/* Ghidra address: 01aa3050 */
/* Ghidra symbol: FUN_01aa3050 */


void FUN_01aa3050(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (*(int *)(lVar1 + 8) == param_2) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_01aa2d30(&DAT_01aa26d0,1,param_2);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar2);
  return;
}

