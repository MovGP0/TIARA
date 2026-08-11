/* Ghidra address: 01bfea90 */
/* Ghidra symbol: FUN_01bfea90 */


ulonglong FUN_01bfea90(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)*(byte *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar4 = FUN_01bfd960(param_1);
    if (*(char *)(lVar4 + 0x4a) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar5 = FUN_01bfd960(param_1);
      plVar6 = (longlong *)FUN_01bf9620(uVar5);
      if (*(char *)(param_1 + 0x94) == '\0') {
        cVar1 = (**(code **)(*plVar6 + 0xa0))(plVar6,param_1);
        uVar8 = (ulonglong)(cVar1 == '\0');
        if ((cVar1 == '\0') &&
           (lVar4 = FUN_01bfaa70(param_1), 0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10))) {
          cVar1 = FUN_01bfab90(param_1);
          uVar8 = (ulonglong)(cVar1 == '\0');
        }
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
      else {
        iVar2 = FUN_004b1870();
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) {
          do {
            iVar3 = FUN_004b1870();
            if (0 < iVar3) {
              uVar5 = FUN_01bfd960(param_1);
              iVar3 = FUN_004b1870(param_1);
              lVar4 = FUN_01bfb960(uVar5,iVar3 + -1);
              if (*(char *)(lVar4 + 0x94) != '\0') break;
              uVar5 = FUN_01bfd960(param_1);
              iVar3 = FUN_004b1870(param_1);
              uVar7 = FUN_01bfb960(uVar5,iVar3 + -1);
              cVar1 = (**(code **)(*plVar6 + 0xa0))(plVar6,uVar7);
              uVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),cVar1 == '\0');
              if (cVar1 == '\0') break;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        if (((char)uVar8 != '\0') &&
           (iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10),
           -1 < iVar2 + -1)) {
          do {
            iVar3 = FUN_004b1870(param_1);
            if (iVar3 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10) + -1) {
              uVar5 = FUN_01bfd960(param_1);
              iVar3 = FUN_004b1870(param_1);
              lVar4 = FUN_01bfb960(uVar5,iVar3 + 1);
              if (*(char *)(lVar4 + 0x94) != '\0') break;
              uVar5 = FUN_01bfd960(param_1);
              iVar3 = FUN_004b1870(param_1);
              uVar7 = FUN_01bfb960(uVar5,iVar3 + 1);
              cVar1 = (**(code **)(*plVar6 + 0xa0))(plVar6,uVar7);
              uVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),cVar1 == '\0');
              if (cVar1 == '\0') break;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      *(char *)(param_1 + 0xa8) = (char)uVar8;
    }
  }
  return uVar8 & 0xffffffff;
}

