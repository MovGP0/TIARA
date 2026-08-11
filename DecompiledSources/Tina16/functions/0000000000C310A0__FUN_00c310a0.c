/* Ghidra address: 00c310a0 */
/* Ghidra symbol: FUN_00c310a0 */


void FUN_00c310a0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar6 = FUN_00c360e0(*(undefined8 *)(param_1 + 8));
  if (0 < *(int *)(lVar6 + 0x10)) {
    uVar7 = FUN_00c360e0(*(undefined8 *)(param_1 + 8));
    uVar7 = FUN_00c30990(&DAT_00c30340,1,uVar7);
    bVar1 = false;
    iVar5 = FUN_00c1aa10();
    iVar9 = 0;
    bVar2 = false;
    if (-1 < iVar5 + -1) {
      do {
        bVar1 = bVar2;
        lVar6 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
        if (*(int *)(*(longlong *)(lVar6 + 0x40) + 0x10) == 0) {
          uVar8 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
          cVar3 = FUN_00c28880(uVar8);
          if (cVar3 == '\0') {
            bVar1 = true;
            uVar8 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
            cVar3 = FUN_00c30bd0(uVar7,uVar8);
            if ((cVar3 == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            *(undefined1 *)(param_1 + 0x2c) = uVar4;
          }
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + -1;
        bVar2 = bVar1;
      } while (iVar5 != 0);
    }
    if (bVar1) {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar7);
    }
    else {
      FUN_00410f20(uVar7);
    }
  }
  iVar5 = FUN_00c1aa10();
  iVar9 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar6 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
      if (0 < *(int *)(*(longlong *)(lVar6 + 0x40) + 0x10)) {
        uVar7 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
        cVar3 = FUN_00c28880(uVar7);
        if (cVar3 == '\0') {
          lVar6 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
          uVar7 = FUN_00c30990(&DAT_00c30340,1,*(undefined8 *)(lVar6 + 0x40));
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar7);
          uVar8 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),iVar9);
          cVar3 = FUN_00c30bd0(uVar7,uVar8);
          if ((cVar3 == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined1 *)(param_1 + 0x2c) = uVar4;
        }
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

