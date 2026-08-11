/* Ghidra address: 00f14480 */
/* Ghidra symbol: FUN_00f14480 */


void FUN_00f14480(longlong *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char unaff_BL;
  longlong lVar8;
  int iVar9;
  double dVar10;
  int local_5c;
  int local_50;
  int iStack_4c;
  
  lVar8 = 0;
  bVar1 = true;
  iVar3 = (**(code **)(**(longlong **)(param_1[0xf] + 0xe0) + 0x28))
                    (*(longlong **)(param_1[0xf] + 0xe0));
  local_5c = 1;
  if (0 < iVar3) {
    do {
      iVar9 = local_5c + -1;
      uVar4 = (**(code **)(**(longlong **)(param_1[0xf] + 0xe0) + 0x30))
                        (*(longlong **)(param_1[0xf] + 0xe0),iVar9);
      cVar2 = FUN_004113d0(uVar4,&LAB_00f12330);
      if ((cVar2 != '\0') &&
         (plVar5 = (longlong *)
                   (**(code **)(**(longlong **)(param_1[0xf] + 0xe0) + 0x30))
                             (*(longlong **)(param_1[0xf] + 0xe0),iVar9), plVar5 != param_1)) {
        uVar4 = (**(code **)(**(longlong **)(param_1[0xf] + 0xe0) + 0x30))
                          (*(longlong **)(param_1[0xf] + 0xe0),iVar9);
        lVar6 = FUN_004113f0(uVar4,&LAB_00f12330);
        iVar9 = (int)param_1[0x19] - *(int *)(lVar6 + 200);
        iVar7 = *(int *)((longlong)param_1 + 0xcc) - *(int *)(lVar6 + 0xcc);
        dVar10 = (double)FUN_0040c760((double)(iVar9 * iVar9 + iVar7 * iVar7));
        if (dVar10 < 15.0) {
          unaff_BL = '\0';
          lVar8 = lVar6;
        }
        iVar9 = (int)param_1[0x19] - (*(int *)(lVar6 + 200) + *(int *)(lVar6 + 0xd0));
        iVar7 = *(int *)((longlong)param_1 + 0xcc) -
                (*(int *)(lVar6 + 0xcc) + *(int *)(lVar6 + 0xd4));
        dVar10 = (double)FUN_0040c760((double)(iVar9 * iVar9 + iVar7 * iVar7));
        if (dVar10 < 15.0) {
          unaff_BL = '\x01';
          lVar8 = lVar6;
        }
        iVar9 = ((int)param_1[0x19] + (int)param_1[0x1a]) -
                (*(int *)(lVar6 + 200) + *(int *)(lVar6 + 0xd0));
        iVar7 = (*(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4)) -
                (*(int *)(lVar6 + 0xcc) + *(int *)(lVar6 + 0xd4));
        dVar10 = (double)FUN_0040c760((double)(iVar9 * iVar9 + iVar7 * iVar7));
        if (dVar10 < 15.0) {
          unaff_BL = '\x02';
          lVar8 = lVar6;
        }
        iVar9 = ((int)param_1[0x19] + (int)param_1[0x1a]) - *(int *)(lVar6 + 200);
        iVar7 = (*(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4)) -
                *(int *)(lVar6 + 0xcc);
        dVar10 = (double)FUN_0040c760((double)(iVar9 * iVar9 + iVar7 * iVar7));
        if (dVar10 < 15.0) {
          unaff_BL = '\x03';
          lVar8 = lVar6;
        }
      }
      local_5c = local_5c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (lVar8 == 0) {
    iVar3 = FUN_01cd60f0(param_1[0x1b],0);
    iVar3 = (int)param_1[0x19] - iVar3;
    iVar9 = FUN_01cd60f0(param_1[0x1c],0);
    iVar9 = *(int *)((longlong)param_1 + 0xcc) - iVar9;
    dVar10 = (double)FUN_0040c760((double)(iVar3 * iVar3 + iVar9 * iVar9));
    if (15.0 <= dVar10) {
      iVar3 = FUN_01cd60f0(param_1[0x1b],0);
      iVar3 = ((int)param_1[0x19] + (int)param_1[0x1a]) - iVar3;
      iVar9 = FUN_01cd60f0(param_1[0x1c],0);
      iVar9 = (*(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4)) - iVar9;
      dVar10 = (double)FUN_0040c760((double)(iVar3 * iVar3 + iVar9 * iVar9));
      if (15.0 <= dVar10) {
        bVar1 = false;
      }
      else {
        param_1[0x15] = param_1[0x17] ^ 0x8000000000000000;
        param_1[0x16] = param_1[0x18] ^ 0x8000000000000000;
      }
    }
    else {
      param_1[0x15] = 0;
      param_1[0x16] = 0;
    }
  }
  else if (unaff_BL == '\0') {
    param_1[0x15] = *(longlong *)(lVar8 + 0xa8);
    param_1[0x16] = *(longlong *)(lVar8 + 0xb0);
  }
  else if (unaff_BL == '\x01') {
    param_1[0x15] = (longlong)(*(double *)(lVar8 + 0xa8) + *(double *)(lVar8 + 0xb8));
    param_1[0x16] = (longlong)(*(double *)(lVar8 + 0xb0) + *(double *)(lVar8 + 0xc0));
  }
  else if (unaff_BL == '\x02') {
    param_1[0x15] =
         (longlong)((*(double *)(lVar8 + 0xa8) + *(double *)(lVar8 + 0xb8)) - (double)param_1[0x17])
    ;
    param_1[0x16] =
         (longlong)((*(double *)(lVar8 + 0xb0) + *(double *)(lVar8 + 0xc0)) - (double)param_1[0x18])
    ;
  }
  else if (unaff_BL == '\x03') {
    param_1[0x15] = (longlong)(*(double *)(lVar8 + 0xa8) - (double)param_1[0x17]);
    param_1[0x16] = (longlong)(*(double *)(lVar8 + 0xb0) - (double)param_1[0x18]);
  }
  if (bVar1) {
    lVar8 = param_1[0x19];
    (**(code **)(*param_1 + 0xe0))(param_1);
    plVar5 = (longlong *)param_1[0x1e];
    if (plVar5 != (longlong *)0x0) {
      local_50 = (int)lVar8;
      iStack_4c = (int)((ulonglong)lVar8 >> 0x20);
      (**(code **)(*plVar5 + 0xa8))
                (plVar5,(int)param_1[0x19] - local_50,*(int *)((longlong)param_1 + 0xcc) - iStack_4c
                );
    }
    iVar3 = (int)param_1[0x19];
    iVar9 = iVar3 + (int)param_1[0x1a];
    if (iVar9 <= iVar3) {
      iVar3 = iVar9;
    }
    *param_2 = iVar3;
    iVar3 = *(int *)((longlong)param_1 + 0xcc);
    iVar9 = iVar3 + *(int *)((longlong)param_1 + 0xd4);
    if (iVar9 <= iVar3) {
      iVar3 = iVar9;
    }
    *param_3 = iVar3;
  }
  return;
}

