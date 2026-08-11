/* Ghidra address: 013ee280 */
/* Ghidra symbol: FUN_013ee280 */


void FUN_013ee280(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  double dVar7;
  
  *(undefined1 *)(param_1 + 0x1098) = 2;
  *(undefined1 *)(param_1 + 0x1099) = 2;
  *(undefined1 *)(param_1 + 0x109a) = 2;
  FUN_013ed640(param_1);
  iVar2 = FUN_006d8150();
  if (iVar2 == 0) {
    if (PTR_DAT_02004010[0xc5] == '\0') {
      dVar7 = 1.0;
      lVar3 = FUN_019a4600();
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x470) + 0x10);
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = FUN_019a4600();
          lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x470),iVar6);
          dVar7 = dVar7 * (double)(int)*(short *)(lVar3 + 0x11c);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(double *)(PTR_DAT_02004010 + 0xbd) = dVar7;
    }
    else {
      lVar3 = FUN_019a4600();
      if (0 < *(int *)(*(longlong *)(lVar3 + 0x470) + 0x10)) {
        lVar3 = FUN_019a4600();
        lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x470),0);
        dVar7 = (double)(int)*(short *)(lVar3 + 0x11c);
        lVar3 = FUN_019a4600();
        iVar6 = *(int *)(*(longlong *)(lVar3 + 0x470) + 0x10) + -1;
        iVar2 = 1;
        if (0 < iVar6) {
          do {
            lVar3 = FUN_019a4600();
            lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x470),iVar2);
            dVar7 = (double)FUN_00b90650(dVar7,(double)(int)*(short *)(lVar3 + 0x11c));
            iVar2 = iVar2 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
    lVar3 = FUN_019a4600();
    if (*(int *)(*(longlong *)(lVar3 + 0x470) + 0x10) == 0) {
      PTR_DAT_02004010[3] = 0;
      PTR_DAT_02004010[0xc5] = 0;
    }
  }
  DAT_0210848c = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  lVar3 = FUN_019a4600();
  if (0 < *(int *)(*(longlong *)(lVar3 + 0x470) + 0x10)) {
    lVar3 = FUN_019a4600();
    puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar3 + 0x470),0);
    puVar5 = (undefined8 *)(PTR_DAT_02004010 + 0x431);
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
    *(undefined1 *)((longlong)puVar5 + 6) = *(undefined1 *)((longlong)puVar4 + 6);
  }
  lVar3 = FUN_019a4600();
  if (0 < *(int *)(*(longlong *)(lVar3 + 0x468) + 0x10)) {
    lVar3 = FUN_019a4600();
    puVar5 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar3 + 0x468),0);
    puVar1 = PTR_DAT_02004010;
    puVar4 = (undefined8 *)(PTR_DAT_02004010 + 0x587);
    *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = *puVar5;
    *puVar4 = puVar5[1];
    *(undefined8 *)(puVar1 + 0x58f) = puVar5[2];
    *(undefined4 *)(puVar1 + 0x597) = *(undefined4 *)(puVar5 + 3);
  }
  lVar3 = FUN_019a4600();
  if (0 < *(int *)(*(longlong *)(lVar3 + 0x478) + 0x10)) {
    lVar3 = FUN_019a4600();
    puVar5 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar3 + 0x478),0);
    puVar1 = PTR_DAT_02004010;
    puVar4 = (undefined8 *)(PTR_DAT_02004010 + 0x576);
    *(undefined8 *)(PTR_DAT_02004010 + 0x56e) = *puVar5;
    *puVar4 = puVar5[1];
    puVar1[0x57e] = *(undefined1 *)(puVar5 + 2);
  }
  return;
}

