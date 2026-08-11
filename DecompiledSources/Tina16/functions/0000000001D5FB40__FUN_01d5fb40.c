/* Ghidra address: 01d5fb40 */
/* Ghidra symbol: FUN_01d5fb40 */


/* WARNING: Removing unreachable block (ram,0x01d5fc42) */

void FUN_01d5fb40(double *param_1,double *param_2,double *param_3,longlong param_4,longlong param_5,
                 longlong param_6,double param_7,double param_8,double param_9,double param_10,
                 undefined8 param_11,double param_12,int *param_13)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM8_Qa;
  double unaff_XMM9_Qa;
  double unaff_XMM10_Qa;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  bVar1 = true;
  bVar2 = true;
  bVar3 = true;
  if (param_7 == 0.0) {
    local_128 = FUN_01b10ce0(param_11);
  }
  else if (0.0 < param_10 - param_7) {
    local_128 = FUN_01b10d30(param_11,param_10 - param_7);
  }
  else {
    local_128 = 0;
  }
  if (local_128 == 0) {
    *param_3 = 0.0;
    *param_2 = 0.0;
  }
  else {
    lVar5 = FUN_01b10cd0(param_11);
    dVar7 = param_10 - *(double *)(lVar5 + (longlong)local_128 * 8);
    local_f8 = (double)FUN_01d5ee20(param_7,param_7,param_8,param_9);
    if (dVar7 <= param_7) {
      local_e0 = 0.0;
    }
    else {
      dVar8 = (double)FUN_0040c760(dVar7 * dVar7 - param_7 * param_7);
      local_e0 = param_8 * dVar8;
    }
    dVar8 = (double)FUN_00c42a20(-param_9 * dVar7);
    dVar9 = (double)FUN_01d5ec10(local_e0);
    unaff_XMM10_Qa = param_8 * param_8 * param_7;
    if ((param_8 == 0.0) || (dVar7 < param_7)) {
      local_d8 = 0.0;
    }
    else {
      local_d8 = unaff_XMM10_Qa * dVar8 * dVar9;
    }
    dVar9 = (double)FUN_01d5e440(param_7,dVar7,param_7,local_f8,local_d8,param_7,dVar7);
    local_c0 = dVar9 / (dVar7 - param_7);
    *param_2 = local_c0;
    unaff_XMM12_Qa = (double)FUN_0040c850(param_12 * local_c0);
    dVar9 = (double)FUN_01d5e7b0(local_e0);
    local_c8 = (double)FUN_00c42a20(-param_9 * param_7);
    if ((dVar7 <= param_7) || (param_9 == 0.0)) {
      unaff_XMM9_Qa = 0.0;
    }
    else {
      unaff_XMM9_Qa = dVar8 * dVar9 - local_c8;
    }
    dVar8 = (double)FUN_01d5e3b0(param_7,dVar7,0,unaff_XMM9_Qa,param_7,dVar7);
    unaff_XMM8_Qa = dVar8 / (dVar7 - param_7);
    *param_3 = unaff_XMM8_Qa;
    unaff_XMM13_Qa = (double)FUN_0040c850(unaff_XMM8_Qa * param_12);
  }
  local_120 = 0.0;
  lVar5 = FUN_01b10cd0(param_11);
  iVar4 = FUN_01b10ce0(param_11);
  local_110 = param_10 - *(double *)(lVar5 + (longlong)iVar4 * 8);
  local_100 = local_110 - 0.0;
  local_e8 = -param_9 * local_110;
  local_d0 = (double)FUN_00c42a20();
  local_b0 = local_110;
  if (param_9 != 0.0) {
    if (local_110 == 0.0) {
      local_b0 = 0.0;
    }
    else {
      dVar7 = (double)FUN_01d5e9b0(-local_e8);
      dVar8 = (double)FUN_01d5e7b0(-local_e8);
      local_b0 = (dVar7 + dVar8) * local_110 * local_d0 - local_110;
    }
  }
  local_b8 = local_b0 / local_100;
  *param_1 = local_b8;
  dVar7 = (double)FUN_0040c850(local_b8 * param_12);
  local_124 = FUN_01b10ce0(param_11);
  if (0 < local_124) {
    do {
      dVar11 = local_b0;
      dVar9 = local_d8;
      dVar8 = local_f8;
      if ((bVar1 || bVar2) || (bVar3)) {
        local_118 = local_120;
        local_108 = local_110;
        local_120 = local_110;
        lVar5 = FUN_01b10cd0(param_11);
        local_110 = param_10 - *(double *)(lVar5 + (longlong)(local_124 + -1) * 8);
        lVar5 = FUN_01b10cd0(param_11);
        lVar6 = FUN_01b10cd0(param_11);
        local_100 = *(double *)(lVar5 + (longlong)local_124 * 8) -
                    *(double *)(lVar6 + (longlong)(local_124 + -1) * 8);
        local_e8 = -param_9 * local_110;
        local_d0 = (double)FUN_00c42a20();
      }
      if (bVar1) {
        if (param_9 == 0.0) {
          local_b0 = local_110;
        }
        else if (local_110 == 0.0) {
          local_b0 = 0.0;
        }
        else {
          dVar12 = (double)FUN_01d5e9b0(-local_e8);
          dVar10 = (double)FUN_01d5e7b0(-local_e8);
          local_b0 = (dVar12 + dVar10) * local_110 * local_d0 - local_110;
        }
        dVar11 = (local_b0 - dVar11) / local_100;
        *(double *)(param_4 + (longlong)local_124 * 8) = dVar11 - local_b8;
        dVar12 = (double)FUN_0040c850(*(undefined8 *)(param_4 + (longlong)local_124 * 8));
        local_b8 = dVar11;
        if (dVar12 <= dVar7) {
          bVar1 = false;
        }
      }
      else {
        *(undefined8 *)(param_4 + (longlong)local_124 * 8) = 0;
      }
      if (local_124 <= local_128) {
        if (bVar2 || bVar3) {
          if (local_110 <= param_7) {
            local_e0 = 0.0;
          }
          else {
            dVar11 = (double)FUN_0040c760(local_110 * local_110 - param_7 * param_7);
            local_e0 = param_8 * dVar11;
          }
        }
        if (bVar2) {
          local_f8 = local_d8;
          dVar11 = (double)FUN_01d5ec10(local_e0);
          if ((param_8 == 0.0) || (local_110 < param_7)) {
            local_d8 = 0.0;
          }
          else {
            local_d8 = unaff_XMM10_Qa * local_d0 * dVar11;
          }
          dVar11 = (double)FUN_01d5e440(local_120,local_110,local_120,dVar9,local_d8,local_120,
                                        local_110);
          dVar11 = dVar11 / local_100;
          dVar8 = (double)FUN_01d5e3b0(local_118,local_108,dVar8,dVar9,local_118,local_108);
          *(double *)(param_5 + (longlong)local_124 * 8) = (dVar11 - local_c0) + dVar8;
          dVar8 = (double)FUN_0040c850(*(undefined8 *)(param_5 + (longlong)local_124 * 8));
          local_c0 = dVar11;
          if (dVar8 <= unaff_XMM12_Qa) {
            bVar2 = false;
          }
        }
        else {
          *(undefined8 *)(param_5 + (longlong)local_124 * 8) = 0;
        }
        if (bVar3) {
          dVar8 = (double)FUN_01d5e7b0(local_e0);
          if ((local_110 <= param_7) || (param_9 == 0.0)) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = local_d0 * dVar8 - local_c8;
          }
          dVar9 = (double)FUN_01d5e3b0(local_120,local_110,unaff_XMM9_Qa,dVar8,local_120,local_110);
          dVar9 = dVar9 / local_100;
          *(double *)(param_6 + (longlong)local_124 * 8) = dVar9 - unaff_XMM8_Qa;
          dVar11 = (double)FUN_0040c850(*(undefined8 *)(param_6 + (longlong)local_124 * 8));
          unaff_XMM8_Qa = dVar9;
          unaff_XMM9_Qa = dVar8;
          if (dVar11 <= unaff_XMM13_Qa) {
            bVar3 = false;
          }
        }
        else {
          *(undefined8 *)(param_6 + (longlong)local_124 * 8) = 0;
        }
      }
      local_124 = local_124 + -1;
    } while (local_124 != 0);
  }
  *param_13 = local_128;
  return;
}

