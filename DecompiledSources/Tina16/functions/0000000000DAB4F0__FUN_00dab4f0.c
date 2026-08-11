/* Ghidra address: 00dab4f0 */
/* Ghidra symbol: FUN_00dab4f0 */


undefined8
FUN_00dab4f0(undefined8 param_1,longlong param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,double param_8,double param_9,double param_10,
            double param_11,char param_12,char param_13,char param_14,undefined8 param_15,
            undefined8 param_16,undefined8 param_17,undefined8 param_18,double *param_19,
            byte *param_20,char param_21,double param_22)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_b8;
  byte local_99 [145];
  
  *param_20 = 0;
  local_99[0] = 0;
  local_b8 = 0x3ff0000000000000;
  *param_19 = param_3;
  dVar7 = param_7 + param_8;
  dVar8 = param_6 - param_9;
  dVar9 = dVar7 / param_11 - param_5;
  dVar10 = dVar8 / param_11 - param_5;
  dVar1 = (double)FUN_0040c850(dVar10 - dVar9);
  if (param_14 == '\x02') {
    uVar2 = FUN_00b90650(*(undefined8 *)(param_2 + 0x3d8),0x3e112e0be826d695);
    dVar3 = (double)FUN_00b90650(uVar2,param_10 * dVar1 + 1e-30);
    dVar3 = param_22 * dVar3;
    dVar4 = (double)FUN_0040c850(param_4);
    dVar11 = *(double *)(param_2 + 0x3c8) * dVar4 + dVar3;
    dVar4 = (double)FUN_0040c850(param_4);
    dVar4 = *(double *)(param_2 + 0x418) * dVar4 + *(double *)(param_2 + 0x410);
  }
  else {
    uVar2 = FUN_00b90650(*(undefined8 *)(param_2 + 0x3d8),0x3e112e0be826d695);
    dVar3 = (double)FUN_00b90650(uVar2,param_10 * dVar1 + 1e-30);
    dVar3 = param_22 * dVar3;
    dVar4 = (double)FUN_0040c850(param_4);
    dVar11 = *(double *)(param_2 + 0x3c8) * dVar4 + dVar3;
    dVar4 = (double)FUN_0040c850(param_4);
    dVar4 = *(double *)(param_2 + 0x418) * dVar4 + *(double *)(param_2 + 0x408) / param_11;
  }
  dVar6 = param_10;
  if (param_12 != '\0') {
    if (param_21 == '\x01') {
      uVar2 = FUN_0040c850(dVar10);
      uVar5 = FUN_0040c850(param_4);
      dVar1 = (double)FUN_00b90650(uVar2,uVar5);
      param_10 = param_10 * dVar1 + param_22 * dVar3;
      dVar6 = param_10;
    }
    else if (param_21 == '\x02') {
      uVar2 = FUN_0040c850(dVar9);
      uVar5 = FUN_0040c850(param_4);
      dVar1 = (double)FUN_00b90650(uVar2,uVar5);
      param_10 = param_10 * dVar1 + param_22 * dVar3;
      dVar6 = param_10;
    }
    else {
      uVar2 = FUN_0040c850(dVar10);
      uVar2 = FUN_00b90620(uVar2,dVar1 * 1e-10);
      dVar6 = (double)FUN_00b90650(uVar2,dVar1);
      uVar2 = FUN_0040c850(dVar9);
      uVar2 = FUN_00b90620(uVar2,dVar1 * 1e-10);
      dVar1 = (double)FUN_00b90650(uVar2,dVar1);
      dVar1 = param_10 * dVar1;
      param_10 = param_10 * dVar6 + param_22 * dVar3;
      dVar6 = dVar1 + param_22 * dVar3;
    }
  }
  if ((param_21 != '\0') || (0.0 < (dVar8 - param_10) - (dVar7 + dVar6))) {
    *param_19 = param_3;
    if ((param_21 == '\x01') || (dVar9 < param_4)) {
      if ((param_21 == '\x02') || (param_4 < dVar10)) {
        dVar1 = param_3;
        if (param_21 == '\0') {
          dVar1 = (dVar8 - dVar7) / (dVar10 - dVar9);
          dVar1 = (double)FUN_00c439d0(param_3,param_4,dVar8 + (param_4 - dVar10) * dVar1,dVar1,
                                       dVar10 - dVar9,dVar8 - dVar7,local_99,param_22);
          *param_20 = *param_20 | local_99[0];
          if (local_99[0] != 0) {
            *param_19 = dVar1;
            FUN_016e9f80(param_1,param_2,1,100);
            *param_20 = 1;
          }
        }
        if ((param_21 == '\x02') || (dVar1 < dVar10)) {
          if ((param_21 == '\x01') || (dVar9 <= dVar1)) {
            *param_19 = dVar1;
          }
          else {
            dVar1 = (double)FUN_00c43520(dVar1,param_4,dVar9 - dVar6,dVar9 + dVar6,local_99,param_22
                                         ,dVar11);
            *param_19 = dVar1;
            *param_20 = *param_20 | local_99[0];
            if (local_99[0] != 0) {
              FUN_016e9f80(param_1,param_2,1,0x68);
              *param_20 = 1;
            }
          }
        }
        else {
          dVar1 = (double)FUN_00c43520(dVar1,param_4,dVar10 - param_10,dVar10 + param_10,local_99,
                                       param_22,dVar11);
          *param_19 = dVar1;
          *param_20 = *param_20 | local_99[0];
          if (local_99[0] != 0) {
            FUN_016e9f80(param_1,param_2,1,0x67);
            *param_20 = 1;
          }
        }
      }
      else if (dVar10 < param_3) {
        *param_19 = param_3;
      }
      else {
        dVar1 = (double)FUN_00c43520(param_3,param_4,dVar10 - param_10,dVar10 + param_10,local_99,
                                     param_22,dVar11);
        *param_19 = dVar1;
        *param_20 = *param_20 | local_99[0];
        if (local_99[0] != 0) {
          FUN_016e9f80(param_1,param_2,1,0x66);
          *param_20 = 1;
        }
      }
    }
    else if (param_3 < dVar9) {
      *param_19 = param_3;
    }
    else {
      dVar1 = (double)FUN_00c43520(param_3,param_4,dVar9 - dVar6,dVar9 + dVar6,local_99,param_22,
                                   dVar11);
      *param_19 = dVar1;
      *param_20 = *param_20 | local_99[0];
      if (local_99[0] != 0) {
        FUN_016e9f80(param_1,param_2,1,0x65);
        *param_20 = 1;
      }
    }
    *param_20 = *param_20 | local_99[0];
  }
  if ((*param_20 != 0) && (dVar1 = (double)FUN_0040c850(param_3 - param_4), dVar3 < dVar1)) {
    dVar1 = (double)FUN_00b90620(*param_19 - param_4,dVar4);
    local_b8 = FUN_0040c850(dVar1 / (param_3 - param_4));
  }
  if (param_13 == '\0') {
    FUN_00dab100(*param_19,param_5,param_6,param_7,param_9,param_8,param_10,dVar6,param_11,0,
                 param_15,param_16,param_17,param_18,param_21,1);
    FUN_01b08810(param_2,local_b8);
  }
  return local_b8;
}

