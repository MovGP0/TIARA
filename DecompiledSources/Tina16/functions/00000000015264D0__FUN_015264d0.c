/* Ghidra address: 015264d0 */
/* Ghidra symbol: FUN_015264d0 */


longlong FUN_015264d0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  local_30 = 0;
  lVar4 = 0;
  lVar2 = FUN_019a4600();
  iVar6 = *(int *)(lVar2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar2,iVar5);
      cVar1 = FUN_01526480(auStack_58,uVar3);
      if (cVar1 != '\0') {
        lVar4 = FUN_00b94e60(lVar2,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((lVar4 != 0) && (local_30 = *(longlong *)(lVar4 + 0x3e0), local_30 == 0)) {
    local_30 = *(longlong *)(lVar4 + 1000);
  }
  return local_30;
}

