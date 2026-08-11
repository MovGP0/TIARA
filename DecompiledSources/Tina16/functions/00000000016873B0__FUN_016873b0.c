/* Ghidra address: 016873b0 */
/* Ghidra symbol: FUN_016873b0 */


void FUN_016873b0(short *param_1,longlong param_2,longlong param_3,byte param_4)

{
  double dVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 in_stack_fffffffffffffdd0;
  undefined4 uVar26;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  char local_195;
  double local_168;
  double local_160;
  double local_158;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_100 [2];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [15];
  byte local_a9 [145];
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd0 >> 0x20);
  local_195 = '\0';
  if ((byte)(param_4 - 8) < 8 && (1 << (param_4 - 8 & 0x1f) & 0x11U) != 0) {
    if (param_4 == 8) {
      dVar13 = 0.0;
      dVar25 = *(double *)(param_1 + 200);
      dVar12 = *(double *)(param_1 + 0x28);
      if (dVar25 != 0.0) {
        dVar13 = (double)FUN_016ed840(param_3,8);
        dVar25 = dVar25 * dVar13;
        dVar14 = *(double *)(param_1 + 0x2c);
        dVar13 = (double)FUN_0040bdd0(dVar25);
        dVar13 = -(dVar12 + dVar14) * dVar13;
        dVar25 = (double)FUN_0040bcd0(dVar25);
        dVar12 = (dVar12 + dVar14) * dVar25 - *(double *)(param_1 + 0x2c);
      }
      dVar25 = (double)FUN_016ed840(param_3,8);
      FUN_016ed320(param_2,(char)param_1[1] + '\x06',0,*(double *)(param_1 + 0x70) * dVar25,0);
      FUN_016ed320(param_2,(char)param_1[1] + '\a',dVar12,dVar13,0);
    }
    if (param_4 == 0xc) {
      if (*(double *)(param_1 + 0xe0) != 0.0) {
        if (*(double *)(param_1 + 0x68) <= 0.0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_0040c760(*(double *)(param_1 + 0x7c) * 5.5224904e-23 *
                                *(double *)(param_1 + 0x68));
        }
        FUN_016ed220(param_2,(char)param_1[0x150] + '\x02',uVar10,0);
      }
      dVar25 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x60));
      if (dVar25 == 0.0) {
        uVar10 = 0;
      }
      else {
        dVar12 = (double)FUN_00c42670(dVar25,*(undefined8 *)(param_1 + 0x130));
        dVar13 = (double)FUN_016ed7f0(param_3,0xc);
        uVar10 = FUN_0040c760(dVar25 * 3.2043834e-19 +
                              (*(double *)(param_1 + 300) * dVar12) / dVar13);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\b',uVar10,0);
      dVar25 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 100));
      if (dVar25 == 0.0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_0040c760(dVar25 * 3.2043834e-19);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\t',uVar10,0);
    }
  }
  else {
    *(double *)(param_1 + 0x3c) = *(double *)(param_1 + 0x7c) * 8.61708745588933e-05;
    local_f0 = 0.0;
    local_1e8 = 0.0;
    local_e8 = 0.0;
    local_1f0 = 0.0;
    local_1b8 = 0.0;
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x120);
    dVar8 = *(double *)(param_1 + 0xdc) / *(double *)(param_1 + 0x120);
    dVar9 = *(double *)(param_1 + 0xe0) / *(double *)(param_1 + 0x120) - dVar8;
    dVar18 = *(double *)(param_1 + 0xb8) / *(double *)(param_1 + 0x120);
    dVar19 = *(double *)(param_1 + 0x8c) * *(double *)(param_1 + 0x120);
    dVar25 = *(double *)(param_1 + 0xe4);
    dVar12 = *(double *)(param_1 + 0x3c);
    dVar21 = *(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0x120);
    dVar22 = *(double *)(param_1 + 0x90) * *(double *)(param_1 + 0x120);
    dVar13 = *(double *)(param_1 + 0xe8);
    dVar14 = *(double *)(param_1 + 0x3c);
    dVar20 = *(double *)(param_1 + 200);
    dVar1 = *(double *)(param_1 + 0xec);
    dVar16 = *(double *)(param_1 + 0x120);
    dVar23 = *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x128);
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if (((*(byte *)(param_3 + 0x88) & 4) == 0) || ((char)param_1[2] == '\0')) {
          if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
            if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 10,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 10,uVar10,0);
              local_1d0 = (double)FUN_00db05a0(param_2,param_3,(ushort)param_1[0x5c] + 10,0,1);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xb,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xb,uVar10,0);
              local_1c8 = (double)FUN_00db05a0(param_2,param_3,(ushort)param_1[0x5c] + 0xb,0,1);
              local_1c0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                               *(undefined1 *)((longlong)param_1 + 0xb),
                                               *(undefined1 *)((longlong)param_1 + 9),0);
              local_1c0 = (double)(int)*param_1 * local_1c0;
              local_1b0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                               *(undefined1 *)((longlong)param_1 + 5),
                                               *(undefined1 *)((longlong)param_1 + 9),0);
              local_1b0 = (double)(int)*param_1 * local_1b0;
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xd,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xd,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xe,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xe,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xf,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xf,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x10,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x10,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x11,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x11,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x12,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x12,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x13,0);
              uVar26 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x13,uVar10,0);
            }
            else {
              dVar24 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                            (char)param_1[4],(char)param_1[5],0);
              sVar2 = *param_1;
              dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                            (char)param_1[4],*(undefined1 *)((longlong)param_1 + 9),
                                            0);
              sVar3 = *param_1;
              local_1c0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                               *(undefined1 *)((longlong)param_1 + 0xb),
                                               *(undefined1 *)((longlong)param_1 + 9),0);
              local_1c0 = (double)(int)*param_1 * local_1c0;
              local_1b0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                               *(undefined1 *)((longlong)param_1 + 5),
                                               *(undefined1 *)((longlong)param_1 + 9),0);
              local_1b0 = (double)(int)*param_1 * local_1b0;
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 10,0);
              *(undefined8 *)(param_1 + 0x30) = uVar10;
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xb,0);
              *(undefined8 *)(param_1 + 0x34) = uVar10;
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xc,0);
              *(undefined8 *)(param_1 + 0x6c) = uVar10;
              local_195 = FUN_01686e90((double)(int)sVar2 * dVar24,(double)(int)sVar3 * dVar11,
                                       param_1,param_2,param_3);
              if (local_195 == '\0') {
                local_1d0 = (double)FUN_00c42ff0((double)(int)sVar2 * dVar24,
                                                 *(undefined8 *)(param_1 + 0x30),
                                                 *(undefined8 *)(param_1 + 0x3c),
                                                 *(undefined8 *)(param_1 + 0x38),local_a9);
                FUN_016e9f80(param_2,param_3,local_a9[0],0);
                local_1c8 = (double)FUN_00c42ff0((double)(int)sVar3 * dVar11,
                                                 *(undefined8 *)(param_1 + 0x34),
                                                 *(undefined8 *)(param_1 + 0x3c),
                                                 *(undefined8 *)(param_1 + 0x38),local_a9);
                FUN_016e9f80(param_2,param_3,local_a9[0],0);
                if (1e-100 < dVar23) {
                  local_1c0 = (double)FUN_00c42ff0(local_1c0,*(undefined8 *)(param_1 + 0x6c),
                                                   *(undefined8 *)(param_1 + 0x3c),
                                                   *(undefined8 *)(param_1 + 0x38),local_a9);
                  FUN_016e9f80(param_2,param_3,local_a9[0],0);
                }
              }
              else {
                local_1d0 = *(double *)(param_1 + 0x30);
                local_1c8 = *(double *)(param_1 + 0x34);
                local_1c0 = *(double *)(param_1 + 0x6c);
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xd,0);
                *(undefined8 *)(param_1 + 100) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xe,0);
                *(undefined8 *)(param_1 + 0x60) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xf,0);
                *(undefined8 *)(param_1 + 0x20) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x10,0);
                *(undefined8 *)(param_1 + 0x24) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x11,0);
                *(undefined8 *)(param_1 + 0x28) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x12,0);
                *(undefined8 *)(param_1 + 0x2c) = uVar10;
                uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x13,0);
                *(undefined8 *)(param_1 + 0x68) = uVar10;
                local_1b8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x14,0);
                local_f0 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x15,0);
                local_e8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x16,0);
              }
            }
          }
          else {
            local_1d0 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 10,0);
            local_1c8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xb,0);
            local_1c0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                             *(undefined1 *)((longlong)param_1 + 0xb),
                                             *(undefined1 *)((longlong)param_1 + 9),0);
            local_1c0 = (double)(int)*param_1 * local_1c0;
            local_1b0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                             *(undefined1 *)((longlong)param_1 + 5),
                                             *(undefined1 *)((longlong)param_1 + 9),0);
            local_1b0 = (double)(int)*param_1 * local_1b0;
            if ((*(byte *)(param_3 + 0x88) & 0x10) != 0) {
              local_1b0 = (double)(int)*param_1 *
                          (*(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x13c));
              local_1c0 = 0.0;
            }
          }
        }
        else {
          local_1d0 = 0.0;
          local_1c8 = 0.0;
          local_1b0 = 0.0;
          local_1c0 = 0.0;
        }
      }
      else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        if ((char)param_1[2] == '\0') {
          local_1d0 = *(double *)(param_1 + 0x38);
          local_1c8 = 0.0;
          local_1b0 = 0.0;
          local_1c0 = 0.0;
        }
        else {
          local_1d0 = 0.0;
          local_1c8 = 0.0;
          local_1b0 = 0.0;
          local_1c0 = 0.0;
        }
      }
      else {
        local_1d0 = (double)(int)*param_1 * *(double *)(param_1 + 0x138);
        local_1c8 = local_1d0 - (double)(int)*param_1 * *(double *)(param_1 + 0x13c);
        local_1c0 = 0.0;
        local_1b0 = local_1c8;
      }
      if (local_195 == '\0') {
        *(double *)(param_1 + 0x30) = local_1d0;
        *(double *)(param_1 + 0x34) = local_1c8;
        *(double *)(param_1 + 0x6c) = local_1c0;
        if (*(char *)(param_3 + 0xed6) == '\0') {
          dVar24 = *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0xf0);
          if (local_1d0 <= dVar24 * -5.0) {
            local_c8 = -*(double *)(param_1 + 0x40) / local_1d0 + *(double *)(param_3 + 0x430);
            local_1d8 = local_c8 * local_1d0;
            local_d0 = -dVar19 / local_1d0;
            local_128 = local_d0 * local_1d0;
          }
          else {
            dVar11 = (double)FUN_00c42aa0(local_1d0 / dVar24,*(undefined8 *)(param_1 + 0x40),
                                          &local_c8);
            local_1d8 = *(double *)(param_1 + 0x40) * (dVar11 - 1.0) +
                        *(double *)(param_3 + 0x430) * local_1d0;
            local_c8 = (*(double *)(param_1 + 0x40) * local_c8) / dVar24 +
                       *(double *)(param_3 + 0x430);
            if (dVar19 == 0.0) {
              local_128 = 0.0;
              local_d0 = 0.0;
            }
            else {
              dVar24 = (double)FUN_00c42aa0(local_1d0 / (dVar25 * dVar12),dVar19,&local_d0);
              local_128 = dVar19 * (dVar24 - 1.0);
              local_d0 = (dVar19 * local_d0) / (dVar25 * dVar12);
            }
          }
          dVar25 = *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0xf4);
          if (local_1c8 <= dVar25 * -5.0) {
            local_d8 = -*(double *)(param_1 + 0x40) / local_1c8 + *(double *)(param_3 + 0x430);
            local_1e0 = local_d8 * local_1c8;
            local_e0 = -dVar22 / local_1c8;
            local_120 = local_e0 * local_1c8;
          }
          else {
            dVar12 = (double)FUN_00c42aa0(local_1c8 / dVar25,*(undefined8 *)(param_1 + 0x40),
                                          &local_d8);
            local_1e0 = *(double *)(param_1 + 0x40) * (dVar12 - 1.0) +
                        *(double *)(param_3 + 0x430) * local_1c8;
            local_d8 = (*(double *)(param_1 + 0x40) * local_d8) / dVar25 +
                       *(double *)(param_3 + 0x430);
            if (dVar22 == 0.0) {
              local_120 = 0.0;
              local_e0 = 0.0;
            }
            else {
              dVar25 = (double)FUN_00c42aa0(local_1c8 / (dVar13 * dVar14),dVar22,&local_e0);
              local_120 = dVar22 * (dVar25 - 1.0);
              local_e0 = (dVar22 * local_e0) / (dVar13 * dVar14);
            }
          }
        }
        else if ((*(longlong *)(param_2 + 0x130) != 0) &&
                (0 < *(int *)(*(longlong *)(param_2 + 0x130) + 0x10))) {
          local_100[0] = local_1d0;
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(int *)(lVar4 + 0x10) == 0) {
            FUN_00594f90();
          }
          plVar5 = (longlong *)**(undefined8 **)(lVar4 + 8);
          uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,local_100);
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(int *)(lVar4 + 0x10) == 0) {
            FUN_00594f90();
          }
          plVar5 = (longlong *)**(undefined8 **)(lVar4 + 8);
          dVar25 = (double)(**(code **)(*plVar5 + 0x10))(plVar5,param_3,uVar6);
          local_c8 = dVar25 + *(double *)(param_3 + 0x430);
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(int *)(lVar4 + 0x10) == 0) {
            FUN_00594f90();
          }
          plVar5 = (longlong *)**(undefined8 **)(lVar4 + 8);
          dVar25 = (double)(**(code **)(*plVar5 + 0x20))(plVar5,param_3,uVar6);
          local_1d8 = dVar25 + local_1d0 * local_c8;
          local_d0 = 0.0;
          local_128 = 0.0;
          local_100[0] = local_1c8;
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(uint *)(lVar4 + 0x10) < 2) {
            FUN_00594f90();
          }
          plVar5 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8);
          uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,local_100);
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(uint *)(lVar4 + 0x10) < 2) {
            FUN_00594f90();
          }
          plVar5 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8);
          local_d8 = (double)(**(code **)(*plVar5 + 0x10))(plVar5,param_3,uVar6);
          local_d8 = local_d8 + *(double *)(param_3 + 0x430);
          lVar4 = *(longlong *)(param_2 + 0x130);
          if (*(uint *)(lVar4 + 0x10) < 2) {
            FUN_00594f90();
          }
          plVar5 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8);
          dVar25 = (double)(**(code **)(*plVar5 + 0x20))(plVar5,param_3,uVar6);
          local_1e0 = dVar25 + local_1c8 * local_d8;
          local_e0 = 0.0;
          local_120 = 0.0;
        }
        if (*(char *)(param_3 + 0xed6) == '\0') {
          dVar25 = *(double *)(param_1 + 0x3c) * *(double *)(param_1 + 0x124);
          if (dVar23 <= 1e-100) {
            param_1[0x78] = 0;
            param_1[0x79] = 0;
            param_1[0x7a] = 0;
            param_1[0x7b] = 0;
            param_1[0x74] = 0;
            param_1[0x75] = 0;
            param_1[0x76] = 0;
            param_1[0x77] = 0;
          }
          else {
            if (local_1c0 < dVar25 * -3.0) {
              dVar25 = (dVar25 * 3.0) / (local_1c0 * 2.718281828459045);
              dVar25 = dVar25 * dVar25 * dVar25;
              *(double *)(param_1 + 0x74) = -dVar23 * (dVar25 + 1.0);
              *(double *)(param_1 + 0x78) = (dVar23 * 3.0 * dVar25) / local_1c0;
            }
            else {
              dVar12 = (double)FUN_00c42aa0(local_1c0 / dVar25,dVar23,param_1 + 0x78);
              *(double *)(param_1 + 0x74) = dVar23 * (dVar12 - 1.0);
              *(double *)(param_1 + 0x78) = (dVar23 * *(double *)(param_1 + 0x78)) / dVar25;
            }
            *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x430)
            ;
            *(double *)(param_1 + 0x74) =
                 *(double *)(param_1 + 0x74) + *(double *)(param_3 + 0x430) * local_1c0;
          }
        }
        else {
          param_1[0x78] = 0;
          param_1[0x79] = 0;
          param_1[0x7a] = 0;
          param_1[0x7b] = 0;
          param_1[0x74] = 0;
          param_1[0x75] = 0;
          param_1[0x76] = 0;
          param_1[0x77] = 0;
        }
        if (*(char *)(param_3 + 0xed6) == '\0') {
          dVar25 = 1.0 / (1.0 - (*(double *)(param_1 + 0xb4) * local_1c8 +
                                *(double *)(param_1 + 0xbc) * local_1d0));
          if ((dVar18 == 0.0) && (dVar21 == 0.0)) {
            local_160 = dVar25 * dVar25 * *(double *)(param_1 + 0xbc);
            local_158 = dVar25 * dVar25 * *(double *)(param_1 + 0xb4);
            local_168 = dVar25;
          }
          else {
            dVar12 = (double)FUN_00b90620(0,(dVar18 * local_1d8 + dVar21 * local_1e0) * 4.0 + 1.0);
            dVar13 = 1.0;
            if (dVar12 != 0.0) {
              dVar13 = (double)FUN_0040c760(dVar12);
            }
            local_168 = (dVar25 * (dVar13 + 1.0)) / 2.0;
            local_160 = dVar25 * (local_168 * *(double *)(param_1 + 0xbc) +
                                 (dVar18 * local_c8) / dVar13);
            local_158 = dVar25 * (local_168 * *(double *)(param_1 + 0xb4) +
                                 (dVar21 * local_d8) / dVar13);
          }
        }
        else {
          local_168 = 1.0;
          local_160 = 0.0;
          local_158 = 0.0;
        }
        param_1[100] = 0;
        param_1[0x65] = 0;
        param_1[0x66] = 0;
        param_1[0x67] = 0;
        dVar25 = local_1d8;
        dVar12 = local_c8;
        if ((((*(char *)(param_3 + 0xed6) == '\0') && (param_4 == 6)) && (dVar20 != 0.0)) &&
           (*(char *)(param_3 + 0x330) != '\0')) {
          dVar20 = *(double *)(param_3 + 0x10) / dVar20;
          dVar25 = dVar20 * 3.0;
          dVar20 = dVar20 * dVar25;
          dVar12 = dVar20 + dVar25 + 1.0;
          dVar20 = dVar20 / dVar12;
          if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 9,local_1d8 / local_168,0);
            uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 9,0);
            FUN_016eeca0(param_2,param_3 + 0x1b8,2,param_1[0x5c] + 9,uVar10,0);
          }
          dVar13 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 9,0);
          dVar14 = (double)FUN_01b08a30(param_3,1);
          dVar18 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,2,param_1[0x5c] + 9,0);
          dVar19 = (double)FUN_01b08a30(param_3,1);
          *(double *)(param_1 + 100) =
               (dVar13 * (*(double *)(param_3 + 0x10) / dVar14 + dVar25 + 1.0) -
               (dVar18 * *(double *)(param_3 + 0x10)) / dVar19) / dVar12;
          dVar25 = local_1d8 * dVar20;
          dVar12 = local_c8 * dVar20;
          uVar26 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 9,
                       *(double *)(param_1 + 100) + dVar25 / local_168,0);
        }
        *(double *)(param_1 + 100) =
             ((*(double *)(param_1 + 100) + (dVar25 - local_1e0) / local_168) -
             local_1e0 / *(double *)(param_1 + 0x88)) - local_120;
        *(double *)(param_1 + 0xc) = local_1d8 / *(double *)(param_1 + 0x84) + local_128;
        *(double *)(param_1 + 0x10) = local_1e0 / *(double *)(param_1 + 0x88) + local_120;
        *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0xc) + *(double *)(param_1 + 0x10);
        *(double *)(param_1 + 0x68) = dVar8 + dVar9 / local_168;
        if (dVar1 * dVar16 != 0.0) {
          dVar13 = (double)FUN_00b90620(*(double *)(param_1 + 0x60) / (dVar1 * dVar16),
                                        0x3e112e0be826d695);
          dVar14 = (double)FUN_0040c760(dVar13 * 14.59025 + 1.0);
          dVar13 = (double)FUN_0040c760(dVar13);
          dVar13 = ((dVar14 + -1.0) / 2.4317) / dVar13;
          dVar14 = (double)FUN_00526070();
          *(double *)(param_1 + 0x68) =
               dVar8 + (((dVar9 * 3.0 * (dVar14 - dVar13)) / dVar13) / dVar14) / dVar14;
        }
        dVar13 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x68));
        if (1e-30 < dVar13) {
          *(double *)(param_1 + 0x68) = 1.0 / *(double *)(param_1 + 0x68);
        }
        *(double *)(param_1 + 0x20) = local_c8 / *(double *)(param_1 + 0x84) + local_d0;
        *(double *)(param_1 + 0x24) = local_d8 / *(double *)(param_1 + 0x88) + local_e0;
        *(double *)(param_1 + 0x2c) =
             (local_d8 + ((dVar25 - local_1e0) * local_158) / local_168) / local_168;
        *(double *)(param_1 + 0x28) =
             (dVar12 - ((dVar25 - local_1e0) * local_160) / local_168) / local_168 -
             *(double *)(param_1 + 0x2c);
        if (param_4 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (param_4 & 0x1f) & 0xc0U) !=
                  0;
        }
        else {
          bVar7 = false;
        }
        if (((bVar7) || ((param_4 == 5 && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)))) &&
           (*(char *)(param_3 + 0x330) != '\0')) {
          dVar25 = *(double *)(param_1 + 0xf8);
          dVar12 = *(double *)(param_1 + 0xfc);
          dVar23 = *(double *)(param_1 + 0x94) * *(double *)(param_1 + 0x120);
          dVar13 = *(double *)(param_1 + 0x98);
          dVar14 = *(double *)(param_1 + 0x100);
          dVar17 = *(double *)(param_1 + 0x9c) * *(double *)(param_1 + 0x120) *
                   *(double *)(param_1 + 0x108);
          dVar11 = *(double *)(param_1 + 0x9c) * *(double *)(param_1 + 0x120) - dVar17;
          dVar20 = *(double *)(param_1 + 0xa0);
          dVar1 = *(double *)(param_1 + 0x104);
          dVar16 = *(double *)(param_1 + 0xa4);
          dVar24 = *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x120);
          dVar8 = *(double *)(param_1 + 0x114);
          dVar9 = *(double *)(param_1 + 0x10c);
          dVar18 = *(double *)(param_1 + 0x118);
          dVar19 = *(double *)(param_1 + 0xc4);
          dVar21 = *(double *)(param_1 + 0x11c);
          dVar22 = *(double *)(param_1 + 0x120);
          if (*(char *)(param_3 + 0xed6) == '\0') {
            if ((dVar25 != 0.0) && (0.0 < local_1d0)) {
              local_118 = 0.0;
              local_110 = 0.0;
              dVar15 = 0.0;
              if (dVar18 != 0.0) {
                if (dVar19 != 0.0) {
                  dVar15 = (double)FUN_0040af80(local_1c8 * dVar19);
                  dVar18 = dVar18 * dVar15;
                }
                local_118 = dVar18;
                if (dVar21 * dVar22 != 0.0) {
                  dVar21 = local_1d8 / (local_1d8 + dVar21 * dVar22);
                  dVar18 = dVar18 * dVar21 * dVar21;
                  local_118 = dVar18 * (3.0 - (dVar21 + dVar21));
                }
                local_110 = local_1d8 * dVar18 * dVar19;
                dVar15 = dVar18;
              }
              local_1d8 = (local_1d8 * (dVar15 + 1.0)) / local_168;
              local_c8 = (local_c8 * (local_118 + 1.0) - local_1d8 * local_160) / local_168;
              local_1b8 = (dVar25 * (local_110 - local_1d8 * local_158)) / local_168;
            }
            if (dVar16 <= local_1d0) {
              dVar18 = *(double *)(param_1 + 0xcc);
              dVar19 = *(double *)(param_1 + 0xd0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 3,
                           dVar25 * local_1d8 + dVar23 * *(double *)(param_1 + 0xa8) +
                           (dVar23 / dVar18) *
                           (dVar19 * (local_1d0 - dVar16) +
                           (dVar14 / (dVar13 + dVar13)) * (local_1d0 * local_1d0 - dVar16 * dVar16))
                           ,0);
              *(double *)(param_1 + 0x140) =
                   dVar25 * local_c8 + (dVar23 / dVar18) * (dVar19 + (dVar14 * local_1d0) / dVar13);
            }
            else {
              dVar16 = (double)FUN_0040c2f0();
              dVar16 = (double)FUN_0040af80(-dVar14 * dVar16);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 3,
                           dVar25 * local_1d8 +
                           (dVar13 * dVar23 * (1.0 - (1.0 - local_1d0 / dVar13) * dVar16)) /
                           (1.0 - dVar14),0);
              *(double *)(param_1 + 0x140) = dVar25 * local_c8 + dVar23 * dVar16;
            }
            dVar25 = *(double *)(param_1 + 0xac);
            dVar13 = *(double *)(param_1 + 0xb0);
            dVar14 = *(double *)(param_1 + 0xd4);
            dVar16 = *(double *)(param_1 + 0xd8);
            if (dVar25 <= local_1c8) {
              dVar18 = dVar17 / dVar14;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 5,
                           dVar12 * local_1e0 + dVar17 * dVar13 +
                           dVar18 * (dVar16 * (local_1c8 - dVar25) +
                                    (dVar1 / (dVar20 + dVar20)) *
                                    (local_1c8 * local_1c8 - dVar25 * dVar25)),0);
              *(double *)(param_1 + 0x144) =
                   dVar12 * local_d8 + dVar18 * (dVar16 + (dVar1 * local_1c8) / dVar20);
            }
            else {
              dVar18 = (double)FUN_0040c2f0();
              dVar18 = (double)FUN_0040af80(-dVar1 * dVar18);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 5,
                           dVar12 * local_1e0 +
                           (dVar20 * dVar17 * (1.0 - (1.0 - local_1c8 / dVar20) * dVar18)) /
                           (1.0 - dVar1),0);
              *(double *)(param_1 + 0x144) = dVar12 * local_d8 + dVar17 * dVar18;
            }
            if (dVar25 <= local_1b0) {
              dVar14 = dVar11 / dVar14;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 7,
                           dVar11 * dVar13 +
                           dVar14 * (dVar16 * (local_1b0 - dVar25) +
                                    (dVar1 / (dVar20 + dVar20)) *
                                    (local_1b0 * local_1b0 - dVar25 * dVar25)),0);
              *(double *)(param_1 + 0x148) = dVar14 * (dVar16 + (dVar1 * local_1b0) / dVar20);
            }
            else {
              dVar25 = (double)FUN_0040c2f0();
              dVar25 = (double)FUN_0040af80(-dVar1 * dVar25);
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 7,
                           (dVar20 * dVar11 * (1.0 - (1.0 - local_1b0 / dVar20) * dVar25)) /
                           (1.0 - dVar1),0);
              *(double *)(param_1 + 0x148) = dVar11 * dVar25;
            }
            if (0.0 <= local_1c0) {
              uVar26 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 1,
                           local_1c0 * dVar24 * ((dVar9 * local_1c0) / (dVar8 * 2.0) + 1.0),0);
              *(double *)(param_1 + 0x14c) = dVar24 * ((dVar9 * local_1c0) / dVar8 + 1.0);
            }
            else {
              dVar25 = (double)FUN_0040c2f0();
              dVar25 = (double)FUN_0040af80(-dVar9 * dVar25);
              uVar26 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 1,
                           (dVar8 * dVar24 * (1.0 - (1.0 - local_1c0 / dVar8) * dVar25)) /
                           (1.0 - dVar9),0);
              *(double *)(param_1 + 0x14c) = dVar24 * dVar25;
            }
          }
          else {
            param_1[0x140] = 0;
            param_1[0x141] = 0;
            param_1[0x142] = 0;
            param_1[0x143] = 0;
            param_1[0x144] = 0;
            param_1[0x145] = 0;
            param_1[0x146] = 0;
            param_1[0x147] = 0;
            param_1[0x14c] = 0;
            param_1[0x14d] = 0;
            param_1[0x14e] = 0;
            param_1[0x14f] = 0;
            param_1[0x148] = 0;
            param_1[0x149] = 0;
            param_1[0x14a] = 0;
            param_1[0x14b] = 0;
          }
          if ((*(char *)(param_3 + 0xed6) == '\0') &&
             (((param_4 != 5 || ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) &&
              (*(char *)(param_3 + 0x330) != '\0')))) {
            if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 3,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 3,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 5,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 5,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 7,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 7,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 1,0);
              uVar26 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 1,uVar10,0);
            }
            uVar10 = CONCAT44(uVar26,(ushort)param_1[0x5c] + 3);
            FUN_00dafac0(param_2,param_3,&local_c0,local_b8,*(undefined8 *)(param_1 + 0x140),uVar10,
                         0,1);
            uVar26 = (undefined4)((ulonglong)uVar10 >> 0x20);
            dVar25 = (double)FUN_01b08a00(param_3,0);
            local_1b8 = local_1b8 * dVar25;
            *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) + local_c0;
            dVar25 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 4,0);
            *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + dVar25;
            uVar10 = CONCAT44(uVar26,(ushort)param_1[0x5c] + 5);
            FUN_00dafac0(param_2,param_3,&local_c0,local_b8,*(undefined8 *)(param_1 + 0x144),uVar10,
                         0,1);
            uVar26 = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(double *)(param_1 + 0x24) = *(double *)(param_1 + 0x24) + local_c0;
            dVar25 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 6,0);
            *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + dVar25;
            dVar25 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 6,0);
            *(double *)(param_1 + 100) = *(double *)(param_1 + 100) - dVar25;
            if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 4,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 4,uVar10,0);
              uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 6,0);
              uVar26 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 6,uVar10,0);
            }
          }
        }
        if (((*(char *)(param_3 + 0xed6) == '\0') && (param_4 == 6)) &&
           (*(char *)(param_3 + 0x330) != '\0')) {
          FUN_00dafac0(param_2,param_3,&local_f0,local_b8,*(undefined8 *)(param_1 + 0x14c),
                       CONCAT44(uVar26,(ushort)param_1[0x5c] + 1),0,1);
          FUN_00dafac0(param_2,param_3,&local_e8,local_b8,*(undefined8 *)(param_1 + 0x148),
                       (ushort)param_1[0x5c] + 7,0,1);
          if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
            uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 8,0);
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 8,uVar10,0);
            uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 2,0);
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 2,uVar10,0);
          }
        }
      }
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 10,local_1d0,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xb,local_1c8,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xc,local_1c0,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xd,*(undefined8 *)(param_1 + 100),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xe,*(undefined8 *)(param_1 + 0x60),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xf,*(undefined8 *)(param_1 + 0x20),0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x10,*(undefined8 *)(param_1 + 0x24),0)
      ;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x11,*(undefined8 *)(param_1 + 0x28),0)
      ;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x12,*(undefined8 *)(param_1 + 0x2c),0)
      ;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x13,*(undefined8 *)(param_1 + 0x68),0)
      ;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x14,local_1b8,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x15,local_f0,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x16,local_e8,0);
      if (*(char *)(param_3 + 0xed6) == '\0') {
        uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar10;
        local_1e8 = (double)(int)*param_1 * (*(double *)(param_1 + 0x18) - local_1c0 * local_f0);
        uVar10 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 8,0);
        *(undefined8 *)(param_1 + 8) = uVar10;
        local_1f0 = (double)(int)*param_1 * (*(double *)(param_1 + 8) - local_1b0 * local_e8);
        *(double *)(param_1 + 8) = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x60);
      }
      sVar2 = *param_1;
      dVar25 = *(double *)(param_1 + 100);
      dVar12 = *(double *)(param_1 + 0x60);
      dVar13 = *(double *)(param_1 + 0x28);
      dVar14 = *(double *)(param_1 + 0x2c);
      dVar20 = *(double *)(param_1 + 0x20);
      dVar1 = *(double *)(param_1 + 0x2c);
      sVar3 = *param_1;
      dVar16 = *(double *)(param_1 + 100);
      dVar8 = *(double *)(param_1 + 0x28);
      dVar9 = *(double *)(param_1 + 0x2c);
      dVar18 = *(double *)(param_1 + 0x24);
      dVar19 = *(double *)(param_1 + 0x2c);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 100);
      *(double *)(param_1 + 0x1c) = -(*(double *)(param_1 + 100) + *(double *)(param_1 + 0x60));
      if ((*(char *)(param_3 + 0xed6) == '\0') && (*(double *)(param_1 + 0xe0) != 0.0)) {
        FUN_016ed320(param_2,(char)param_1[0x150] + '\x01',0,*(undefined8 *)(param_1 + 0x68),0);
      }
      FUN_016ed460(param_2,(char)param_1[1] + '\x01',
                   (double)(int)sVar2 *
                   (((dVar25 + dVar12) - local_1d0 * (dVar13 + dVar14 + dVar20)) +
                   local_1c8 * (dVar1 - local_1b8)),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x140),0);
      FUN_016ed460(param_2,(char)param_1[1] + '\x02',
                   (double)(int)sVar3 *
                   ((-dVar16 + local_1d0 * (dVar8 + dVar9)) - local_1c8 * (dVar18 + dVar19)),
                   *(undefined8 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x144),0);
      FUN_016ed320(param_2,(char)param_1[1] + '\x03',0,*(undefined8 *)(param_1 + 0x2c),0);
      FUN_016ed460(param_2,(char)param_1[1] + '\x04',local_1f0,local_e8,
                   *(undefined8 *)(param_1 + 0x148),0);
      FUN_016ed460(param_2,(char)param_1[1] + '\x05',
                   local_1e8 +
                   (double)(int)*param_1 *
                   (*(double *)(param_1 + 0x74) - local_1c0 * *(double *)(param_1 + 0x78)),
                   local_f0 + *(double *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x14c),0);
      dVar25 = (double)FUN_016ed840(param_3,param_4);
      FUN_016ed320(param_2,(char)param_1[1] + '\x06',local_1b8,*(double *)(param_1 + 0x70) * dVar25,
                   0);
      FUN_016ed320(param_2,(char)param_1[1] + '\a',*(undefined8 *)(param_1 + 0x28),0,0);
    }
    else {
      if ((char)param_1[0x134] == '\0') {
        uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                              *(undefined1 *)((longlong)param_1 + 5),
                              *(undefined1 *)((longlong)param_1 + 7),0);
        *(undefined8 *)(param_1 + 0x138) = uVar10;
      }
      if (*(char *)((longlong)param_1 + 0x269) == '\0') {
        uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                              *(undefined1 *)((longlong)param_1 + 7),0);
        *(undefined8 *)(param_1 + 0x13c) = uVar10;
      }
    }
  }
  return;
}

