/* Ghidra address: 01cd6800 */
/* Ghidra symbol: FUN_01cd6800 */


void FUN_01cd6800(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar4 = FUN_01cd6670(param_1);
  if ((byte)uVar4 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x26U) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((bVar9) && (lVar5 = *(longlong *)(param_1 + 0xf8), 0 < *(int *)(lVar5 + 0x10))) {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      lVar5 = FUN_004113d0(uVar4,&PTR_FUN_01ab0e08);
      if ((char)lVar5 != '\0') {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
        iVar7 = 0;
        if (iVar8 + -1 < 0) {
          return;
        }
        do {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01ab0e08);
          if (cVar1 != '\0') {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            uVar2 = FUN_01abc100(*(undefined8 *)(lVar5 + 0x80));
            FUN_01ab9bb0(uVar4,uVar2);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return;
      }
    }
    if (*(byte *)(param_1 + 0x70) < 8) {
      uVar3 = (int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (*(byte *)(param_1 + 0x70) & 0x1f);
      uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 5) != 0);
    }
    else {
      uVar6 = 0;
    }
    if ((char)uVar6 != '\0') {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      uVar6 = FUN_004113d0(uVar4,&PTR_FUN_01ab0e08);
      if ((char)uVar6 != '\0') {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
        iVar7 = 0;
        if (iVar8 + -1 < 0) {
          return;
        }
        do {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01ab0e08);
          if (cVar1 != '\0') {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            uVar2 = FUN_01abc280(*(undefined8 *)(lVar5 + 0x80));
            FUN_01ab9bb0(uVar4,uVar2);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return;
      }
    }
    if (*(char *)(param_1 + 0x70) == '\x01') {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      uVar6 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
      if ((char)uVar6 != '\0') {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
        iVar7 = 0;
        if (iVar8 + -1 < 0) {
          return;
        }
        do {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
          if (cVar1 != '\0') {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            uVar2 = FUN_01abc100(*(undefined8 *)(lVar5 + 200));
            FUN_01ab51d0(uVar4,uVar2);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return;
      }
    }
    if (*(byte *)(param_1 + 0x70) < 8) {
      bVar9 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_1 + 0x70) & 0x1f) & 5U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),0);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
      if (cVar1 != '\0') {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          do {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
            cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
            if (cVar1 != '\0') {
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
              lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar7);
              uVar2 = FUN_01abc280(*(undefined8 *)(lVar5 + 200));
              FUN_01ab51d0(uVar4,uVar2);
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
  }
  return;
}

