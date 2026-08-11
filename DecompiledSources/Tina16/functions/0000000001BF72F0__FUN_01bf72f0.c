/* Ghidra address: 01bf72f0 */
/* Ghidra symbol: FUN_01bf72f0 */


longlong FUN_01bf72f0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = 0;
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0xe0);
  }
  iVar6 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_01bf9610(param_3,iVar5);
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        lVar3 = FUN_01bf9610(param_3,iVar5);
        return lVar3;
      }
      uVar4 = FUN_01bf9610(param_3,iVar5);
      cVar1 = FUN_01bfaa20(uVar4);
      if (cVar1 != '\0') {
        uVar4 = FUN_01bf9610(param_3,iVar5);
        uVar4 = FUN_01bfaa70(uVar4);
        lVar3 = FUN_01bf72f0(param_1,param_2,uVar4);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return lVar3;
}

