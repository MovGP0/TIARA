/* Ghidra address: 011635e0 */
/* Ghidra symbol: FUN_011635e0 */


void FUN_011635e0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double *pdVar1;
  int iVar2;
  undefined8 in_RAX;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_88;
  double local_80 [12];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if ((!bVar5) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x45),0);
    iVar2 = FUN_00c42630(dVar6);
    dVar10 = *(double *)(param_1 + 0x38);
    dVar11 = *(double *)(param_1 + 0x38);
    dVar7 = (double)FUN_0040c850(dVar6 / *(double *)(param_1 + 0x18));
    pdVar1 = *(double **)(param_1 + 0x28);
    if ((pdVar1[1] + *pdVar1) / 2.0 < dVar7) {
      iVar4 = *(int *)(param_1 + 0x20);
      if (dVar7 < (pdVar1[iVar4 + -2] +
                  *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1) * 8)) / 2.0) {
        iVar4 = 1;
        bVar5 = false;
        while ((iVar4 <= *(int *)(param_1 + 0x20) + -1 && (!bVar5))) {
          lVar3 = (longlong)iVar4;
          if (dVar7 < (*(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) +
                      *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + 1) * 8)) / 2.0)
          {
            dVar8 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) -
                    *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1) * 8);
            dVar9 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + 1) * 8) -
                    *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8);
            if (*(int *)(param_1 + 0x40) == 1) {
              dVar10 = *(double *)(param_1 + 0x38) * dVar8;
              dVar11 = *(double *)(param_1 + 0x38) * dVar9;
            }
            if (*(double *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) - dVar10 <= dVar7)
            {
              if (*(double *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) + dVar11 <= dVar7
                 ) {
                local_88 = (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar4 + 1) * 8) -
                           *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8)) / dVar9
                ;
                local_80[0] = *(double *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8) +
                              (dVar7 - *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8)) *
                              local_88;
              }
              else {
                FUN_00daa5f0(dVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8),
                             dVar10,dVar11,
                             (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) -
                             *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar4 + -1) * 8)
                             ) / dVar8,
                             (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar4 + 1) * 8)
                             - *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8)) /
                             dVar9,local_80,&local_88);
              }
            }
            else {
              local_88 = (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) -
                         *(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar4 + -1) * 8)) /
                         dVar8;
              local_80[0] = *(double *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8) +
                            (dVar7 - *(double *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8)) *
                            local_88;
            }
            bVar5 = true;
          }
          iVar4 = iVar4 + 1;
        }
      }
      else {
        local_88 = (*(double *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar4 + -1) * 8) -
                   *(double *)
                    (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x20) + -2) * 8))
                   / (*(double *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1) * 8) -
                     *(double *)
                      (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 0x20) + -2) * 8
                      ));
        local_80[0] = *(double *)
                       (*(longlong *)(param_1 + 0x30) +
                       (longlong)(*(int *)(param_1 + 0x20) + -1) * 8) +
                      (dVar7 - *(double *)
                                (*(longlong *)(param_1 + 0x28) +
                                (longlong)(*(int *)(param_1 + 0x20) + -1) * 8)) * local_88;
      }
    }
    else {
      local_88 = ((*(double **)(param_1 + 0x30))[1] - **(double **)(param_1 + 0x30)) /
                 (*(double *)(*(longlong *)(param_1 + 0x28) + 8) - **(double **)(param_1 + 0x28));
      local_80[0] = **(double **)(param_1 + 0x30) +
                    (dVar7 - **(double **)(param_1 + 0x28)) * local_88;
    }
    dVar11 = (double)iVar2 * local_80[0];
    dVar10 = *(double *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x46) != '\0') {
      FUN_016ed320(param_2,*(char *)(param_1 + 0x48) + '\x03',
                   (double)iVar2 * local_80[0] - (local_88 * dVar6) / *(double *)(param_1 + 0x18),
                   local_88 / *(double *)(param_1 + 0x18),0);
    }
    local_88 = (local_88 * *(double *)(param_1 + 0x10)) / *(double *)(param_1 + 0x18);
    FUN_016ed320(param_2,*(char *)(param_1 + 0x48) + '\x01',dVar11 * dVar10 - local_88 * dVar6,
                 local_88,0);
  }
  return;
}

