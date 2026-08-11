/* Ghidra address: 00db23a0 */
/* Ghidra symbol: FUN_00db23a0 */


void FUN_00db23a0(char *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_XMM10_Qa;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar17;
  double local_b8 [2];
  undefined1 local_a8 [8];
  double local_a0;
  char local_91;
  double local_90 [13];
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  bVar3 = (byte)param_4;
  uVar8 = FUN_00b92140(0);
  cVar4 = '\0';
  if ((byte)(bVar3 - 8) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << (bVar3 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    if (bVar3 == 0xc) {
      local_90[0] = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
      if (local_90[0] == 0.0) {
        uVar8 = 0;
      }
      else {
        dVar14 = (double)FUN_00c42670(local_90[0],*(undefined8 *)(param_1 + 0xe8));
        dVar11 = (double)FUN_016ed7f0(param_3,param_4);
        uVar8 = FUN_0040c760(local_90[0] * 3.2043834e-19 +
                             (*(double *)(param_1 + 0xe0) * dVar14) / dVar11);
      }
      FUN_016ed220(param_2,*param_1 + '\x02',uVar8,0);
    }
    goto LAB_00db2f67;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if (param_1[0x41] == '\0') {
      uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[4],0);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8) =
         *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 6) * 8) =
         0;
    return;
  }
  if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) || ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
    if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8)
           = *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
      dVar14 = (double)FUN_00db05a0(param_2,param_3,*(ushort *)(param_1 + 0x78) + 3,0,1);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8)
           = *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8)
           = *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8);
    }
    else if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (param_1[0x40] == '\0')) {
        dVar14 = *(double *)
                  (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0xfc) * 8) -
                 *(double *)
                  (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x100) * 8);
        if (*(char *)(param_3 + 0x32f) != '\0') {
          cVar4 = FUN_00db1fd0(param_3,dVar14,local_90,param_1);
        }
        if (cVar4 == '\0') {
          *(undefined8 *)(param_1 + 0x20) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
          dVar11 = *(double *)(param_1 + 0x20);
          dVar13 = *(double *)
                    (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 6) * 8)
                   - *(double *)(param_1 + 0x20);
          dVar16 = (double)FUN_0040c850(dVar14 - dVar11);
          dVar12 = (double)FUN_0040c850(dVar13);
          if (dVar16 <= dVar12) {
            iVar5 = FUN_00c42630(dVar14 - dVar11);
            iVar6 = FUN_00c42630(dVar13);
            if (iVar5 == iVar6) goto LAB_00db284c;
          }
          if (((1e+29 < *(double *)(param_1 + 0xb0) || *(double *)(param_1 + 0xb0) == 1e+29) ||
              (0.0 <= dVar14)) ||
             (-*(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0x30) * 10.0 <= dVar14)) {
            dVar14 = (double)FUN_00c42ff0(dVar14,*(undefined8 *)(param_1 + 0x20),
                                          *(undefined8 *)(param_1 + 0x30),
                                          *(undefined8 *)(param_1 + 0x38),&local_91);
          }
          else {
            dVar14 = (double)FUN_00c42ff0(-(dVar14 + *(double *)(param_1 + 0xb0)),
                                          -(*(double *)(param_1 + 0x20) +
                                           *(double *)(param_1 + 0xb0)),
                                          *(undefined8 *)(param_1 + 0x80),
                                          *(undefined8 *)(param_1 + 0x88),&local_91);
            dVar14 = -(dVar14 + *(double *)(param_1 + 0xb0));
          }
          if (local_91 != '\0') {
            FUN_016e9f80(param_2,param_3,local_91,100);
          }
        }
      }
      else {
        dVar14 = 0.0;
      }
    }
    else {
      if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        if (param_1[0x40] == '\0') {
          dVar14 = *(double *)(param_1 + 0x38);
        }
        else {
          dVar14 = 0.0;
        }
      }
      else {
        dVar14 = *(double *)(param_1 + 0x48);
      }
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 6) * 8)
           = 0;
    }
  }
  else {
    dVar14 = *(double *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
  }
LAB_00db284c:
  if (cVar4 == '\0') {
    *(double *)(param_1 + 0x20) = dVar14;
    cVar4 = FUN_00db2390(param_3);
    if (cVar4 == '\0') {
      uVar8 = *(undefined8 *)(param_3 + 0x430);
      uVar10 = FUN_00c42cb0(dVar14,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x80),
                            *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xb0),uVar8,
                            param_1 + 0x10,param_1 + 0x18);
      uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
      *(undefined8 *)(param_1 + 8) = uVar10;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x130);
      if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x10))) {
        local_b8[0] = dVar14;
        if (*(int *)(lVar1 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar7 = (**(code **)(*(longlong *)**(undefined8 **)(lVar1 + 8) + 0x38))
                          ((longlong *)**(undefined8 **)(lVar1 + 8),local_b8);
        lVar1 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar1 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
        dVar11 = (double)(**(code **)(*plVar2 + 0x10))(plVar2,param_3,uVar7);
        *(double *)(param_1 + 0x10) = dVar11 + *(double *)(param_3 + 0x430);
        lVar1 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar1 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
        uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,param_3,uVar7);
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(double *)(param_1 + 8) = *(double *)(param_1 + 8) + dVar14 * *(double *)(param_1 + 0x10);
      }
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 8);
    if (bVar3 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 8) >> 8),1) <<
               (bVar3 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (*(char *)(param_3 + 0x330) != '\0')) {
      cVar4 = FUN_00db2390(param_3);
      if (cVar4 == '\0') {
        if (*(double *)(param_1 + 0xd0) * *(double *)(param_1 + 0xc0) < dVar14) {
          dVar12 = (double)FUN_0040c2f0(1.0 - *(double *)(param_1 + 0xd0));
          dVar13 = (double)FUN_0040af80((1.0 - *(double *)(param_1 + 200)) * dVar12);
          dVar11 = *(double *)(param_1 + 0xc0);
          dVar16 = *(double *)(param_1 + 200);
          dVar12 = (double)FUN_0040af80((*(double *)(param_1 + 200) + 1.0) * dVar12);
          dVar15 = 1.0 - *(double *)(param_1 + 0xd0) * (*(double *)(param_1 + 200) + 1.0);
          unaff_XMM10_Qa =
               *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 8) +
               *(double *)(param_1 + 0xb8) * ((dVar11 * (1.0 - dVar13)) / (1.0 - dVar16)) +
               (*(double *)(param_1 + 0xb8) / dVar12) *
               (dVar15 * (dVar14 - *(double *)(param_1 + 0xd0) * *(double *)(param_1 + 0xc0)) +
               (*(double *)(param_1 + 200) /
               (*(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xc0))) *
               (dVar14 * dVar14 -
               *(double *)(param_1 + 0xd0) * *(double *)(param_1 + 0xc0) *
               *(double *)(param_1 + 0xd0) * *(double *)(param_1 + 0xc0)));
          *(double *)(param_1 + 0x90) =
               *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 0x10) +
               (*(double *)(param_1 + 0xb8) / dVar12) *
               (dVar15 + (*(double *)(param_1 + 200) * dVar14) / *(double *)(param_1 + 0xc0));
        }
        else {
          dVar16 = 1.0 - dVar14 / *(double *)(param_1 + 0xc0);
          dVar11 = (double)FUN_00c42670(dVar16,*(ulonglong *)(param_1 + 200) ^ 0x8000000000000000);
          *(double *)(param_1 + 0x90) = *(double *)(param_1 + 0xb8) * dVar11;
          unaff_XMM10_Qa =
               (*(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0xb8) * (1.0 - dVar16 * dVar11))
               / (1.0 - *(double *)(param_1 + 200)) +
               *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 8);
          *(double *)(param_1 + 0x90) =
               *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 0x10) +
               *(double *)(param_1 + 0x90);
        }
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 1) * 8) =
           unaff_XMM10_Qa;
      cVar4 = FUN_00db2390(param_3);
      if (((cVar4 == '\0') && (bVar3 == 6)) && (*(char *)(param_3 + 0x330) != '\0')) {
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          *(undefined8 *)
           (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 1) * 8) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 1) * 8);
        }
        FUN_00dafac0(param_2,param_3,&local_a0,local_a8,*(undefined8 *)(param_1 + 0x90),
                     CONCAT44(uVar17,*(ushort *)(param_1 + 0x78) + 1),0,1);
        *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + local_a0;
        dVar11 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x78) + 2,0);
        *(double *)(param_1 + 8) = *(double *)(param_1 + 8) + dVar11;
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          *(undefined8 *)
           (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 2) * 8) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 2) * 8);
        }
      }
    }
  }
  FUN_016ed460(param_2,*param_1 + '\x01',
               *(double *)(param_1 + 8) - *(double *)(param_1 + 0x10) * dVar14,
               *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x90),0);
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8) =
       dVar14;
  *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8) =
       *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8) =
       *(undefined8 *)(param_1 + 0x10);
LAB_00db2f67:
  dVar14 = (double)FUN_00b92140(extraout_XMM0_Qa);
  *(double *)PTR_DAT_02001610 = dVar14 + *(double *)PTR_DAT_02001610;
  return;
}

