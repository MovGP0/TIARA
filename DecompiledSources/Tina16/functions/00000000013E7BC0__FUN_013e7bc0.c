/* Ghidra address: 013e7bc0 */
/* Ghidra symbol: FUN_013e7bc0 */


void FUN_013e7bc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  cVar1 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
  *(char *)(param_1 + 0x768) = cVar1;
  if (cVar1 == '\0') {
    lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    while( true ) {
      iVar9 = 1;
      if (*(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1 < 1) break;
      pdVar3 = (double *)FUN_004aeac0(*(longlong *)(param_1 + 0x788),1);
      dVar10 = *pdVar3;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
      iVar7 = 1;
      if (0 < iVar8) {
        do {
          pdVar3 = (double *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar7);
          if (*pdVar3 <= dVar10 && dVar10 != *pdVar3) {
            dVar10 = *pdVar3;
            iVar9 = iVar7;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar9);
      puVar5 = (undefined8 *)FUN_004095c0(0x10);
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      FUN_004ae7e0(lVar2,puVar5);
      FUN_004ae870(*(undefined8 *)(param_1 + 0x788),iVar9);
    }
    iVar9 = *(int *)(lVar2 + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar4 = FUN_004095c0(0x10);
        *(undefined8 *)(param_1 + 0x7a8) = uVar4;
        puVar5 = (undefined8 *)FUN_004aeac0(lVar2,iVar7);
        puVar6 = *(undefined8 **)(param_1 + 0x7a8);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),puVar6);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),0);
    uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
    *puVar6 = uVar4;
    iVar9 = *(int *)(lVar2 + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar4 = FUN_004aeac0(lVar2,iVar7);
        FUN_004095f0(uVar4);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00410f20(lVar2);
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x790) + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x790),iVar7);
        FUN_004095f0(uVar4);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x10))(*(longlong **)(param_1 + 0x790));
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar4 = FUN_004095c0(0x10);
        *(undefined8 *)(param_1 + 0x7a8) = uVar4;
        puVar6 = *(undefined8 **)(param_1 + 0x7a8);
        puVar5 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar7);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x790),puVar6);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}

