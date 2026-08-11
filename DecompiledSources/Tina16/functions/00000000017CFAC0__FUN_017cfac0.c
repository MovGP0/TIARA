/* Ghidra address: 017cfac0 */
/* Ghidra symbol: FUN_017cfac0 */


void FUN_017cfac0(longlong param_1,undefined8 param_2,byte *param_3,double param_4,double param_5,
                 double param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_SI;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  longlong local_e0;
  byte local_d1;
  byte *local_d0;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  
  local_e0 = param_1;
  FUN_01cc6510(param_2);
  local_60 = param_5;
  local_68 = param_6;
  local_d1 = *param_3;
  if (local_d1 < 8) {
    uVar4 = 1 << (local_d1 & 0x1f);
    bVar9 = (uVar4 & 0xfe) != 0;
    uVar5 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar9);
  }
  else {
    uVar5 = 0;
    bVar9 = false;
  }
  if (!bVar9) {
    if ((byte)(local_d1 - 8) < 8) {
      bVar9 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_d1 - 8 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) {
      if (local_d1 == 9) {
        pbVar3 = param_3 + 1;
      }
      else {
        pbVar3 = param_3;
        if ((7 < (byte)(local_d1 - 8) || (1 << (local_d1 - 8 & 0x1f) & 0xcU) == 0) &&
           (pbVar3 = local_d0, local_d1 == 8)) {
          pbVar3 = *(byte **)(param_3 + 1);
        }
      }
      goto LAB_017cfbe4;
    }
  }
  unaff_SI = *(undefined2 *)(param_3 + 0x11);
  pbVar3 = *(byte **)(param_3 + 1);
