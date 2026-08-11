/* Ghidra address: 00b42ba0 */
/* Ghidra symbol: FUN_00b42ba0 */


void FUN_00b42ba0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  iVar5 = FUN_00b41f80(param_1);
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    do {
      lVar2 = FUN_00b41f60(param_1,iVar5);
      bVar8 = *(int *)(lVar2 + 0x2c) == -1;
      uVar3 = FUN_00b41f60(param_1,iVar5);
      cVar4 = FUN_004113d0(uVar3,&DAT_00b40220);
      if (cVar4 == '\0') {
        uVar3 = FUN_00b41f60(param_1,iVar5);
        cVar4 = FUN_004113d0(uVar3,&DAT_00b403a0);
        if (cVar4 == '\0') {
          bVar8 = true;
        }
      }
      uVar3 = FUN_00b41f60(param_1,iVar5);
      cVar4 = FUN_004113d0(uVar3,&DAT_00b40220);
      if (cVar4 != '\0') {
        lVar2 = FUN_00b41f60(param_1,iVar5);
        iVar1 = *(int *)(lVar2 + 0x38);
        if ((iVar1 < 1) || (iVar6 = FUN_00b41f50(param_1), iVar6 < iVar1)) {
          bVar8 = true;
        }
        else {
          lVar2 = FUN_00b41f30(param_1,iVar1 + -1);
          if (*(char *)(lVar2 + 0x2c) != '\0') {
            bVar8 = true;
          }
        }
      }
      if (bVar8) {
        plVar7 = (longlong *)FUN_00b41f60(param_1,iVar5);
        (**(code **)(*plVar7 + -0x20))(plVar7,1);
        FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar5);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  return;
}

