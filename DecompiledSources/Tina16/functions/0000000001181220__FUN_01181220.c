/* Ghidra address: 01181220 */
/* Ghidra symbol: FUN_01181220 */


/* WARNING: Removing unreachable block (ram,0x011820dc) */
/* WARNING: Removing unreachable block (ram,0x011820f7) */
/* WARNING: Removing unreachable block (ram,0x011820fc) */

void FUN_01181220(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 local_res10 [3];
  undefined1 local_1c8 [264];
  short *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [14];
  
  local_90[0] = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = (short *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) {
    iVar7 = *(int *)(PTR_DAT_020021e8 + 0x1fa0) / 2;
  }
  else {
    iVar7 = *(int *)(PTR_DAT_020021e8 + 0x1fa0);
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7b8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x840));
  cVar6 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8));
  if (cVar6 == '\0') {
    FUN_00414b50(&local_b0,L"ACTIVE");
  }
  else {
    FUN_00414b50(&local_b0,L"PASSIVE");
  }
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar5 + 0x78))(plVar5,local_b0);
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar5 + 0x78))(plVar5,local_b0);
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" Common Component Values  ");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" Common Component Values  ");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" =====================================");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" =====================================");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" Stage  L Value     C Value      Special");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" Stage  L Value     C Value      Special");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" =====  =========   ==========   =================");
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar5 + 0x78))(plVar5,L" =====  =========   ==========   =================");
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa6) == 0x45) {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa00),&local_c0);
    if ((*local_c0 == 0x53) || (*local_c0 == 0x61)) {
      iVar7 = *(int *)PTR_DAT_02002af8;
    }
    else {
      iVar7 = *(int *)PTR_DAT_02002af8;
    }
    iVar8 = 0;
    if (-1 < iVar7 + -1) {
      do {
        FUN_00414480(&local_98);
        FUN_0040e780(local_1c8,iVar8,2);
        FUN_004169a0(local_90,local_1c8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],L".    ");
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     (*(double *)(*param_1 + 0x10 + (longlong)iVar8 * 8) *
                     *(double *)PTR_DAT_02005b00) / *(double *)(PTR_DAT_020021e8 + 0x20));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&DAT_01182550);
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     (*(double *)(*param_1 + 0x978 + (longlong)iVar8 * 8) /
                     *(double *)PTR_DAT_02005b00) / *(double *)(PTR_DAT_020021e8 + 0x20));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&LAB_01182564);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
    dVar9 = *(double *)(PTR_DAT_020021e8 + 0x30);
    dVar10 = *(double *)(PTR_DAT_020021e8 + 0x20);
    dVar1 = *(double *)(PTR_DAT_020021e8 + 0x28);
    dVar2 = *(double *)(PTR_DAT_020021e8 + 0x38);
    FUN_0040c850((dVar10 * dVar1 - dVar9 * dVar9) / (dVar9 * dVar1 - dVar9 * dVar10));
    FUN_0040c850((dVar10 * dVar1 - dVar2 * dVar2) / (dVar2 * dVar1 - dVar2 * dVar10));
    dVar9 = *(double *)(PTR_DAT_020021e8 + 0x30);
    dVar10 = *(double *)(PTR_DAT_020021e8 + 0x20);
    dVar1 = *(double *)PTR_DAT_02005b00;
    iVar8 = 0;
    if (-1 < iVar7 + -1) {
      do {
        dVar2 = *(double *)(*param_1 + 0x10 + (longlong)(iVar8 / 2) * 8);
        dVar3 = *(double *)(*param_1 + 0x978 + (longlong)(iVar8 / 2) * 8);
        cVar6 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0),
                           (longlong)iVar8 % 2 & 0xffffffff);
        if (cVar6 == '\x01') {
          if (iVar8 % 2 == 0) {
            *(double *)(PTR_DAT_02001ad0 + 8) =
                 ((dVar2 * (dVar10 - dVar9)) / (dVar10 * dVar9)) * dVar1;
            *(double *)(PTR_DAT_02001ad0 + 0x10) =
                 ((dVar10 - dVar9) / (dVar2 * dVar10 * dVar9)) / dVar1;
          }
          else {
            *(double *)(PTR_DAT_02001ad0 + 8) =
                 ((dVar10 - dVar9) / (dVar3 * dVar10 * dVar9)) * dVar1;
            *(double *)(PTR_DAT_02001ad0 + 0x10) = (dVar3 / (dVar10 - dVar9)) / dVar1;
          }
        }
        else if (iVar8 % 2 == 1) {
          *(double *)(PTR_DAT_02001ad0 + 8) =
               ((dVar2 * (dVar10 - dVar9)) / (dVar10 * dVar9)) * dVar1;
          *(double *)(PTR_DAT_02001ad0 + 0x10) =
               ((dVar10 - dVar9) / (dVar2 * dVar10 * dVar9)) / dVar1;
        }
        else {
          *(double *)(PTR_DAT_02001ad0 + 8) = ((dVar10 - dVar9) / (dVar3 * dVar10 * dVar9)) * dVar1;
          *(double *)(PTR_DAT_02001ad0 + 0x10) = (dVar3 / (dVar10 - dVar9)) / dVar1;
        }
        FUN_00414480(&local_98);
        FUN_0040e780(local_1c8,iVar8,2);
        FUN_004169a0(local_90,local_1c8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],L".    ");
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(PTR_DAT_02001ad0 + 8));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&DAT_01182550);
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(PTR_DAT_02001ad0 + 0x10));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&LAB_01182564);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    dVar9 = *(double *)(PTR_DAT_020021e8 + 0x20);
    dVar10 = *(double *)(PTR_DAT_020021e8 + 0x30);
    dVar1 = *(double *)(PTR_DAT_020021e8 + 0x38);
    dVar2 = *(double *)(PTR_DAT_020021e8 + 0x28);
    dVar9 = (double)FUN_0040c850((dVar10 * dVar1 - dVar9 * dVar9) / (dVar9 * dVar1 - dVar9 * dVar10)
                                );
    dVar10 = (double)FUN_0040c850((dVar10 * dVar1 - dVar2 * dVar2) /
                                  (dVar2 * dVar1 - dVar2 * dVar10));
    if (dVar10 < dVar9) {
      dVar9 = dVar10;
    }
    dVar10 = *(double *)(PTR_DAT_020021e8 + 0x38);
    dVar1 = *(double *)(PTR_DAT_020021e8 + 0x28);
    dVar2 = *(double *)PTR_DAT_02005b00;
    iVar8 = 0;
    if (-1 < iVar7 + -1) {
      do {
        dVar3 = *(double *)(*param_1 + 0x10 + (longlong)(iVar8 / 2) * 8);
        dVar4 = *(double *)(*param_1 + 0x978 + (longlong)(iVar8 / 2) * 8);
        cVar6 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0) + 0x260))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9e0),
                           (longlong)iVar8 % 2 & 0xffffffff);
        if (cVar6 == '\x01') {
          if (iVar8 % 2 == 0) {
            *(double *)(PTR_DAT_02001ad0 + 8) =
                 ((dVar9 * dVar3 * (dVar1 - dVar10)) / (dVar1 * dVar10)) * dVar2;
            *(double *)(PTR_DAT_02001ad0 + 0x10) =
                 (1.0 / (dVar9 * dVar3 * (dVar1 - dVar10))) / dVar2;
          }
          else {
            *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar9 * dVar4 * (dVar1 - dVar10))) * dVar2;
            *(double *)(PTR_DAT_02001ad0 + 0x10) =
                 ((dVar9 * dVar4 * (dVar1 - dVar10)) / (dVar1 * dVar10)) / dVar2;
          }
        }
        else if (iVar8 % 2 == 1) {
          *(double *)(PTR_DAT_02001ad0 + 8) =
               ((dVar9 * dVar3 * (dVar1 - dVar10)) / (dVar1 * dVar10)) * dVar2;
          *(double *)(PTR_DAT_02001ad0 + 0x10) = (1.0 / (dVar9 * dVar3 * (dVar1 - dVar10))) / dVar2;
        }
        else {
          *(double *)(PTR_DAT_02001ad0 + 8) = (1.0 / (dVar9 * dVar4 * (dVar1 - dVar10))) * dVar2;
          *(double *)(PTR_DAT_02001ad0 + 0x10) =
               ((dVar9 * dVar4 * (dVar1 - dVar10)) / (dVar1 * dVar10)) / dVar2;
        }
        FUN_00414480(&local_98);
        FUN_0040e780(local_1c8,iVar8,2);
        FUN_004169a0(local_90,local_1c8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],L".    ");
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(PTR_DAT_02001ad0 + 8));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&DAT_01182550);
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(PTR_DAT_02001ad0 + 0x10));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_90);
        FUN_011803f0(local_90,8);
        FUN_00416cd0(&local_98,3,local_98,local_90[0],&LAB_01182564);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414560(&local_c0,7);
  FUN_00414480(local_res10);
  return;
}

