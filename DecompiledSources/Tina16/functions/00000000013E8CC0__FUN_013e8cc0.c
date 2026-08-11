/* Ghidra address: 013e8cc0 */
/* Ghidra symbol: FUN_013e8cc0 */


void FUN_013e8cc0(longlong param_1)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
  if (*(char *)(param_1 + 0x768) == '\0') {
    lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    while( true ) {
      iVar8 = 1;
      if (*(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1 < 1) break;
      pdVar2 = (double *)FUN_004aeac0(*(longlong *)(param_1 + 0x788),1);
      dVar9 = *pdVar2;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
      iVar6 = 1;
      if (0 < iVar7) {
        do {
          pdVar2 = (double *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar6);
          if (*pdVar2 <= dVar9 && dVar9 != *pdVar2) {
            dVar9 = *pdVar2;
            iVar8 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar8);
      puVar5 = (undefined8 *)FUN_004095c0(0x10);
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      FUN_004ae7e0(lVar1,puVar5);
      FUN_004ae870(*(undefined8 *)(param_1 + 0x788),iVar8);
    }
    iVar6 = 0;
    iVar8 = *(int *)(lVar1 + 0x10);
    if (-1 < iVar8 + -1) {
      do {
        uVar4 = FUN_004095c0(0x10);
        *(undefined8 *)(param_1 + 0x7a8) = uVar4;
        puVar5 = (undefined8 *)FUN_004aeac0(lVar1,iVar6);
        puVar3 = *(undefined8 **)(param_1 + 0x7a8);
        *puVar3 = *puVar5;
        puVar3[1] = puVar5[1];
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),puVar3);
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(lVar1 + 0x10);
    iVar6 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar4 = FUN_004aeac0(lVar1,iVar6);
        FUN_004095f0(uVar4);
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_00410f20(lVar1);
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d0));
    FUN_013e72b0(param_1);
    FUN_013e7620(param_1);
  }
  return;
}