LAB_017cfbe4:
  local_d0 = pbVar3;
  pbVar3 = local_d0;
  if (local_d1 < 9) {
    if (local_d1 == 8) {
      iVar8 = *(int *)(param_3 + 0x19);
      local_f8 = 0;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + 0x70))(local_e0,6,param_5,local_d0);
      FUN_017cf560(auStack_118,local_60,param_4 + dVar12);
      dVar12 = local_60;
      while (dVar12 = dVar12 + (param_6 - param_5) / (double)iVar8, dVar12 < local_68) {
        local_f8 = 0;
        dVar10 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                   (local_e0,6,dVar12,local_d0);
        FUN_017cf580(auStack_118,dVar12,param_4 + dVar10);
      }
      local_f8 = 0;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,local_68,local_d0);
      FUN_017cf580(auStack_118,local_68,param_4 + dVar12);
    }
    else {
      if (local_d1 < 5) {
        if (local_d1 != 4) {
          if (local_d1 == 1) {
            local_70 = *(undefined8 *)local_d0;
            local_78 = *(double *)(local_d0 + 8);
            FUN_017cf630(auStack_118);
            return;
          }
          if (local_d1 != 2) {
            if (local_d1 != 3) {
              return;
            }
            local_80 = *(double *)(local_d0 + 0x10);
            local_90 = *(double *)(local_d0 + 0x18) + local_80;
            local_98 = *(double *)(local_d0 + 0x20) + local_90;
            local_a0 = *(double *)(local_d0 + 0x28) + local_98;
            local_b0 = *(double *)(local_d0 + 0x30) + local_a0;
            local_b8 = *(double *)(local_d0 + 0x38) + local_b0;
            local_88 = *(undefined8 *)local_d0;
            local_a8 = *(undefined8 *)(local_d0 + 8);
            local_78 = *(double *)(local_d0 + 0x10) + *(double *)(local_d0 + 0x18) +
                       *(double *)(local_d0 + 0x20) + *(double *)(local_d0 + 0x28) +
                       *(double *)(local_d0 + 0x30) + *(double *)(local_d0 + 0x38);
            FUN_017cf560(auStack_118,0,param_4);
            FUN_017cf580(auStack_118,*(undefined8 *)(local_d0 + 0x40),param_4);
            for (dVar12 = *(double *)(local_d0 + 0x40); dVar12 <= local_68;
                dVar12 = dVar12 + local_78) {
              FUN_017cf770(auStack_118,dVar12);
            }
            return;
          }
          local_70 = *(undefined8 *)local_d0;
          local_78 = *(double *)(local_d0 + 8);
          FUN_017cf6e0(auStack_118);
          return;
        }
      }
      else {
        if (local_d1 == 5) {
          local_70 = *(undefined8 *)local_d0;
          local_c0 = *(undefined8 *)(local_d0 + 0x10);
          local_78 = 1.0 / *(double *)(local_d0 + 8);
          FUN_017cf560(auStack_118,0,param_4);
          for (dVar12 = 0.0; dVar12 <= local_68; dVar12 = dVar12 + local_78) {
            FUN_017cf910(auStack_118,dVar12);
          }
          return;
        }
        if (local_d1 == 6) {
          local_70 = *(undefined8 *)local_d0;
          local_78 = 1.0 / *(double *)(local_d0 + 8);
          FUN_017cf560(auStack_118,0,param_4);
          for (dVar12 = 0.0; dVar12 <= local_68; dVar12 = dVar12 + local_78) {
            FUN_017cf850(auStack_118,dVar12);
          }
          return;
        }
        if (local_d1 != 7) {
          return;
        }
      }
      local_78 = 1.0 / *(double *)(local_d0 + 8);
      dVar12 = (double)FUN_00b90620(*(undefined8 *)(local_e0 + 0x790),0x4008000000000000);
      dVar10 = (double)FUN_00b90620(local_78 / 40.0,(local_68 - local_60) / dVar12);
      local_f8 = unaff_SI;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,local_60,local_d0);
      FUN_017cf560(auStack_118,local_60,param_4 + dVar12);
      dVar12 = local_60;
      while (dVar12 = dVar12 + dVar10, dVar12 < local_68) {
        local_f8 = unaff_SI;
        dVar11 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                   (local_e0,6,dVar12,local_d0);
        FUN_017cf580(auStack_118,dVar12,param_4 + dVar11);
      }
      local_f8 = unaff_SI;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,local_68,local_d0);
      FUN_017cf580(auStack_118,local_68,param_4 + dVar12);
    }
  }
  else if (local_d1 < 0xd) {
    if (local_d1 == 0xc) {
      local_80 = *(double *)(local_d0 + 8);
      local_90 = *(double *)(local_d0 + 0x18);
      dVar12 = (double)FUN_00b90620(*(undefined8 *)(local_e0 + 0x790),0x4008000000000000);
      dVar10 = (double)FUN_00b90620((local_90 - local_80) / 40.0,(local_68 - local_60) / dVar12);
      FUN_017cf560(auStack_118,0,param_4);
      FUN_017cf580(auStack_118,local_80,param_4);
      dVar12 = local_80;
      while (dVar12 = dVar12 + dVar10, dVar12 < local_90) {
        local_f8 = 0;
        dVar11 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                   (local_e0,6,dVar12,local_d0);
        FUN_017cf580(auStack_118,dVar12,param_4 + dVar11);
      }
      dVar10 = (double)FUN_00b90620(*(undefined8 *)(local_e0 + 0x790),0x4008000000000000);
      dVar10 = (double)FUN_00b90620((local_68 - local_90) / 40.0,(local_68 - local_60) / dVar10);
      for (; dVar12 < local_68; dVar12 = dVar12 + dVar10) {
        local_f8 = 0;
        dVar11 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                   (local_e0,6,dVar12,local_d0);
        FUN_017cf580(auStack_118,dVar12,param_4 + dVar11);
      }
      local_f8 = 0;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,local_68,local_d0);
      FUN_017cf580(auStack_118,local_68,param_4 + dVar12);
    }
    else if (local_d1 == 9) {
      puVar2 = *(undefined8 **)(local_d0 + 8);
      if ((puVar2 != (undefined8 *)0x0) && (1 < *(int *)local_d0)) {
        FUN_017cf560(auStack_118,*puVar2,param_4 + (double)puVar2[1]);
        iVar8 = *(int *)(pbVar3 + 4);
        if (iVar8 < 1) {
          iVar8 = 2;
          if (1 < *(int *)pbVar3) {
            iVar7 = *(int *)pbVar3 + -1;
            do {
              lVar6 = (longlong)iVar8;
              FUN_017cf580(auStack_118,
                           *(undefined8 *)(*(longlong *)(pbVar3 + 8) + -0x10 + lVar6 * 0x10),
                           param_4 + *(double *)(*(longlong *)(pbVar3 + 8) + -8 + lVar6 * 0x10));
              if (local_68 < *(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + lVar6 * 0x10)) break;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          pdVar1 = (double *)(*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)*(int *)pbVar3 * 0x10);
          if (*pdVar1 <= local_68 && local_68 != *pdVar1) {
            FUN_017cf580(auStack_118,local_68,
                         param_4 + *(double *)
                                    (*(longlong *)(pbVar3 + 8) + -8 +
                                    (longlong)*(int *)pbVar3 * 0x10));
          }
        }
        else {
          iVar7 = 2;
          if (1 < iVar8 + -1) {
            iVar8 = iVar8 + -2;
            do {
              FUN_017cf580(auStack_118,
                           *(undefined8 *)
                            (*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)iVar7 * 0x10),
                           param_4 + *(double *)
                                      (*(longlong *)(pbVar3 + 8) + -8 + (longlong)iVar7 * 0x10));
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar8 = *(int *)(pbVar3 + 4);
          dVar12 = 0.0;
          local_78 = *(double *)
                      (*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)*(int *)pbVar3 * 0x10) -
                     *(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)iVar8 * 0x10);
          while (lVar6 = (longlong)iVar8,
                *(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + lVar6 * 0x10) + dVar12 <= local_68)
          {
            FUN_017cf580(auStack_118,
                         *(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + lVar6 * 0x10) + dVar12,
                         param_4 + *(double *)(*(longlong *)(pbVar3 + 8) + -8 + lVar6 * 0x10));
            iVar8 = iVar8 + 1;
            if (iVar8 == *(int *)pbVar3 + 1) {
              iVar8 = *(int *)(pbVar3 + 4);
              dVar12 = dVar12 + local_78;
            }
          }
          if (((1 < iVar8) &&
              (*(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)(iVar8 + -1) * 0x10) +
               dVar12 < local_68)) &&
             (local_68 <
              *(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)iVar8 * 0x10) + dVar12)) {
            FUN_017cf580(auStack_118,local_68,
                         param_4 + *(double *)
                                    (*(longlong *)(pbVar3 + 8) + -8 + (longlong)iVar8 * 0x10));
          }
          if (*(double *)(*(longlong *)(pbVar3 + 8) + -0x10 + (longlong)*(int *)pbVar3 * 0x10) +
              dVar12 < local_68) {
            FUN_017cf580(auStack_118,local_68,
                         param_4 + *(double *)
                                    (*(longlong *)(pbVar3 + 8) + -8 +
                                    (longlong)*(int *)pbVar3 * 0x10));
          }
        }
      }
    }
    else if (local_d1 == 10) {
      local_f8 = 0;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + 0x90))(local_e0,6,param_5,local_d0);
      FUN_017cf560(auStack_118,local_60,param_4 + dVar12);
      dVar12 = local_60;
      while (dVar12 = dVar12 + 2.2675736961451248e-05, dVar12 < local_68) {
        local_f8 = 0;
        dVar10 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                   (local_e0,6,dVar12,local_d0);
        FUN_017cf580(auStack_118,dVar12,param_4 + dVar10);
      }
      local_f8 = 0;
      dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,local_68,local_d0);
      FUN_017cf580(auStack_118,local_68,param_4 + dVar12);
    }
    else if (((local_d1 == 0xb) &&
             (puVar2 = *(undefined8 **)(local_d0 + 0x17), puVar2 != (undefined8 *)0x0)) &&
            (1 < *(int *)(local_d0 + 0x13))) {
      FUN_017cf560(auStack_118,*puVar2,param_4 + (double)puVar2[1]);
      iVar8 = 1;
      dVar12 = 0.0;
      local_78 = (*(double **)(pbVar3 + 0x17))[(longlong)*(int *)(pbVar3 + 0x13) * 2 + -2] -
                 **(double **)(pbVar3 + 0x17);
      while (lVar6 = (longlong)iVar8,
            *(double *)(*(longlong *)(pbVar3 + 0x17) + -0x10 + lVar6 * 0x10) + dVar12 <= local_68) {
        FUN_017cf580(auStack_118,
                     *(double *)(*(longlong *)(pbVar3 + 0x17) + -0x10 + lVar6 * 0x10) + dVar12,
                     param_4 + *(double *)(*(longlong *)(pbVar3 + 0x17) + -8 + lVar6 * 0x10));
        iVar8 = iVar8 + 1;
        if (iVar8 == *(int *)(pbVar3 + 0x13) + 1) {
          iVar8 = 1;
          dVar12 = dVar12 + local_78;
        }
      }
      if (((1 < iVar8) &&
          (*(double *)(*(longlong *)(pbVar3 + 0x17) + -0x10 + (longlong)(iVar8 + -1) * 0x10) +
           dVar12 < local_68)) &&
         (local_68 <
          *(double *)(*(longlong *)(pbVar3 + 0x17) + -0x10 + (longlong)iVar8 * 0x10) + dVar12)) {
        FUN_017cf580(auStack_118,local_68,
                     param_4 + *(double *)
                                (*(longlong *)(pbVar3 + 0x17) + -8 + (longlong)iVar8 * 0x10));
      }
      if (*(double *)
           (*(longlong *)(pbVar3 + 0x17) + -0x10 + (longlong)*(int *)(pbVar3 + 0x13) * 0x10) +
          dVar12 < local_68) {
        FUN_017cf580(auStack_118,local_68,
                     param_4 + *(double *)
                                (*(longlong *)(pbVar3 + 0x17) + -8 +
                                (longlong)*(int *)(pbVar3 + 0x13) * 0x10));
      }
    }
  }
  else if (local_d1 == 0xd) {
    local_78 = 1.0 / *(double *)(local_d0 + 8);
    dVar12 = (double)FUN_00b90620(*(undefined8 *)(local_e0 + 0x790),0x4008000000000000);
    dVar10 = (double)FUN_00b90620(local_78 / 40.0,(local_68 - local_60) / dVar12);
    local_f8 = 0;
    dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                               (local_e0,6,local_60,local_d0);
    FUN_017cf560(auStack_118,local_60,param_4 + dVar12);
    dVar12 = local_60;
    while (dVar12 = dVar12 + dVar10, dVar12 < local_68) {
      local_f8 = 0;
      dVar11 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                                 (local_e0,6,dVar12,local_d0);
      FUN_017cf580(auStack_118,dVar12,param_4 + dVar11);
    }
    local_f8 = 0;
    dVar12 = (double)(**(code **)(PTR_PTR_02002658 + (ulonglong)local_d1 * 0x10 + -0x10))
                               (local_e0,6,local_68,local_d0);
    FUN_017cf580(auStack_118,local_68,param_4 + dVar12);
  }
  else if (local_d1 == 0xe) {
    local_80 = *(double *)(local_d0 + 0x10);
    local_90 = *(double *)(local_d0 + 0x20) + local_80;
    local_98 = *(double *)(local_d0 + 0x18) + local_90;
    local_78 = *(double *)(local_d0 + 0x28);
    local_88 = *(undefined8 *)local_d0;
    FUN_017cf560(auStack_118,0,param_4);
    FUN_017cf580(auStack_118,*(undefined8 *)(local_d0 + 8),param_4);
    for (dVar12 = *(double *)(local_d0 + 8); dVar12 <= local_68; dVar12 = dVar12 + local_78) {
      FUN_017cfa10(auStack_118,dVar12);
    }
  }
  return;
}

