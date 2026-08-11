/* Ghidra address: 019afd80 */
/* Ghidra symbol: FUN_019afd80 */


longlong FUN_019afd80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  lVar4 = 0;
  lVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  local_30 = param_1;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_00b94e60(local_30,iVar5);
      cVar1 = FUN_019afd30(auStack_58,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_00b94e60(local_30,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x3e0), lVar4 == 0)) {
    lVar4 = *(longlong *)(lVar3 + 1000);
  }
  return lVar4;
}

