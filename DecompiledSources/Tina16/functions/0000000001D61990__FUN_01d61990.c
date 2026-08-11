/* Ghidra address: 01d61990 */
/* Ghidra symbol: FUN_01d61990 */


void FUN_01d61990(undefined8 param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a0;
  longlong local_98;
  char local_89;
  
  local_89 = '\x01';
  local_a0 = param_2;
  local_98 = param_3;
  lVar5 = FUN_01b10cd0(*(undefined8 *)(param_2 + 0x4b0));
  if ((lVar5 != 0) && (*(int *)(local_98 + 0x168) == 0)) {
    *(undefined4 *)(local_98 + 0x168) = 1000;
    uVar6 = FUN_00409570(8000);
    *(undefined8 *)(local_98 + 0x130) = uVar6;
    uVar6 = FUN_00409570((longlong)(*(int *)(local_98 + 0x168) * 8));
    *(undefined8 *)(local_98 + 0x138) = uVar6;
    uVar6 = FUN_00409570((longlong)(*(int *)(local_98 + 0x168) * 8));
    *(undefined8 *)(local_98 + 0x140) = uVar6;
  }
  iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
  if (*(int *)(local_98 + 0x168) <= iVar2) {
    iVar2 = FUN_01b10d00(*(undefined8 *)(local_a0 + 0x4b0));
    *(int *)(local_98 + 0x168) = *(int *)(local_98 + 0x168) + iVar2;
    FUN_00409620(local_98 + 0x130,(longlong)(*(int *)(local_98 + 0x168) * 8));
    FUN_00409620(local_98 + 0x138,(longlong)(*(int *)(local_98 + 0x168) * 8));
    FUN_00409620(local_98 + 0x140,(longlong)(*(int *)(local_98 + 0x168) * 8));
  }
  lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
  if ((lVar5 != 0) && (*(int *)(local_98 + 0x16c) == 0)) {
    *(undefined4 *)(local_98 + 0x16c) = 1000;
    uVar6 = FUN_00409570(8000);
    *(undefined8 *)(local_98 + 0x148) = uVar6;
    uVar6 = FUN_00409570((longlong)(*(int *)(local_98 + 0x16c) * 8));
    *(undefined8 *)(local_98 + 0x150) = uVar6;
    uVar6 = FUN_00409570((longlong)(*(int *)(local_98 + 0x16c) * 8));
    *(undefined8 *)(local_98 + 0x158) = uVar6;
    uVar6 = FUN_00409570((longlong)(*(int *)(local_98 + 0x16c) * 8));
    *(undefined8 *)(local_98 + 0x160) = uVar6;
  }
  iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
  if (*(int *)(local_98 + 0x16c) <= iVar2) {
    iVar2 = FUN_01b10d00(*(undefined8 *)(local_a0 + 0x4b0));
    *(int *)(local_98 + 0x16c) = *(int *)(local_98 + 0x16c) + iVar2;
    FUN_00409620(local_98 + 0x148,(longlong)(*(int *)(local_98 + 0x16c) * 8));
    FUN_00409620(local_98 + 0x150,(longlong)(*(int *)(local_98 + 0x16c) * 8));
    FUN_00409620(local_98 + 0x158,(longlong)(*(int *)(local_98 + 0x16c) * 8));
    FUN_00409620(local_98 + 0x160,(longlong)(*(int *)(local_98 + 0x16c) * 8));
  }
  lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
  if (lVar5 != 0) {
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(double *)(*(longlong *)(local_98 + 0x148) + (longlong)iVar2 * 8) =
         *(double *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x178) * 8) -
         *(double *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x17c) * 8);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(double *)(*(longlong *)(local_98 + 0x158) + (longlong)iVar2 * 8) =
         *(double *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x180) * 8) -
         *(double *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x184) * 8);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x150) + (longlong)iVar2 * 8) =
         *(undefined8 *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x188) * 8)
    ;
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x160) + (longlong)iVar2 * 8) =
         *(undefined8 *)(*(longlong *)(local_a0 + 0x118) + (longlong)*(int *)(local_98 + 0x18c) * 8)
    ;
  }
  iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
  if (1 < iVar2) {
    lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    uVar6 = *(undefined8 *)(lVar5 + (longlong)(iVar2 + -2) * 8);
    lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    uVar9 = *(undefined8 *)(lVar5 + (longlong)(iVar2 + -1) * 8);
    lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    dVar1 = *(double *)(lVar5 + (longlong)iVar2 * 8);
    if (local_89 != '\0') {
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar4 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      local_c0 = *(undefined8 *)(*(longlong *)(local_98 + 0x148) + (longlong)iVar4 * 8);
      local_b8 = *(undefined8 *)(local_98 + 0xb8);
      local_b0 = *(undefined8 *)(local_98 + 0xc0);
      local_c8 = dVar1;
      local_89 = FUN_01d60770(uVar6,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x148) + (longlong)(iVar2 + -2) * 8),
                              uVar9,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x148) + (longlong)(iVar3 + -1) * 8))
      ;
    }
    if (local_89 != '\0') {
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar4 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      local_c0 = *(undefined8 *)(*(longlong *)(local_98 + 0x158) + (longlong)iVar4 * 8);
      local_b8 = *(undefined8 *)(local_98 + 0xb8);
      local_b0 = *(undefined8 *)(local_98 + 0xc0);
      local_c8 = dVar1;
      local_89 = FUN_01d60770(uVar6,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x158) + (longlong)(iVar2 + -2) * 8),
                              uVar9,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x158) + (longlong)(iVar3 + -1) * 8))
      ;
    }
    if (local_89 != '\0') {
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar4 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      local_c0 = *(undefined8 *)(*(longlong *)(local_98 + 0x150) + (longlong)iVar4 * 8);
      local_b8 = *(undefined8 *)(local_98 + 0xb8);
      local_b0 = *(undefined8 *)(local_98 + 0xc0);
      local_c8 = dVar1;
      local_89 = FUN_01d60770(uVar6,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x150) + (longlong)(iVar2 + -2) * 8),
                              uVar9,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x150) + (longlong)(iVar3 + -1) * 8))
      ;
    }
    if (local_89 != '\0') {
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar4 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      local_c0 = *(undefined8 *)(*(longlong *)(local_98 + 0x160) + (longlong)iVar4 * 8);
      local_b8 = *(undefined8 *)(local_98 + 0xb8);
      local_b0 = *(undefined8 *)(local_98 + 0xc0);
      local_c8 = dVar1;
      local_89 = FUN_01d60770(uVar6,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x160) + (longlong)(iVar2 + -2) * 8),
                              uVar9,*(undefined8 *)
                                     (*(longlong *)(local_98 + 0x160) + (longlong)(iVar3 + -1) * 8))
      ;
    }
  }
  iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
  if (0 < iVar2) {
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    dVar10 = (*(double *)(*(longlong *)(local_98 + 0x148) + (longlong)iVar2 * 8) +
             *(double *)(*(longlong *)(local_98 + 0x150) + (longlong)iVar3 * 8) *
             *(double *)(local_98 + 0x48)) * *(double *)(local_98 + 0x68);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    dVar11 = (*(double *)(*(longlong *)(local_98 + 0x148) + (longlong)(iVar2 + -1) * 8) +
             *(double *)(*(longlong *)(local_98 + 0x150) + (longlong)(iVar3 + -1) * 8) *
             *(double *)(local_98 + 0x48)) * *(double *)(local_98 + 0x68);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    dVar1 = dVar11;
    if (1 < iVar2) {
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      dVar1 = (*(double *)(*(longlong *)(local_98 + 0x148) + (longlong)(iVar2 + -2) * 8) +
              *(double *)(*(longlong *)(local_98 + 0x150) + (longlong)(iVar3 + -2) * 8) *
              *(double *)(local_98 + 0x48)) * *(double *)(local_98 + 0x68);
    }
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    if (1 < iVar2) {
      FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    }
    lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    lVar7 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    dVar12 = (dVar10 - dVar11) /
             (*(double *)(lVar5 + (longlong)iVar2 * 8) -
             *(double *)(lVar7 + (longlong)(iVar3 + -1) * 8));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    if (iVar2 < 2) {
      dVar13 = 0.0;
    }
    else {
      lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      lVar7 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
      iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      dVar13 = (dVar11 - dVar1) /
               (*(double *)(lVar5 + (longlong)(iVar2 + -1) * 8) -
               *(double *)(lVar7 + (longlong)(iVar3 + -2) * 8));
    }
    FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    if (1 < iVar2) {
      FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
      FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
      FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
      FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    }
    dVar8 = (double)FUN_0040c850(dVar12 - dVar13);
    uVar6 = FUN_0040c850(dVar12);
    uVar9 = FUN_0040c850(dVar13);
    dVar12 = (double)FUN_00b90620(uVar6,uVar9);
    if (*(double *)(local_98 + 0xa8) * dVar12 + *(double *)(local_98 + 0xb0) <= dVar8) {
      local_c8 = dVar1;
      FUN_01d61850(auStack_e8,local_a0 + 0x5d8,dVar10,dVar11);
    }
  }
  if ((local_89 != '\0') && (iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0)), 1 < iVar2)) {
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x148) + (longlong)(iVar2 + -1) * 8) =
         *(undefined8 *)(*(longlong *)(local_98 + 0x148) + (longlong)iVar3 * 8);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x158) + (longlong)(iVar2 + -1) * 8) =
         *(undefined8 *)(*(longlong *)(local_98 + 0x158) + (longlong)iVar3 * 8);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x150) + (longlong)(iVar2 + -1) * 8) =
         *(undefined8 *)(*(longlong *)(local_98 + 0x150) + (longlong)iVar3 * 8);
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(*(longlong *)(local_98 + 0x160) + (longlong)(iVar2 + -1) * 8) =
         *(undefined8 *)(*(longlong *)(local_98 + 0x160) + (longlong)iVar3 * 8);
    lVar5 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar2 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    lVar7 = FUN_01b10cd0(*(undefined8 *)(local_a0 + 0x4b0));
    iVar3 = FUN_01b10ce0(*(undefined8 *)(local_a0 + 0x4b0));
    *(undefined8 *)(lVar5 + (longlong)(iVar2 + -1) * 8) =
         *(undefined8 *)(lVar7 + (longlong)iVar3 * 8);
    FUN_01b10cf0(*(undefined8 *)(local_a0 + 0x4b0));
  }
  return;
}

