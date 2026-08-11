/* Ghidra address: 0164ccc0 */
/* Ghidra symbol: FUN_0164ccc0 */


void FUN_0164ccc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM8_Qa;
  undefined1 local_78 [72];
  ulonglong uVar6;
  
  dVar11 = *(double *)
            (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8);
  dVar12 = dVar11;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = (longlong)iVar2;
        *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) =
             (*(double *)
               (*(longlong *)(param_3 + 0x118) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
             *(double *)
              (*(longlong *)(param_3 + 0x118) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0xc) * 8)) -
             (*(double *)
               (*(longlong *)(param_3 + 0x128) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
             *(double *)
              (*(longlong *)(param_3 + 0x128) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0xc) * 8));
        dVar12 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) *
                          *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0xc) == '\x03') {
      unaff_XMM8_Qa =
           *(double *)
            (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 2) * 8);
      dVar12 = unaff_XMM8_Qa;
    }
    uVar5 = *(uint *)(param_1 + 4) - 1;
    uVar6 = (ulonglong)uVar5;
    iVar4 = 0;
    if (-1 < (int)uVar5) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 4);
      do {
        lVar3 = (longlong)iVar4;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar3 * 0xc) == '\0') {
          *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) =
               (*(double *)
                 (*(longlong *)(param_3 + 0x118) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
               *(double *)
                (*(longlong *)(param_3 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0xc) * 8)) -
               (*(double *)
                 (*(longlong *)(param_3 + 0x128) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
               *(double *)
                (*(longlong *)(param_3 + 0x128) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0xc) * 8));
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) =
               *(double *)
                (*(longlong *)(param_3 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
               *(double *)
                (*(longlong *)(param_3 + 0x128) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8);
        }
        dVar12 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) *
                          *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8);
        iVar4 = iVar4 + 1;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
    bVar1 = *(byte *)(param_1 + 0xc);
    if (bVar1 < 8) {
      bVar7 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f) & 0xfcU) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      if (bVar1 == 4) {
        FUN_0165adb0(local_78,param_3,*(undefined8 *)(param_1 + 0x58),0);
      }
      else if (bVar1 == 5) {
        FUN_00c43d30(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8));
      }
      if (*(char *)(param_1 + 0xc) == '\x03') {
        dVar12 = dVar11 + *(double *)(param_1 + 0x80) * (dVar12 - unaff_XMM8_Qa);
      }
    }
  }
  uVar8 = FUN_0040c850(dVar11 - dVar12);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar9 = FUN_0040c850(dVar11);
    uVar10 = FUN_0040c850(dVar12);
    dVar11 = (double)FUN_00b90620(uVar9,uVar10);
    dVar11 = *(double *)(param_3 + 0x3d0) + *(double *)(param_3 + 0x3c8) * dVar11;
  }
  else {
    uVar9 = FUN_0040c850(dVar11);
    uVar10 = FUN_0040c850(dVar12);
    dVar11 = (double)FUN_00b90620(uVar9,uVar10);
    dVar11 = *(double *)(param_3 + 0x3d8) + *(double *)(param_3 + 0x3c8) * dVar11;
  }
  dVar12 = (double)FUN_0040c850(uVar8);
  if (dVar11 < dVar12) {
    FUN_016e9f80(param_2,param_3,1,10);
  }
  return;
}

