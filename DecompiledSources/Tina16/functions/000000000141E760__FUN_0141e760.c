/* Ghidra address: 0141e760 */
/* Ghidra symbol: FUN_0141e760 */


void FUN_0141e760(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined8 in_RAX;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((byte)param_4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << ((byte)param_4 & 0x1f) & 0xa2U) != 0
    ;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x80) != 0) {
        iVar4 = 2;
        dVar6 = (double)FUN_016ed780(param_3,param_4);
        while ((iVar4 < *(int *)(param_1 + 0x7c) &&
               (*(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar4 * 3) * 8) <=
                dVar6 - *(double *)(param_1 + 0x10)))) {
          iVar4 = iVar4 + 1;
        }
        dVar7 = *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -2) * 3) * 8);
        dVar1 = *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -1) * 3) * 8);
        dVar2 = *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar4 * 3) * 8);
        if ((dVar1 - dVar7 != 0.0) && (dVar2 - dVar1 != 0.0)) {
          if (dVar1 - dVar7 == 0.0) {
            dVar8 = 0.0;
            dVar9 = 0.0;
          }
          else {
            dVar8 = (((dVar6 - *(double *)(param_1 + 0x10)) - dVar1) *
                    ((dVar6 - *(double *)(param_1 + 0x10)) - dVar2)) / (dVar7 - dVar1);
            dVar9 = (((dVar6 - *(double *)(param_1 + 0x10)) - dVar7) *
                    ((dVar6 - *(double *)(param_1 + 0x10)) - dVar2)) / (dVar1 - dVar7);
          }
          if (dVar2 - dVar1 == 0.0) {
            dVar9 = 0.0;
            dVar6 = 0.0;
          }
          else {
            dVar9 = dVar9 / (dVar1 - dVar2);
            dVar6 = (((dVar6 - *(double *)(param_1 + 0x10)) - dVar7) *
                    ((dVar6 - *(double *)(param_1 + 0x10)) - dVar1)) / (dVar1 - dVar2);
          }
          if (dVar2 - dVar7 == 0.0) {
            dVar8 = 0.0;
            dVar9 = 0.0;
          }
          else {
            dVar8 = dVar8 / (dVar7 - dVar2);
            dVar6 = dVar6 / (dVar7 - dVar2);
          }
          *(double *)(param_1 + 0x60) =
               dVar8 * *(double *)
                        (*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -2) * 3 + 1) * 8) +
               dVar9 * *(double *)
                        (*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -1) * 3 + 1) * 8) +
               dVar6 * *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar4 * 3 + 1) * 8);
          *(double *)(param_1 + 0x68) =
               dVar8 * *(double *)
                        (*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -2) * 3 + 2) * 8) +
               dVar9 * *(double *)
                        (*(longlong *)(param_1 + 0x70) + (longlong)((iVar4 + -1) * 3 + 2) * 8) +
               dVar6 * *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar4 * 3 + 2) * 8);
        }
      }
      FUN_016ed320(param_2,*param_1 + '\x02',*(undefined8 *)(param_1 + 0x60),0,0);
      FUN_016ed320(param_2,*param_1 + '\x04',*(undefined8 *)(param_1 + 0x68),0,0);
    }
    else {
      if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],param_1[4],
                                     0);
        dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x04',1,0)
        ;
        *(double *)(param_1 + 0x60) = dVar6 + dVar7 * *(double *)(param_1 + 8);
        dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],
                                     0);
        dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,0)
        ;
        *(double *)(param_1 + 0x68) = dVar6 + dVar7 * *(double *)(param_1 + 8);
      }
      else {
        *(double *)(param_1 + 0x60) =
             *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x40) * *(double *)(param_1 + 8);
        *(double *)(param_1 + 0x68) =
             *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x38) * *(double *)(param_1 + 8);
      }
      pdVar3 = *(double **)(param_1 + 0x70);
      *pdVar3 = *(double *)(param_1 + 0x10) * -2.0;
      pdVar3[3] = -*(double *)(param_1 + 0x10);
      pdVar3[6] = 0.0;
      pdVar3[1] = *(double *)(param_1 + 0x60);
      pdVar3[4] = *(double *)(param_1 + 0x60);
      pdVar3[7] = *(double *)(param_1 + 0x60);
      pdVar3[2] = *(double *)(param_1 + 0x68);
      pdVar3[5] = *(double *)(param_1 + 0x68);
      pdVar3[8] = *(double *)(param_1 + 0x68);
      param_1[0x7c] = '\x02';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
    }
  }
  return;
}

