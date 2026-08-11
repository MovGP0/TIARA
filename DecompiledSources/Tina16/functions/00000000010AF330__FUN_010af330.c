/* Ghidra address: 010af330 */
/* Ghidra symbol: FUN_010af330 */


void FUN_010af330(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(lVar1,iVar3);
      if (*(int *)(lVar2 + 8) == param_2) {
        if (param_3 == 1) {
          FUN_010ae9a0(lVar2,1,1);
        }
        else {
          FUN_010ae9a0(lVar2,0,1);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

