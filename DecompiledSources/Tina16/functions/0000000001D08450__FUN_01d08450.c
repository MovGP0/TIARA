/* Ghidra address: 01d08450 */
/* Ghidra symbol: FUN_01d08450 */


void FUN_01d08450(undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined4 local_4c [7];
  
  if (param_2 != 0) {
    while (cVar2 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x470),local_4c), cVar2 != '\0') {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),local_4c[0]);
      FUN_00410f20(*(undefined8 *)(lVar4 + 0x11f));
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),local_4c[0]);
      FUN_004095f0(uVar5);
      FUN_004ae870(*(undefined8 *)(param_2 + 0x470),local_4c[0]);
      if (*(int *)(*(longlong *)(param_2 + 0x470) + 0x10) < 1) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x431) = 0;
        PTR_DAT_02004010[3] = 0;
        *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
        PTR_DAT_02004010[0xc5] = 0;
      }
      else {
        puVar3 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_2 + 0x470),0);
        puVar6 = (undefined8 *)(PTR_DAT_02004010 + 0x431);
        for (lVar4 = 0x24; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)puVar6 = *(undefined4 *)puVar3;
        *(undefined2 *)((longlong)puVar6 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
        *(undefined1 *)((longlong)puVar6 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
        dVar9 = 1.0;
        iVar7 = *(int *)(*(longlong *)(param_2 + 0x470) + 0x10);
        iVar8 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar8);
            dVar9 = dVar9 * (double)(int)*(short *)(lVar4 + 0x11c);
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *(double *)(PTR_DAT_02004010 + 0xbd) = dVar9;
      }
    }
    while (cVar2 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x468),local_4c), cVar2 != '\0') {
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),local_4c[0]);
      FUN_004095f0(uVar5);
      FUN_004ae870(*(undefined8 *)(param_2 + 0x468),local_4c[0]);
      if (*(int *)(*(longlong *)(param_2 + 0x468) + 0x10) < 1) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = 0;
        PTR_DAT_02004010[3] = 0;
        *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
      }
      else {
        puVar6 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_2 + 0x468),0);
        puVar1 = PTR_DAT_02004010;
        puVar3 = (undefined8 *)(PTR_DAT_02004010 + 0x587);
        *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = *puVar6;
        *puVar3 = puVar6[1];
        *(undefined8 *)(puVar1 + 0x58f) = puVar6[2];
        *(undefined4 *)(puVar1 + 0x597) = *(undefined4 *)(puVar6 + 3);
      }
    }
    cVar2 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x478),local_4c);
    if (cVar2 != '\0') {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      iVar7 = *(int *)(*(longlong *)(lVar4 + 0x13) + 0x10);
      iVar8 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x13),iVar8);
          FUN_004095f0(uVar5);
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      FUN_00410f20(*(undefined8 *)(lVar4 + 0x13));
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      iVar7 = *(int *)(*(longlong *)(lVar4 + 0x1b) + 0x10);
      iVar8 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x1b),iVar8);
          FUN_004095f0(uVar5);
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      FUN_00410f20(*(undefined8 *)(lVar4 + 0x1b));
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      iVar7 = *(int *)(*(longlong *)(lVar4 + 0x23) + 0x10);
      iVar8 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
          uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x23),iVar8);
          FUN_004095f0(uVar5);
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      FUN_00410f20(*(undefined8 *)(lVar4 + 0x23));
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      FUN_004095f0(uVar5);
      FUN_004ae870(*(undefined8 *)(param_2 + 0x478),local_4c[0]);
      if (*(int *)(*(longlong *)(param_2 + 0x478) + 0x10) < 1) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x56e) = 0;
        PTR_DAT_02004010[3] = 0;
        *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
      }
      else {
        puVar6 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_2 + 0x478),0);
        puVar1 = PTR_DAT_02004010;
        puVar3 = (undefined8 *)(PTR_DAT_02004010 + 0x576);
        *(undefined8 *)(PTR_DAT_02004010 + 0x56e) = *puVar6;
        *puVar3 = puVar6[1];
        puVar1[0x57e] = *(undefined1 *)(puVar6 + 2);
      }
    }
  }
  return;
}

