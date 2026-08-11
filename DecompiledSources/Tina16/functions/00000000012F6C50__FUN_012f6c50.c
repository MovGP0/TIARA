/* Ghidra address: 012f6c50 */
/* Ghidra symbol: FUN_012f6c50 */


void FUN_012f6c50(longlong param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char unaff_SIL;
  
  if (*param_3 == 0x2e) {
    lVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    uVar1 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
    if (1 < uVar1) {
      uVar7 = FUN_006e5360(*(undefined8 *)(param_1 + 0x700),0);
      uVar8 = *(undefined8 *)(param_1 + 0x700);
      iVar2 = FUN_006e5350(uVar8);
      uVar8 = FUN_006e5360(uVar8,iVar2 + -1);
      iVar2 = FUN_006dd740(uVar7);
      iVar3 = FUN_006dd740(uVar8);
      if (iVar2 < iVar3) {
        unaff_SIL = '\x01';
      }
      else {
        unaff_SIL = '\0';
      }
    }
    iVar2 = FUN_006e5350();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        iVar4 = iVar3;
        if (unaff_SIL != '\0') {
          iVar4 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
          iVar4 = (iVar4 - iVar3) + -1;
        }
        lVar9 = FUN_006e5360(*(undefined8 *)(param_1 + 0x700),iVar4);
        if ((*(uint *)(*(longlong *)(lVar9 + 0x18) + 4) & 0x20) == 0x20) {
          FUN_004ae7e0(lVar6,lVar9);
          uVar5 = FUN_006dd740(lVar9);
          FUN_01303240(param_1,2,uVar5,0);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        iVar4 = iVar3;
        if (unaff_SIL == '\0') {
          iVar4 = (*(int *)(lVar6 + 0x10) - iVar3) + -1;
        }
        uVar8 = FUN_004aeac0(lVar6,iVar4);
        FUN_006ded10(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar8);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (lVar6 != 0) {
      FUN_00410f20(lVar6);
    }
  }
  return;
}

