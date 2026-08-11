/* Ghidra address: 010c7360 */
/* Ghidra symbol: FUN_010c7360 */


undefined8 FUN_010c7360(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_170a8 [28];
  int aiStack_1708c [1005];
  undefined8 auStack_160d8 [10];
  int iStack_16088;
  int iStack_16084;
  undefined1 auStack_1020 [4000];
  undefined8 local_80 [12];
  ulonglong uVar5;
  
  uVar5 = 0xf78;
  do {
    uVar4 = uVar5 - 0x1000;
    auStack_1020[uVar5] = (char)uVar4;
    uVar5 = uVar4;
  } while (0xfffffffffffe8f78 < uVar4);
  lVar7 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar7 + 8) = 0xffffffff;
  *(undefined4 *)(lVar7 + 0xc) = 0;
  *(undefined4 *)(lVar7 + 0x14) = 0;
  iStack_16084 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
  iVar8 = 0;
LAB_010c73c7:
  iStack_16084 = iStack_16084 + 1;
  if (0x400 < iStack_16084) {
    FUN_00e085e0(*(undefined8 *)(param_1 + 0x10),L"yyparse stack overflow");
    FUN_01697c40(*(undefined8 *)(param_1 + 8),0x202);
    return 1;
  }
  aiStack_1708c[iStack_16084] = iVar8;
  puVar9 = local_80;
  puVar10 = auStack_160d8 + (longlong)iStack_16084 * 0xb;
  for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
LAB_010c7430:
  if (((&DAT_01f177f0)[iVar8] == 0) && (*(int *)(*(longlong *)(param_1 + 0x10) + 8) == -1)) {
    iVar3 = FUN_01697c10(*(undefined8 *)(param_1 + 8));
    lVar7 = *(longlong *)(param_1 + 0x10);
    *(int *)(lVar7 + 8) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(lVar7 + 8) = 0;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
    uVar6 = FUN_0040f200(PTR_DAT_02002680,L"state ");
    uVar6 = FUN_0040ef30(uVar6,iVar8);
    uVar6 = FUN_0040f200(uVar6,L", char ");
    uVar6 = FUN_0040ef30(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8));
    FUN_0040f590(uVar6);
    FUN_00409900();
  }
  iStack_16088 = (&DAT_01f177f0)[iVar8];
  if (iStack_16088 == 0) {
    cVar2 = FUN_010c72a0(auStack_170a8,iVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8),
                         &iStack_16088);
    if (cVar2 != '\0') {
      if (iStack_16088 < 1) {
        if (-1 < iStack_16088) {
          return 0;
        }
        goto LAB_010c774e;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0xffffffff;
      puVar9 = (undefined8 *)(param_1 + 0x18);
      puVar10 = local_80;
      for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar8 = iStack_16088;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x14)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x14);
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_010c73c7;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x14) == 0) {
      FUN_00e085e0(*(longlong *)(param_1 + 0x10),L"syntax error");
      FUN_01697c40(*(undefined8 *)(param_1 + 8),1);
    }
  }
  else {
LAB_010c774e:
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
      uVar6 = FUN_0040f200(PTR_DAT_02002680,L"reduce ");
      uVar6 = FUN_0040ef30(uVar6,-iStack_16088);
      FUN_0040f590(uVar6);
      FUN_00409900();
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x11) = 0;
    FUN_010c2770(auStack_170a8,-iStack_16088);
    iStack_16084 = iStack_16084 - *(int *)(&DAT_01f18da0 + (longlong)-iStack_16088 * 8);
    cVar2 = FUN_010c7300(auStack_170a8,aiStack_1708c[iStack_16084],
                         *(undefined4 *)(&DAT_01f18da4 + (longlong)-iStack_16088 * 8),&iStack_16088)
    ;
    if (cVar2 != '\0') {
      iVar8 = iStack_16088;
    }
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x11);
    if (cVar2 == '\x01') {
      return 0;
    }
    if (cVar2 == '\x02') {
      return 1;
    }
    if (cVar2 != '\x03') goto LAB_010c73c7;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x14) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar7 + 0x14) < 3) goto code_r0x010c759b;
  if (*(char *)(lVar7 + 0x10) != '\0') {
    uVar6 = FUN_0040f200(PTR_DAT_02002680,L"error recovery discards char ");
    uVar6 = FUN_0040ef30(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8));
    FUN_0040f590(uVar6);
    FUN_00409900();
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 8) == 0) {
    return 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0xffffffff;
  goto LAB_010c7430;
code_r0x010c759b:
  *(undefined4 *)(lVar7 + 0x14) = 3;
  while ((0 < iStack_16084 &&
         ((cVar2 = FUN_010c72a0(auStack_170a8,aiStack_1708c[iStack_16084],0x100,&iStack_16088),
          cVar2 == '\0' || (iStack_16088 < 1))))) {
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x10) != '\0') {
      if (iStack_16084 < 2) {
        uVar6 = FUN_0040f200(PTR_DAT_02002680,L"error recovery fails ... abort");
        FUN_0040f590(uVar6);
        FUN_00409900();
      }
      else {
        uVar6 = FUN_0040f200(PTR_DAT_02002680,L"error recovery pops state ");
        uVar6 = FUN_0040ef30(uVar6,aiStack_1708c[iStack_16084]);
        uVar6 = FUN_0040f200(uVar6,L", uncovers ");
        uVar6 = FUN_0040ef30(uVar6,aiStack_1708c[iStack_16084 + -1]);
        FUN_0040f590(uVar6);
        FUN_00409900();
      }
    }
    iStack_16084 = iStack_16084 + -1;
  }
  iVar8 = iStack_16088;
  if (iStack_16084 == 0) {
    return 1;
  }
  goto LAB_010c73c7;
}

