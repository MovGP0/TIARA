/* Ghidra address: 01bf71f0 */
/* Ghidra symbol: FUN_01bf71f0 */


longlong FUN_01bf71f0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = 0;
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0xe0);
  }
  iVar6 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_01bf9610(param_3,iVar5);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bf1690);
      if (cVar1 != '\0') {
        uVar2 = FUN_01bf9610(param_3,iVar5);
        lVar3 = FUN_01bfd980(uVar2);
        if (lVar3 == param_2) {
          lVar4 = FUN_01bf9610(param_3,iVar5);
          return lVar4;
        }
      }
      uVar2 = FUN_01bf9610(param_3,iVar5);
      cVar1 = FUN_01bfaa20(uVar2);
      if (cVar1 != '\0') {
        uVar2 = FUN_01bf9610(param_3,iVar5);
        uVar2 = FUN_01bfaa70(uVar2);
        lVar4 = FUN_01bf71f0(param_1,param_2,uVar2);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return lVar4;
}

