/* Ghidra address: 01d08870 */
/* Ghidra symbol: FUN_01d08870 */


void FUN_01d08870(longlong param_1,longlong param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  if (param_2 != 0) {
    iVar9 = 0;
    while (iVar9 < *(int *)(*(longlong *)(param_2 + 0x470) + 0x10)) {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar9);
      if (((param_1 == *plVar3) &&
          (lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar9),
          param_3 == *(byte *)(lVar4 + 8))) &&
         (lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar9), *(char *)(lVar4 + 9) != '\0'
         )) {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar9);
        FUN_00410f20(*(undefined8 *)(lVar4 + 0x11f));
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar9);
        FUN_004095f0(uVar5);
        FUN_004ae870(*(undefined8 *)(param_2 + 0x470),iVar9);
        if (*(int *)(*(longlong *)(param_2 + 0x470) + 0x10) < 1) {
          *(undefined8 *)(PTR_DAT_02004010 + 0x431) = 0;
          PTR_DAT_02004010[3] = 0;
          *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
          PTR_DAT_02004010[0xc5] = 0;
        }
        else {
          puVar2 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_2 + 0x470),0);
          puVar6 = (undefined8 *)(PTR_DAT_02004010 + 0x431);
          for (lVar4 = 0x24; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar6 = puVar6 + 1;
          }
          *(undefined4 *)puVar6 = *(undefined4 *)puVar2;
          *(undefined2 *)((longlong)puVar6 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
          *(undefined1 *)((longlong)puVar6 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
          dVar10 = 1.0;
          iVar8 = *(int *)(*(longlong *)(param_2 + 0x470) + 0x10);
          iVar7 = 0;
          if (-1 < iVar8 + -1) {
            do {
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar7);
              dVar10 = dVar10 * (double)(int)*(short *)(lVar4 + 0x11c);
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *(double *)(PTR_DAT_02004010 + 0xbd) = dVar10;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
    iVar9 = 0;
    while (iVar9 < *(int *)(*(longlong *)(param_2 + 0x468) + 0x10)) {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar9);
      if (((param_1 == *plVar3) &&
          (lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar9),
          param_3 == *(byte *)(lVar4 + 8))) &&
         (lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar9), *(char *)(lVar4 + 9) != '\0'
         )) {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar9);
        FUN_004095f0(uVar5);
        FUN_004ae870(*(undefined8 *)(param_2 + 0x468),iVar9);
        if (*(int *)(*(longlong *)(param_2 + 0x468) + 0x10) < 1) {
          *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = 0;
          PTR_DAT_02004010[3] = 0;
          *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
        }
        else {
          puVar6 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_2 + 0x468),0);
          puVar1 = PTR_DAT_02004010;
          puVar2 = (undefined8 *)(PTR_DAT_02004010 + 0x587);
          *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = *puVar6;
          *puVar2 = puVar6[1];
          *(undefined8 *)(puVar1 + 0x58f) = puVar6[2];
          *(undefined4 *)(puVar1 + 0x597) = *(undefined4 *)(puVar6 + 3);
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
  }
  return;
}

