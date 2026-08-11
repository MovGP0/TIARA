/* Ghidra address: 01674990 */
/* Ghidra symbol: FUN_01674990 */


void FUN_01674990(int *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_XMM11_Qa;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b4;
  undefined1 local_a9;
  double local_a8;
  double local_a0 [15];
  
  bVar5 = (byte)param_4;
  if ((byte)(bVar5 - 8) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar5 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    if (bVar5 == 0xc) {
      uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x2a));
      dVar9 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x22));
      if (*(double *)(param_1 + 0x2a) == 0.0) {
        dVar9 = 0.0;
      }
      else {
        dVar11 = (double)FUN_00c42670(uVar8,*(undefined8 *)(param_1 + 0x58));
        dVar13 = (double)FUN_016ed7f0(param_3,param_4);
        dVar9 = (double)FUN_0040c760((*(double *)(param_1 + 0x5a) * 1.10449808e-22 * dVar9) / 3.0 +
                                     (*(double *)(param_1 + 0x56) * dVar11) / dVar13);
      }
      FUN_016ed220(param_2,(char)param_1[2] + '\r',dVar9 * *(double *)(param_1 + 0x62),0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (*(char *)((longlong)param_1 + 10) == '\0')) {
        dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                      *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
        iVar1 = *param_1;
        dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
        dVar9 = (double)*param_1 * dVar9;
        dVar13 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                      *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
        iVar2 = *param_1;
        dVar14 = dVar9 - (double)iVar2 * dVar13;
        if (*(double *)(param_1 + 0x16) < 0.0) {
          dVar12 = (double)FUN_00c432f0(dVar14,*(undefined8 *)(param_1 + 0x10),
                                        *(undefined8 *)(param_1 + 0x38),&local_a9);
          dVar9 = dVar9 - dVar12;
          dVar12 = dVar12 + dVar9;
        }
        else {
          dVar12 = (double)FUN_00c432f0(dVar9,*(undefined8 *)(param_1 + 0xe),
                                        *(undefined8 *)(param_1 + 0x38),&local_a9);
          dVar9 = (double)FUN_00c43230(dVar12 - dVar14,*(undefined8 *)(param_1 + 0x16),&local_a9);
        }
        if (dVar9 < 0.0) {
          dVar11 = (double)FUN_00c42ff0((double)iVar1 * dVar11 - (double)iVar2 * dVar13,
                                        *(undefined8 *)(param_1 + 0x14),
                                        *(double *)(param_1 + 0x54) * *(double *)(param_1 + 0x3a),
                                        *(undefined8 *)(param_1 + 0x36),&local_a9);
          FUN_016e9f80(param_2,param_3,local_a9,0x65);
          dVar11 = dVar11 + dVar9;
        }
        else {
          dVar11 = (double)FUN_00c42ff0((double)iVar1 * dVar11,*(undefined8 *)(param_1 + 0x12),
                                        *(double *)(param_1 + 0x54) * *(double *)(param_1 + 0x3a),
                                        *(undefined8 *)(param_1 + 0x36),&local_a9);
          FUN_016e9f80(param_2,param_3,local_a9,100);
        }
      }
      else {
        dVar11 = 0.0;
        dVar12 = 0.0;
        dVar9 = 0.0;
      }
    }
    else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        dVar11 = -1.0;
        dVar12 = (double)*param_1 * *(double *)(param_1 + 0x32);
        dVar9 = 0.0;
      }
      else {
        dVar11 = 0.0;
        dVar12 = 0.0;
        dVar9 = 0.0;
      }
    }
    else {
      dVar11 = *(double *)(param_1 + 0x60);
      dVar12 = *(double *)(param_1 + 0x5e);
      dVar9 = *(double *)(param_1 + 0x5c);
    }
    dVar13 = dVar11 - dVar9;
    dVar14 = dVar12 - dVar9;
    *(double *)(param_1 + 0xe) = dVar12;
    *(double *)(param_1 + 0x10) = dVar14;
    *(double *)(param_1 + 0x12) = dVar11;
    *(double *)(param_1 + 0x14) = dVar13;
    *(double *)(param_1 + 0x16) = dVar9;
    if (*(char *)(param_3 + 0xed6) == '\0') {
      FUN_01674680(param_3,dVar11,*(double *)(param_1 + 0x54) * *(double *)(param_1 + 0x3a),
                   *(undefined8 *)(param_1 + 0x52),param_1 + 0x18,param_1 + 0x1a,local_a0);
      uVar8 = FUN_016ed320(param_2,(char)param_1[2] + '\a',
                           (double)*param_1 *
                           (*(double *)(param_1 + 0x18) -
                           dVar11 * (*(double *)(param_1 + 0x1a) - *(double *)(param_3 + 0x430))) *
                           *(double *)(param_1 + 0x62),
                           *(double *)(param_1 + 0x1a) * *(double *)(param_1 + 0x62),0);
      if (bVar5 < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << (bVar5 & 0x1f) & 0xc0U) != 0;
      }
      else {
        bVar7 = false;
      }
      if ((bVar7) && (*(char *)(param_3 + 0x330) != '\0')) {
        dVar10 = (double)FUN_00c42830(dVar11,*(undefined8 *)(param_1 + 0x1a),0);
        local_a0[0] = (double)FUN_00c42840(dVar11,0,0x3fe8000000000000,0x3fe0000000000000);
        local_a0[0] = dVar10 + local_a0[0];
        FUN_016ed220(param_2,(char)param_1[2] + '\v',local_a0[0] * *(double *)(param_1 + 0x62),0);
      }
      FUN_01674680(param_3,dVar13,*(double *)(param_1 + 0x54) * *(double *)(param_1 + 0x3a),
                   *(undefined8 *)(param_1 + 0x52),param_1 + 0x1c,param_1 + 0x1e,&local_a8);
      uVar8 = FUN_016ed320(param_2,(char)param_1[2] + '\x06',
                           (double)*param_1 *
                           (*(double *)(param_1 + 0x1c) -
                           dVar13 * (*(double *)(param_1 + 0x1e) - *(double *)(param_3 + 0x430))) *
                           *(double *)(param_1 + 0x62),
                           *(double *)(param_1 + 0x1e) * *(double *)(param_1 + 0x62),0);
      if (bVar5 < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << (bVar5 & 0x1f) & 0xc0U) != 0;
      }
      else {
        bVar7 = false;
      }
      if ((bVar7) && (*(char *)(param_3 + 0x330) != '\0')) {
        dVar10 = (double)FUN_00c42830(dVar13,*(undefined8 *)(param_1 + 0x1e),0);
        local_a8 = (double)FUN_00c42840(dVar13,0,0x3fe8000000000000,0x3fe0000000000000);
        local_a8 = dVar10 + local_a8;
        FUN_016ed220(param_2,(char)param_1[2] + '\f',local_a8 * *(double *)(param_1 + 0x62),0);
      }
    }
    if (dVar9 < 0.0) {
      param_1[1] = -1;
    }
    else {
      param_1[1] = 1;
    }
    if (*(char *)(param_3 + 0xed6) == '\x01') {
      *(double *)(param_1 + 0x38) = (double)*param_1 * *(double *)(param_1 + 0x32);
      if (param_1[1] == 1) {
        unaff_XMM11_Qa = dVar12 - *(double *)(param_1 + 0x38);
      }
      else {
        unaff_XMM11_Qa = dVar14 - *(double *)(param_1 + 0x38);
      }
    }
    if (param_1[1] == 1) {
      if (*(char *)(param_3 + 0xed6) == '\0') {
        FUN_01674760(dVar9,dVar11,dVar12,param_1 + 0x2a,param_1 + 0x22,param_1 + 0x24,param_1 + 0x26
                     ,param_1);
      }
      else {
        lVar3 = *(longlong *)(param_2 + 0x130);
        if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x10))) {
          local_d8 = dVar12;
          if (*(char *)(param_3 + 0xed7) == '\x01') {
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            uVar6 = (**(code **)(*(longlong *)**(undefined8 **)(lVar3 + 8) + 0x38))
                              ((longlong *)**(undefined8 **)(lVar3 + 8),&local_d8);
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            dVar13 = (double)(**(code **)(*plVar4 + 0x10))(plVar4,param_3,uVar6);
            *(double *)(param_1 + 0x22) = dVar13 * dVar9;
            *(double *)(param_1 + 0x24) = dVar13 * unaff_XMM11_Qa;
            *(double *)(param_1 + 0x2a) = dVar13 * dVar9 * unaff_XMM11_Qa;
          }
          else {
            local_d0 = dVar9;
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            local_b4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar3 + 8) + 0x38))
                                 ((longlong *)**(undefined8 **)(lVar3 + 8),&local_d8);
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            uVar8 = (**(code **)(*plVar4 + 0x28))(plVar4,param_3,&local_b4,&local_d8);
            *(undefined8 *)(param_1 + 0x2a) = uVar8;
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_c8,param_3,&local_b4,&local_d8);
            *(undefined8 *)(param_1 + 0x22) = local_c8;
            *(undefined8 *)(param_1 + 0x24) = local_c0;
          }
          param_1[0x26] = 0;
          param_1[0x27] = 0;
        }
      }
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)*param_1 *
                   (((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * dVar9) -
                    *(double *)(param_1 + 0x22) * dVar12) - *(double *)(param_1 + 0x26) * dVar11) *
                   *(double *)(param_1 + 0x62),
                   (*(double *)(param_1 + 0x24) + *(double *)(param_3 + 0x430)) *
                   *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',
                   *(double *)(param_1 + 0x22) * *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',
                   *(double *)(param_1 + 0x26) * *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',0,0);
    }
    else {
      if (*(char *)(param_3 + 0xed6) == '\0') {
        FUN_01674760(-dVar9,dVar13,dVar14,param_1 + 0x2a,param_1 + 0x22,param_1 + 0x24,
                     param_1 + 0x26,param_1);
      }
      else {
        lVar3 = *(longlong *)(param_2 + 0x130);
        if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x10))) {
          local_d8 = dVar14;
          if (*(char *)(param_3 + 0xed7) == '\x01') {
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            uVar6 = (**(code **)(*(longlong *)**(undefined8 **)(lVar3 + 8) + 0x38))
                              ((longlong *)**(undefined8 **)(lVar3 + 8),&local_d8);
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            dVar11 = (double)(**(code **)(*plVar4 + 0x10))(plVar4,param_3,uVar6);
            *(double *)(param_1 + 0x22) = dVar11 * -dVar9;
            *(double *)(param_1 + 0x24) = dVar11 * unaff_XMM11_Qa;
            *(double *)(param_1 + 0x2a) = dVar11 * -dVar9 * unaff_XMM11_Qa;
          }
          else {
            local_d0 = -dVar9;
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            local_b4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar3 + 8) + 0x38))
                                 ((longlong *)**(undefined8 **)(lVar3 + 8),&local_d8);
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            uVar8 = (**(code **)(*plVar4 + 0x28))(plVar4,param_3,&local_b4,&local_d8);
            *(undefined8 *)(param_1 + 0x2a) = uVar8;
            lVar3 = *(longlong *)(param_2 + 0x130);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)**(undefined8 **)(lVar3 + 8);
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_c8,param_3,&local_b4,&local_d8);
            *(undefined8 *)(param_1 + 0x22) = local_c8;
            *(undefined8 *)(param_1 + 0x24) = local_c0;
          }
          param_1[0x26] = 0;
          param_1[0x27] = 0;
        }
      }
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)-*param_1 *
                   (((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * -dVar9) -
                    *(double *)(param_1 + 0x22) * dVar14) - *(double *)(param_1 + 0x26) * dVar13) *
                   *(double *)(param_1 + 0x62),
                   (*(double *)(param_1 + 0x24) + *(double *)(param_3 + 0x430)) *
                   *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',
                   -*(double *)(param_1 + 0x22) * *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',
                   -*(double *)(param_1 + 0x26) * *(double *)(param_1 + 0x62),0);
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x2a);
    *(double *)(param_1 + 0x20) =
         (double)param_1[1] * *(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x1c);
  }
  else {
    if ((char)param_1[100] == '\0') {
      uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x5c) = uVar8;
    }
    if (*(char *)((longlong)param_1 + 0x191) == '\0') {
      uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x5e) = uVar8;
    }
    if (*(char *)((longlong)param_1 + 0x192) == '\0') {
      uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x60) = uVar8;
    }
  }
  return;
}

