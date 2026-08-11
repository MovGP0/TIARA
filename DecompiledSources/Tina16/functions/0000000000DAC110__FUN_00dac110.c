/* Ghidra address: 00dac110 */
/* Ghidra symbol: FUN_00dac110 */


undefined8
FUN_00dac110(undefined8 param_1,longlong param_2,double param_3,double param_4,double *param_5,
            int param_6,undefined8 param_7,char param_8,char param_9,undefined8 param_10,
            double *param_11,int *param_12,byte *param_13,double param_14)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double local_c0;
  byte local_a9 [145];
  
  *param_13 = 0;
  local_a9[0] = 0;
  uVar12 = 0x3ff0000000000000;
  *param_11 = param_3;
  iVar4 = param_6 / 2;
  if (param_9 == '\0') {
    dVar6 = param_14 * *(double *)(param_2 + 0x3d8);
    dVar7 = (double)FUN_0040c850(param_4,(longlong)param_6 % 2 & 0xffffffff);
    dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + dVar6;
  }
  else {
    dVar6 = (double)FUN_00b90650(*(undefined8 *)(param_2 + 0x3d8),0x3e112e0be826d695);
    dVar6 = param_14 * dVar6;
    dVar7 = (double)FUN_0040c850(param_4);
    dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + dVar6;
  }
  dVar13 = param_14 * dVar6;
  if (1 < iVar4) {
    if (*param_5 <= param_4) {
      if (param_4 < param_5[(iVar4 + -1) * 2]) {
        iVar3 = iVar4 + -1;
        iVar5 = 1;
        if (0 < iVar3) {
          do {
            if (param_4 < param_5[iVar5 * 2]) {
              *param_12 = iVar5;
              dVar10 = (double)FUN_00b90620(dVar6,param_5[iVar5 * 2] - param_5[(iVar5 + -1) * 2]);
              dVar11 = (param_5[iVar5 * 2 + 1] - param_5[(iVar5 + -1) * 2 + 1]) / dVar10;
              dVar10 = (double)FUN_00c439d0(param_3,param_4,
                                            param_5[iVar5 * 2 + 1] +
                                            (param_4 - param_5[iVar5 * 2]) * dVar11,dVar11,dVar10,
                                            param_5[iVar5 * 2 + 1] - param_5[(iVar5 + -1) * 2 + 1],
                                            local_a9,0x4008000000000000);
              *param_13 = *param_13 | local_a9[0];
              if ((local_a9[0] != 0) &&
                 (dVar11 = (double)FUN_0040c850(dVar10 - param_3), dVar7 < dVar11)) {
                *param_13 = *param_13 | local_a9[0];
                *param_11 = dVar10;
                FUN_016e9f80(param_1,param_2,1,0x69);
                *param_13 = 1;
              }
              if (*param_12 < 2) {
                dVar7 = 1e+30;
              }
              else {
                dVar7 = (double)FUN_00b90620(dVar6,param_5[(*param_12 + -1) * 2] -
                                                   param_5[(*param_12 + -2) * 2]);
              }
              if (iVar4 + -1 < *param_12) {
                dVar11 = 1e+30;
              }
              else {
                dVar11 = (double)FUN_00b90620(dVar6,param_5[*param_12 * 2] -
                                                    param_5[(*param_12 + -1) * 2]);
              }
              dVar1 = param_5[(*param_12 + -1) * 2];
              if (dVar11 < dVar7) {
                local_c0 = (double)FUN_00dac070(param_7,dVar11,dVar1,dVar13);
              }
              else {
                local_c0 = (double)FUN_00dac070(param_7,dVar7,dVar1,dVar13);
              }
              if (*param_12 < 1) {
                dVar7 = 1e+30;
              }
              else {
                dVar7 = (double)FUN_00b90620(dVar6,param_5[*param_12 * 2] -
                                                   param_5[(*param_12 + -1) * 2]);
              }
              if (*param_12 < iVar4 + -1) {
                dVar11 = (double)FUN_00b90620(dVar6,param_5[(*param_12 + 1) * 2] -
                                                    param_5[*param_12 * 2]);
              }
              else {
                dVar11 = 1e+30;
              }
              dVar2 = param_5[*param_12 * 2];
              if (dVar11 < dVar7) {
                dVar13 = (double)FUN_00dac070(param_7,dVar11,dVar2,dVar13);
              }
              else {
                dVar13 = (double)FUN_00dac070(param_7,dVar7,dVar2,dVar13);
              }
              uVar8 = FUN_0040c850(dVar1);
              uVar9 = FUN_0040c850(dVar2);
              dVar7 = (double)FUN_00b90620(uVar8,uVar9);
              dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + dVar6;
              if ((dVar2 - dVar13 <= dVar10) || (dVar2 - dVar13 <= param_4)) {
                dVar13 = (double)FUN_00c43790(dVar10,param_4,dVar2 - dVar13,dVar2 + dVar13,local_a9,
                                              param_14,dVar7);
                *param_11 = dVar13;
                if ((local_a9[0] != 0) &&
                   (dVar13 = (double)FUN_0040c850(*param_11 - param_3), dVar7 < dVar13)) {
                  *param_13 = *param_13 | local_a9[0];
                  FUN_016e9f80(param_1,param_2,1,0x67);
                  *param_13 = 1;
                }
              }
              else if ((dVar10 <= dVar1 + local_c0) || (param_4 <= dVar1 + local_c0)) {
                dVar13 = (double)FUN_00c43790(dVar10,param_4,dVar1 - local_c0,dVar1 + local_c0,
                                              local_a9,param_14,dVar7);
                *param_11 = dVar13;
                if ((local_a9[0] != 0) &&
                   (dVar13 = (double)FUN_0040c850(*param_11 - param_3), dVar7 < dVar13)) {
                  *param_13 = *param_13 | local_a9[0];
                  FUN_016e9f80(param_1,param_2,1,0x68);
                  *param_13 = 1;
                }
              }
              else {
                *param_11 = dVar10;
              }
              break;
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        *param_12 = iVar4;
        uVar8 = FUN_00b90620(dVar6,param_5[(*param_12 + -1) * 2] - param_5[(*param_12 + -2) * 2]);
        dVar10 = param_5[(*param_12 + -1) * 2];
        dVar13 = (double)FUN_00dac070(param_7,uVar8,dVar10,dVar13);
        uVar8 = FUN_0040c850(param_5[(*param_12 + -1) * 2]);
        uVar9 = FUN_0040c850(param_5[(*param_12 + -2) * 2]);
        dVar7 = (double)FUN_00b90620(uVar8,uVar9);
        dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + dVar6;
        dVar13 = (double)FUN_00c43790(param_3,param_4,dVar10 - dVar13,dVar10 + dVar13,local_a9,
                                      param_14,dVar7);
        *param_11 = dVar13;
        if ((local_a9[0] != 0) &&
           (dVar13 = (double)FUN_0040c850(*param_11 - param_3), dVar7 < dVar13)) {
          *param_13 = *param_13 | local_a9[0];
          FUN_016e9f80(param_1,param_2,1,0x66);
          *param_13 = 1;
        }
      }
    }
    else {
      *param_12 = 0;
      uVar8 = FUN_00b90620(dVar6,param_5[2] - *param_5);
      dVar10 = *param_5;
      dVar13 = (double)FUN_00dac070(param_7,uVar8,dVar10,dVar13);
      uVar8 = FUN_0040c850(*param_5);
      uVar9 = FUN_0040c850(param_5[2]);
      dVar7 = (double)FUN_00b90620(uVar8,uVar9);
      dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + dVar6;
      dVar13 = (double)FUN_00c43790(param_3,param_4,dVar10 - dVar13,dVar10 + dVar13,local_a9,
                                    param_14,dVar7);
      *param_11 = dVar13;
      if ((local_a9[0] != 0) && (dVar13 = (double)FUN_0040c850(*param_11 - param_3), dVar7 < dVar13)
         ) {
        *param_13 = *param_13 | local_a9[0];
        FUN_016e9f80(param_1,param_2,1,0x65);
        *param_13 = 1;
      }
    }
    *param_13 = *param_13 | local_a9[0];
  }
  if ((*param_13 != 0) && (dVar13 = (double)FUN_0040c850(param_3 - param_4), dVar7 < dVar13)) {
    dVar7 = (double)FUN_00b90620(*param_11 - param_4,dVar7);
    uVar12 = FUN_0040c850(dVar7 / (param_3 - param_4));
  }
  if (param_8 == '\0') {
    uVar8 = FUN_00dad070(*param_11,param_5,param_6,param_7,param_10,param_12,param_14 * dVar6,1);
    uVar12 = FUN_00b90620(uVar12,0x3fb999999999999a);
    FUN_01b08810(param_2,uVar12);
  }
  else {
    uVar8 = FUN_00b90620(uVar12,0x3fb999999999999a);
  }
  return uVar8;
}

