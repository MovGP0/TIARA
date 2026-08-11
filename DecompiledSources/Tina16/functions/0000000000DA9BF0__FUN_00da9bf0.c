/* Ghidra address: 00da9bf0 */
/* Ghidra symbol: FUN_00da9bf0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00da9bf0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [96];
  
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (1 < *(int *)(param_1 + 0x20)) {
      dVar7 = **(double **)(param_1 + 8) - **(double **)(param_1 + 0x10);
      dVar8 = **(double **)(param_1 + 0x30) - **(double **)(param_1 + 8);
      dVar9 = dVar8;
      if (dVar7 < dVar8) {
        dVar9 = dVar7;
      }
      iVar4 = *(int *)(param_1 + 0x28);
      iVar2 = 1;
      if (0 < iVar4) {
        do {
          lVar1 = (longlong)iVar2;
          dVar5 = *(double *)(*(longlong *)(param_1 + 0x10) + lVar1 * 8);
          if (dVar5 < 0.0) {
            dVar5 = -dVar5;
          }
          dVar6 = *(double *)(*(longlong *)(param_1 + 8) + lVar1 * 8);
          if (dVar6 < 0.0) {
            dVar6 = -dVar6;
          }
          if (dVar5 < dVar6) {
            dVar5 = dVar6;
          }
          dVar6 = *(double *)(*(longlong *)(param_1 + 0x30) + lVar1 * 8);
          if (dVar6 < 0.0) {
            dVar6 = -dVar6;
          }
          if (dVar5 < dVar6) {
            dVar5 = dVar6;
          }
          if (dVar5 < 1e-30) {
            dVar5 = 1e-30;
          }
          dVar5 = ((*(double *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) -
                   *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 8)) * dVar8 -
                  (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8) -
                  *(double *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8)) * dVar7) /
                  (dVar9 * dVar5);
          *(double *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8) + dVar5;
          dVar6 = 1.0 - (double)(*(int *)(param_1 + 0x20) + -1) / (double)_DAT_0202da78;
          dVar5 = (double)FUN_0040c850(dVar5);
          if ((DAT_0202da68 * dVar6 < dVar5) ||
             (dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                            (*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8)),
             DAT_0202da70 * dVar6 < dVar5)) {
            uVar3 = *(undefined8 *)(param_1 + 8);
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            *(undefined4 *)(param_1 + 0x20) = 1;
            FUN_0040d200(*(longlong *)(param_1 + 0x18) + 8,(longlong)(*(int *)(param_1 + 0x28) * 8),
                         0);
            FUN_00da9b00(auStack_78);
            return uVar3;
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00da9b00(auStack_78);
    uVar3 = 0;
  }
  return uVar3;
}

