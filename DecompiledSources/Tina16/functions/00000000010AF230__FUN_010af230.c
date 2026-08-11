/* Ghidra address: 010af230 */
/* Ghidra symbol: FUN_010af230 */


undefined8 FUN_010af230(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar1,iVar4);
      if ((*(int *)(lVar3 + 0xc) == param_2) && (cVar2 = FUN_010ae5f0(lVar3), cVar2 != '\0')) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

