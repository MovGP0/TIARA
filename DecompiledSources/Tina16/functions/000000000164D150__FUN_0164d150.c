/* Ghidra address: 0164d150 */
/* Ghidra symbol: FUN_0164d150 */


bool FUN_0164d150(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 double *param_5)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [52];
  int local_c4;
  double local_c0;
  undefined8 local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  
  dVar14 = 0.0;
  dVar13 = 0.0;
  dVar10 = 0.0;
  dVar15 = 0.0;
  *param_5 = 1.0;
  local_88 = *(double *)(param_3 + 0x418) * 10.0;
  local_98 = 1.0 / local_88;
  local_a8 = *(double *)
              (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8);
  dVar7 = (double)FUN_0040c850(*(undefined8 *)
                                (*(longlong *)(param_3 + 0x180) +
                                (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8));
  dVar7 = *(double *)(param_3 + 0x3c0) * dVar7;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar8 = FUN_0040c850(local_a8);
    dVar9 = (double)FUN_00b90620(uVar8,dVar7);
    local_c0 = *(double *)(param_3 + 0x3c8) * dVar9 + *(double *)(param_3 + 0x3d0);
    local_b8 = FUN_00b90620(*(undefined8 *)(param_3 + 0x408),dVar7);
  }
  else {
    uVar8 = FUN_0040c850(local_a8);
    dVar9 = (double)FUN_00b90620(uVar8,dVar7);
    local_c0 = *(double *)(param_3 + 0x3c8) * dVar9 + *(double *)(param_3 + 0x3d8);
    local_b8 = FUN_00b90620(*(undefined8 *)(param_3 + 0x410),dVar7);
  }
  dVar9 = 1.0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar5 = *(int *)(param_1 + 4);
    local_c4 = 0;
    local_a0 = dVar14;
    if (-1 < iVar5 + -1) {
      do {
        lVar4 = (longlong)local_c4;
        lVar2 = *(longlong *)(param_1 + 0x18) + lVar4 * 0xc;
        lVar3 = (longlong)*(int *)(lVar2 + 4);
        lVar2 = (longlong)*(int *)(lVar2 + 8);
        dVar10 = (*(double *)(*(longlong *)(param_3 + 0x118) + lVar3 * 8) -
                 *(double *)(*(longlong *)(param_3 + 0x118) + lVar2 * 8)) -
                 (*(double *)(*(longlong *)(param_3 + 0x128) + lVar3 * 8) -
                 *(double *)(*(longlong *)(param_3 + 0x128) + lVar2 * 8));
        dVar13 = dVar13 + *(double *)(*(longlong *)(param_1 + 0x38) + lVar4 * 8) * dVar10;
        dVar15 = dVar15 + *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)local_c4 * 8) *
                          dVar10;
        *(double *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8) = dVar10;
        local_c4 = local_c4 + 1;
        iVar5 = iVar5 + -1;
        local_a0 = dVar13;
        dVar10 = dVar15;
      } while (iVar5 != 0);
    }
    dVar15 = local_a8 + local_a0;
    dVar13 = (double)FUN_0164d0e0(auStack_f8);
    bVar6 = dVar13 < 1.0;
    if (bVar6) {
      dVar9 = dVar13;
    }
    local_a0 = dVar10;
    dVar10 = (double)FUN_0164d0e0(auStack_f8);
    if (dVar10 < dVar9) {
      bVar6 = true;
      dVar9 = dVar10;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    local_c4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = (longlong)local_c4;
        pcVar1 = (char *)(*(longlong *)(param_1 + 0x18) + lVar2 * 0xc);
        if (*pcVar1 == '\0') {
          dVar13 = (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(pcVar1 + 4) * 8)
                   - *(double *)
                      (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(pcVar1 + 8) * 8)) -
                   (*(double *)(*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(pcVar1 + 4) * 8)
                   - *(double *)
                      (*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(pcVar1 + 8) * 8));
        }
        else {
          dVar13 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(pcVar1 + 4) * 8)
                   - *(double *)
                      (*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(pcVar1 + 4) * 8);
        }
        dVar14 = dVar14 + *(double *)(*(longlong *)(param_1 + 0x38) + lVar2 * 8) * dVar13;
        dVar10 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x30) + lVar2 * 8) * dVar13;
        *(double *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8) = dVar13;
        local_c4 = local_c4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    dVar15 = local_a8 + dVar14;
    local_a0 = dVar14;
    dVar13 = (double)FUN_0164d0e0(auStack_f8);
    bVar6 = dVar13 < 1.0;
    if (bVar6) {
      dVar9 = dVar13;
    }
    local_a0 = dVar10;
    dVar10 = (double)FUN_0164d0e0(auStack_f8);
    if (dVar10 < dVar9) {
      bVar6 = true;
      dVar9 = dVar10;
    }
  }
  if (bVar6 == false) {
    uVar8 = FUN_0040c850(local_a8 - dVar15);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      uVar11 = FUN_0040c850(local_a8);
      uVar12 = FUN_0040c850(dVar15);
      dVar10 = (double)FUN_00b90630(uVar11,uVar12,dVar7);
      local_c0 = *(double *)(param_3 + 0x3d0) + *(double *)(param_3 + 0x3c8) * dVar10;
    }
    else {
      uVar11 = FUN_0040c850(local_a8);
      uVar12 = FUN_0040c850(dVar15);
      dVar10 = (double)FUN_00b90630(uVar11,uVar12,dVar7);
      local_c0 = *(double *)(param_3 + 0x3d8) + *(double *)(param_3 + 0x3c8) * dVar10;
    }
    dVar10 = (double)FUN_0040c850(uVar8);
    if (local_c0 < dVar10) {
      bVar6 = true;
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  else {
    FUN_016e9f80(param_2,param_3,bVar6,100);
  }
  *param_5 = dVar9;
  return bVar6;
}

