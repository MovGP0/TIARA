/* Ghidra address: 0144bcd0 */
/* Ghidra symbol: FUN_0144bcd0 */


void FUN_0144bcd0(double *param_1,double *param_2,double param_3,double param_4,int *param_5,
                 double *param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_19b0;
  undefined1 local_19a8 [8];
  double adStack_19a0 [398];
  double adStack_d30 [5];
  double local_d08 [108];
  undefined1 local_9a8;
  
  local_9a8 = 0;
  local_19a8[0] = 0;
  pdVar5 = adStack_d30 + 5;
  for (lVar4 = 400; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_1;
    param_1 = param_1 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = adStack_19a0 + 3;
  for (lVar4 = 400; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_2;
    param_2 = param_2 + 1;
    pdVar5 = pdVar5 + 1;
  }
  iVar2 = *param_5 + -1;
  if (0 < iVar2) {
    do {
      iVar3 = 1;
      if (0 < iVar2) {
        pdVar5 = adStack_d30 + 7;
        pdVar6 = adStack_19a0;
        iVar7 = iVar2;
        do {
          pdVar6 = pdVar6 + 5;
          lVar4 = (longlong)(iVar3 + 1);
          if (adStack_d30[lVar4 * 5 + 2] <= *pdVar5 && *pdVar5 != adStack_d30[lVar4 * 5 + 2]) {
            dVar8 = pdVar5[-2];
            dVar9 = pdVar5[-1];
            dVar11 = *pdVar5;
            dVar10 = pdVar5[1];
            dVar1 = pdVar5[2];
            pdVar5[-2] = adStack_d30[lVar4 * 5];
            pdVar5[-1] = adStack_d30[lVar4 * 5 + 1];
            *pdVar5 = adStack_d30[lVar4 * 5 + 2];
            pdVar5[1] = adStack_d30[lVar4 * 5 + 3];
            pdVar5[2] = adStack_d30[lVar4 * 5 + 4];
            adStack_d30[lVar4 * 5] = dVar8;
            adStack_d30[lVar4 * 5 + 1] = dVar9;
            adStack_d30[lVar4 * 5 + 2] = dVar11;
            adStack_d30[lVar4 * 5 + 3] = dVar10;
            adStack_d30[lVar4 * 5 + 4] = dVar1;
          }
          if (adStack_19a0[lVar4 * 5] <= *pdVar6 && *pdVar6 != adStack_19a0[lVar4 * 5]) {
            dVar8 = pdVar6[-2];
            dVar9 = pdVar6[-1];
            dVar11 = *pdVar6;
            dVar10 = pdVar6[1];
            dVar1 = pdVar6[2];
            pdVar6[-2] = *(double *)(local_19a8 + lVar4 * 0x28 + -8);
            pdVar6[-1] = *(double *)(local_19a8 + lVar4 * 0x28);
            *pdVar6 = adStack_19a0[lVar4 * 5];
            pdVar6[1] = adStack_19a0[lVar4 * 5 + 1];
            pdVar6[2] = adStack_19a0[lVar4 * 5 + 2];
            *(double *)(local_19a8 + lVar4 * 0x28 + -8) = dVar8;
            *(double *)(local_19a8 + lVar4 * 0x28) = dVar9;
            adStack_19a0[lVar4 * 5] = dVar11;
            adStack_19a0[lVar4 * 5 + 1] = dVar10;
            adStack_19a0[lVar4 * 5 + 2] = dVar1;
          }
          iVar3 = iVar3 + 1;
          pdVar5 = pdVar5 + 5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar3 = 0;
  iVar2 = *param_5;
  if (0 < iVar2) {
    pdVar6 = adStack_d30;
    pdVar5 = adStack_19a0 + 3;
    do {
      pdVar6 = pdVar6 + 5;
      *pdVar6 = param_3 * *pdVar6;
      *pdVar5 = param_4 * *pdVar5;
      if ((pdVar6[1] == pdVar5[1]) && (pdVar6[2] == pdVar5[2])) {
        iVar3 = iVar3 + 1;
        if (pdVar6[2] == 0.0) {
          *param_6 = *pdVar6 + *pdVar5;
          param_6[1] = pdVar6[1];
          param_6[2] = 0.0;
          param_6[3] = 0.0;
          param_6[4] = 0.0;
        }
        else {
          dStack_19b0 = 1.05151042798352e-316;
          dVar8 = (double)FUN_0040bcd0(pdVar6[3]);
          dStack_19b0 = 1.05151116908199e-316;
          dVar9 = (double)FUN_0040bcd0(pdVar5[3]);
          dVar11 = *pdVar6 * dVar8 + *pdVar5 * dVar9;
          dStack_19b0 = 1.05151294771832e-316;
          dVar8 = (double)FUN_0040bdd0(pdVar6[3]);
          dStack_19b0 = 1.05151368881679e-316;
          dVar9 = (double)FUN_0040bdd0(pdVar5[3]);
          dVar8 = *pdVar6 * dVar8 + *pdVar5 * dVar9;
          dStack_19b0 = 1.0515164555844e-316;
          dVar8 = (double)FUN_0040c760(dVar11 * dVar11 + dVar8 * dVar8);
          *param_6 = dVar8;
          param_6[1] = pdVar6[1];
          param_6[2] = pdVar6[2];
          dStack_19b0 = 1.05151798718791e-316;
          dVar8 = (double)FUN_0040bdd0(pdVar6[3]);
          dStack_19b0 = 1.05151872828638e-316;
          dVar9 = (double)FUN_0040bdd0(pdVar5[3]);
          dStack_19b0 = 1.05151946938484e-316;
          dVar11 = (double)FUN_0040bcd0(pdVar6[3]);
          dStack_19b0 = 1.05152021048331e-316;
          dVar10 = (double)FUN_0040bcd0(pdVar5[3]);
          dStack_19b0 = 1.05152297725093e-316;
          dVar8 = (double)FUN_0144bbe0(*pdVar6 * dVar8 + *pdVar5 * dVar9,
                                       *pdVar6 * dVar11 + *pdVar5 * dVar10);
          param_6[3] = dVar8;
          param_6[4] = 0.0;
        }
      }
      param_6 = param_6 + 5;
      pdVar5 = pdVar5 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_5 = iVar3;
  return;
}

