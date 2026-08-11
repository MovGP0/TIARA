/* Ghidra address: 01bfab90 */
/* Ghidra symbol: FUN_01bfab90 */


undefined8 FUN_01bfab90(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  lVar2 = FUN_01bfaa70();
  iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_01bfaa70(param_1);
      uVar3 = FUN_01bfb960(uVar3,iVar5);
      cVar1 = FUN_01bfea90(uVar3);
      if (cVar1 == '\0') {
        uVar3 = FUN_01bfaa70(param_1);
        lVar2 = FUN_01bfb960(uVar3,iVar5);
        if (*(char *)(lVar2 + 0x58) == '\0') goto LAB_01bfabfe;
        uVar4 = 1;
      }
      else {
LAB_01bfabfe:
        uVar3 = FUN_01bfaa70(param_1);
        uVar3 = FUN_01bfb960(uVar3,iVar5);
        cVar1 = FUN_01bfab90(uVar3);
        if (cVar1 != '\0') {
          uVar4 = 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar4;
}

