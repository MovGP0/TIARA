/* Ghidra address: 01aa2f70 */
/* Ghidra symbol: FUN_01aa2f70 */


void FUN_01aa2f70(longlong param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  iVar5 = -1;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      if (*(int *)(lVar2 + 8) == param_2) {
        bVar1 = true;
        iVar5 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
      iVar5 = -1;
    } while (iVar6 != 0);
  }
  if (bVar1) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar5);
  }
  else {
    lVar2 = FUN_01aa2d30(&DAT_01aa26d0,1,param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar2);
  }
  uVar3 = FUN_01aa2b60(&DAT_01aa2388,1,param_3);
  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8),uVar3);
  return;
}

