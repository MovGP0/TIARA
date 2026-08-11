/* Ghidra address: 01d49300 */
/* Ghidra symbol: FUN_01d49300 */


void FUN_01d49300(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM8_Qa;
  
  cVar6 = (char)param_4;
  FUN_016ee1f0(param_2,param_1,0x50);
  uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),0,0);
  FUN_016ed320(param_2,1,0,1.0 / *(double *)(param_1 + 0x38),0);
  if (cVar6 == '\x01') {
    FUN_016ed320(param_2,2,uVar10,0,0);
  }
  else if (cVar6 == '\x06') {
    dVar11 = (double)FUN_016ed780(param_3,param_4);
    if (*(int *)(param_1 + 0x18) < 20000) {
      if (*(double *)(param_1 + 8) <= dVar11) {
        while ((dVar11 - *(double *)(param_1 + 8) <
                *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8)
               && (1 < *(int *)(param_1 + 0x1c)))) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
        dVar2 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        dVar3 = *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        while ((iVar7 = *(int *)(param_1 + 0x1c),
               *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 8) <=
               dVar11 - *(double *)(param_1 + 8) && (iVar7 < *(int *)(param_1 + 0x18) + -1))) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        dVar4 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        dVar5 = *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        dVar12 = dVar2;
        if (dVar5 - dVar3 != 0.0) {
          dVar12 = dVar2 + (((dVar11 - *(double *)(param_1 + 8)) - dVar3) / (dVar5 - dVar3)) *
                           (dVar4 - dVar2);
        }
        if (dVar5 - dVar3 != 0.0) {
          unaff_XMM8_Qa = (dVar4 - dVar2) / (dVar5 - dVar3);
        }
        FUN_016ed320(param_2,CONCAT71((int7)(int3)((uint)iVar7 >> 8),2),dVar12,unaff_XMM8_Qa,0);
        pdVar1 = (double *)
                 (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8);
        if (dVar11 < *pdVar1 || dVar11 == *pdVar1) {
          iVar7 = *(int *)(param_1 + 0x18);
          if ((iVar7 != 1) &&
             (dVar11 <= *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar7 + -1) * 8))) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar7 + -1) * 8) = uVar10;
            *(double *)
             (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8) =
                 dVar11;
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               uVar10;
          *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               dVar11;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          if (19999 < *(int *)(param_1 + 0x18)) {
            iVar7 = *(int *)(param_1 + 0x1c);
            iVar9 = *(int *)(param_1 + 0x18) + -1;
            if (iVar7 <= iVar9) {
              iVar9 = (iVar9 - iVar7) + 1;
              do {
                lVar8 = (longlong)iVar7;
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x28) +
                 (longlong)((iVar7 - *(int *)(param_1 + 0x1c)) + 1) * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x30) +
                 (longlong)((iVar7 - *(int *)(param_1 + 0x1c)) + 1) * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8 * 8);
                *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8) = 0;
                *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8 * 8) = 0;
                iVar7 = iVar7 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            *(int *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c)) + 1;
            *(undefined4 *)(param_1 + 0x1c) = 1;
          }
        }
      }
      else {
        FUN_016ed320(param_2,2,0,0,0);
        iVar7 = *(int *)(param_1 + 0x18);
        if ((iVar7 == 1) ||
           (pdVar1 = (double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar7 + -1) * 8),
           *pdVar1 <= dVar11 && dVar11 != *pdVar1)) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 8) = uVar10;
          *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               dVar11;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x18);
          if ((iVar7 != 1) &&
             (dVar11 <= *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar7 + -1) * 8))) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar7 + -1) * 8) = uVar10;
            *(double *)
             (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8) =
                 dVar11;
          }
        }
      }
    }
    else {
      if (*(double *)(param_1 + 0x10) == 0.0) {
        *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + 1.0;
      }
      FUN_016ed320(param_2,2,0,0,0);
    }
  }
  else if (cVar6 == '\b') {
    FUN_016ed320(param_2,2,*(undefined8 *)(param_1 + 8),0,0);
  }
  FUN_016ea050(param_2,param_1,0x50);
  return;
}

