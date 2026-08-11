/* Ghidra address: 01d49c20 */
/* Ghidra symbol: FUN_01d49c20 */


void FUN_01d49c20(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM8_Qa;
  
  FUN_016ee1f0(param_2,param_1,0x48);
  uVar9 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),0,0);
  FUN_016ed320(param_2,1,0,1.0 / *(double *)(param_1 + 0x38),0);
  cVar5 = (char)param_4;
  if (cVar5 == '\x01') {
    FUN_016ed320(param_2,2,uVar9,0,0);
  }
  else if (cVar5 == '\x06') {
    dVar10 = (double)FUN_016ed780(param_3,param_4);
    dVar11 = (double)FUN_016ed7b0(param_3,param_4);
    if (dVar11 == 0.0) {
      FUN_0040d200(*(undefined8 *)(param_1 + 0x28),(longlong)(*(int *)(param_1 + 0x24) * 8),0);
      FUN_0040d200(*(undefined8 *)(param_1 + 0x30),(longlong)(*(int *)(param_1 + 0x24) * 8),0);
    }
    if (*(int *)(param_1 + 0x18) < 20000) {
      if (*(double *)(param_1 + 8) <= dVar10) {
        while ((dVar10 - *(double *)(param_1 + 8) <
                *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8)
               && (1 < *(int *)(param_1 + 0x1c)))) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
        dVar11 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x1c) * 8)
        ;
        dVar2 = *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        while ((iVar6 = *(int *)(param_1 + 0x1c),
               *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8) <=
               dVar10 - *(double *)(param_1 + 8) && (iVar6 < *(int *)(param_1 + 0x18) + -1))) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        dVar3 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        dVar4 = *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8);
        dVar12 = dVar11;
        if (dVar4 - dVar2 != 0.0) {
          dVar12 = dVar11 + (((dVar10 - *(double *)(param_1 + 8)) - dVar2) / (dVar4 - dVar2)) *
                            (dVar3 - dVar11);
        }
        if (dVar4 - dVar2 != 0.0) {
          unaff_XMM8_Qa = (dVar3 - dVar11) / (dVar4 - dVar2);
        }
        FUN_016ed320(param_2,CONCAT71((int7)(int3)((uint)iVar6 >> 8),2),dVar12,unaff_XMM8_Qa,0);
        pdVar1 = (double *)
                 (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8);
        if (dVar10 < *pdVar1 || dVar10 == *pdVar1) {
          iVar6 = *(int *)(param_1 + 0x18);
          if ((iVar6 != 1) &&
             (dVar10 <= *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar6 + -1) * 8))) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar6 + -1) * 8) = uVar9;
            *(double *)
             (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8) =
                 dVar10;
          }
        }
        else {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               uVar9;
          *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               dVar10;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          if (19999 < *(int *)(param_1 + 0x18)) {
            iVar6 = *(int *)(param_1 + 0x1c);
            iVar8 = *(int *)(param_1 + 0x18) + -1;
            if (iVar6 <= iVar8) {
              iVar8 = (iVar8 - iVar6) + 1;
              do {
                lVar7 = (longlong)iVar6;
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x28) +
                 (longlong)((iVar6 - *(int *)(param_1 + 0x1c)) + 1) * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar7 * 8);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x30) +
                 (longlong)((iVar6 - *(int *)(param_1 + 0x1c)) + 1) * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 8);
                *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar7 * 8) = 0;
                *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 8) = 0;
                iVar6 = iVar6 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            *(int *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c)) + 1;
            *(undefined4 *)(param_1 + 0x1c) = 1;
          }
        }
      }
      else {
        FUN_016ed320(param_2,2,0,0,0);
        iVar6 = *(int *)(param_1 + 0x18);
        if ((iVar6 == 1) ||
           (pdVar1 = (double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar6 + -1) * 8),
           *pdVar1 <= dVar10 && dVar10 != *pdVar1)) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 8) = uVar9;
          *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8) =
               dVar10;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x18);
          if ((iVar6 != 1) &&
             (dVar10 <= *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar6 + -1) * 8))) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar6 + -1) * 8) = uVar9;
            *(double *)
             (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8) =
                 dVar10;
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
  else if (cVar5 == '\b') {
    FUN_016ed320(param_2,2,*(undefined8 *)(param_1 + 8),0,0);
  }
  FUN_016ea050(param_2,param_1,0x48);
  return;
}

