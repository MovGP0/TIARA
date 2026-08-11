/* Ghidra address: 0143b640 */
/* Ghidra symbol: FUN_0143b640 */


void FUN_0143b640(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  longlong local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  cVar2 = FUN_0143ca80(param_1);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x90))(*(longlong **)(param_1 + 0x708));
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00414480(&local_60);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0);
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
    if (iVar6 <= iVar7) {
      iVar7 = (iVar7 - iVar6) + 1;
      do {
        cVar2 = FUN_0143d610(param_1,iVar6);
        if (cVar2 == '\0') {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_90,0,iVar6);
          FUN_00416cd0(&local_60,3,local_60,local_90,&DAT_0143bbdc);
        }
        else {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_80,0,iVar6);
          FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_88,1,iVar6);
          FUN_00416cd0(&local_78,3,local_80,&DAT_0143bbcc,local_88);
          FUN_0043ea00(local_70,local_78);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_70[0]);
        }
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_a8,0,iVar6);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_b0,1,iVar6);
        uVar10 = local_b0;
        FUN_00416cd0(&local_a0,3,local_a8,&DAT_0143bbcc,local_b0);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FUN_0043ea00(&local_98,local_a0);
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x78))
                  (*(longlong **)(param_1 + 0x708),local_98);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_60 != 0) {
      uVar11 = 0;
      FUN_00416cd0(&local_b8,3,L"@ Configuration begin",local_60,L".@ Configuration end");
      (**(code **)(*plVar3 + 0x78))(plVar3,local_b8);
    }
    plVar1 = *(longlong **)(param_1 + 0x738);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))
                (plVar1,*(undefined8 *)
                         (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),&local_48);
      FUN_0149ec30(*(undefined8 *)(param_1 + 0x738),plVar3);
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x50))
                (*(longlong **)(param_1 + 0x738),
                 *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),
                 local_58);
      FUN_00b957c0(&local_48,local_58);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
      (**(code **)(*plVar1 + 0x30))(plVar1,local_48,local_44,local_40,CONCAT44(uVar11,local_3c));
    }
    FUN_00410f20(plVar3);
    FUN_0143d700(param_1,*(undefined8 *)(param_1 + 0x738));
    FUN_019af700(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788));
    lVar4 = FUN_019a4600();
    FUN_01d0f8a0(*(undefined8 *)(lVar4 + 0x470));
    lVar4 = FUN_019a4600();
    *(undefined8 *)(lVar4 + 0x470) = *(undefined8 *)(param_1 + 0x730);
    if (PTR_DAT_02004010[0xc5] == '\0') {
      dVar9 = 1.0;
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x730) + 0x10);
      iVar7 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x730),iVar7);
          dVar9 = dVar9 * (double)(int)*(short *)(lVar4 + 0x11c);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      dVar9 = 1.0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x730) + 0x10)) {
        lVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x730),0);
        dVar9 = (double)(int)*(short *)(lVar4 + 0x11c);
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x730) + 0x10) + -1;
        iVar6 = 1;
        if (0 < iVar7) {
          do {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x730),iVar6);
            if ((double)(int)*(short *)(lVar4 + 0x11c) <= dVar9) {
              dVar9 = (double)(int)*(short *)(lVar4 + 0x11c);
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x730);
    if (0 < *(int *)(lVar4 + 0x10)) {
      *(double *)(PTR_DAT_02004010 + 0xbd) = dVar9;
      PTR_DAT_02004010[3] = 2;
      puVar5 = (undefined8 *)FUN_004aeac0(lVar4,0);
      puVar8 = (undefined8 *)(PTR_DAT_02004010 + 0x431);
      for (lVar4 = 0x24; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)puVar8 = *(undefined4 *)puVar5;
      *(undefined2 *)((longlong)puVar8 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
      *(undefined1 *)((longlong)puVar8 + 6) = *(undefined1 *)((longlong)puVar5 + 6);
    }
    *(undefined8 *)(param_1 + 0x730) = 0;
  }
  FUN_00414560(&local_b8,10);
  FUN_00414480(&local_60);
  return;
}

