/* Ghidra address: 016cf7c0 */
/* Ghidra symbol: FUN_016cf7c0 */


void FUN_016cf7c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  bVar4 = *(char *)(param_2 + 0x28) - 0x40;
  if (bVar4 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar4 & 0x1f) & 0xa0U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    uVar5 = 0;
  }
  else if (*(char *)(param_2 + 0x28) == 'B') {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_2 + 0x40) + 0x10);
    iVar6 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar2 = FUN_01d347d0(*(undefined8 *)(param_2 + 0x40),iVar6);
        FUN_016c5f10(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),uVar2,param_3,
                     param_4,param_5,*(undefined8 *)(param_2 + 0x58),uVar5);
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if ((((*(char *)(param_2 + 0x28) == 'X') && (*(longlong *)(param_2 + 0x50) != 0)) &&
      (0 < *(int *)(*(longlong *)(param_2 + 0x50) + 0x10))) &&
     ((*(longlong *)(param_2 + 0x20) != 0 &&
      (lVar3 = FUN_016c7b00(*(undefined8 *)(param_1 + 0x68),*(longlong *)(param_2 + 0x20)),
      lVar3 != 0)))) {
    FUN_016c52d0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar3 + 0x20),
                 *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(param_2 + 0x40));
    iVar8 = *(int *)(*(longlong *)(param_2 + 0x50) + 0x10);
    uVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar1 = *(longlong *)(param_2 + 0x50);
        if (*(uint *)(lVar1 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        FUN_016cf7c0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar7 * 8),
                     *(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(param_2 + 0x40),
                     *(undefined8 *)(lVar3 + 0x30));
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

