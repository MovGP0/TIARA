/* Ghidra address: 00e33560 */
/* Ghidra symbol: FUN_00e33560 */


void FUN_00e33560(int *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar4 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  bVar6 = (char)param_4 - 8;
  if (bVar6 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar6 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    if ((char)param_4 == '\f') {
      dVar14 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x22));
      FUN_016ed7f0(param_3,param_4);
      uVar4 = FUN_0040c850();
      FUN_00b90620(uVar4,0x380b38fb9daa78e4);
      dVar16 = (double)FUN_0040c2f0();
      dVar16 = (double)FUN_0040af80(*(double *)(param_1 + 0xa6) * dVar16);
      uVar4 = FUN_0040c760((*(double *)(param_1 + 0x4c) * 1.10449808e-22 * dVar14) / 3.0 +
                           (*(double *)(param_1 + 0xa8) * *(double *)(param_1 + 0x22) *
                           *(double *)(param_1 + 0x22)) /
                           (dVar16 * *(double *)(param_1 + 0xb8) * *(double *)(param_1 + 0x66) *
                            *(double *)(param_1 + 0xb6) * *(double *)(param_1 + 0x8c)));
      FUN_016ed220(param_2,(char)param_1[2] + '\v',uVar4,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    iVar8 = (int)uVar4;
    if ((*(char *)(param_3 + 0x327) == '\0') &&
       (((*(byte *)(param_3 + 0x88) & 0x40) != 0 || ((*(byte *)(param_3 + 0x88) & 0x80) != 0)))) {
      dVar10 = (double)FUN_01b08a30(param_3,1);
      dVar10 = *(double *)(param_3 + 0x10) / dVar10;
      lVar5 = (longlong)(iVar8 + 0xf);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar5 * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar5 * 8);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar5 * 8);
      dVar16 = (dVar10 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar5 * 8) -
               dVar10 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar5 * 8);
      lVar7 = (longlong)(iVar8 + 0xe);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar7 * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar7 * 8);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar7 * 8);
      dVar14 = (dVar10 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar7 * 8) -
               dVar10 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar7 * 8);
      lVar7 = (longlong)(iVar8 + 0x10);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar7 * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar7 * 8);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar7 * 8);
      dVar10 = (dVar10 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar7 * 8) -
               dVar10 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar7 * 8);
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x11) * 8) =
           *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar5 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar7 * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x11) * 8);
    }
    else {
      dVar16 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xc] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      dVar14 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xb] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      dVar10 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[9] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0xe) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0xf) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x11) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x10) * 8);
    }
    dVar15 = dVar16 - dVar10;
    dVar13 = dVar14 - dVar10;
    if (dVar10 < 0.0) {
      param_1[1] = -1;
    }
    else {
      param_1[1] = 1;
    }
    iVar2 = *param_1;
    dVar1 = *(double *)(param_1 + 0x6c);
    dVar17 = dVar13;
    if (param_1[1] == 1) {
      dVar17 = dVar14;
    }
    dVar17 = dVar17 - dVar1 * (double)iVar2;
    lVar5 = *(longlong *)(param_2 + 0x130);
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x10))) {
      if (*(char *)(param_3 + 0xed7) == '\x01') {
        if (*(int *)(lVar5 + 0x10) == 0) {
          FUN_00594f90();
        }
        dVar11 = (double)(**(code **)(*(longlong *)**(undefined8 **)(lVar5 + 8) + 0x10))
                                   ((longlong *)**(undefined8 **)(lVar5 + 8),param_3,0xffffffff);
        dVar12 = dVar10;
        if (param_1[1] != 1) {
          dVar12 = -dVar10;
        }
        *(double *)(param_1 + 0x22) = dVar11 * dVar12;
        *(double *)(param_1 + 0x24) = dVar11 * dVar17;
        dVar12 = dVar10;
        if (param_1[1] != 1) {
          dVar12 = -dVar10;
        }
        *(double *)(param_1 + 0x2a) = dVar11 * dVar12 * dVar17;
      }
      else {
        local_b8 = dVar13;
        if (param_1[1] == 1) {
          local_b8 = dVar14;
        }
        local_b0 = dVar10;
        if (param_1[1] != 1) {
          local_b0 = -dVar10;
        }
        if (*(int *)(lVar5 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar5 + 8) + 0x28))
                          ((longlong *)**(undefined8 **)(lVar5 + 8),param_3,PTR_DAT_02001080,
                           &local_b8);
        *(undefined8 *)(param_1 + 0x2a) = uVar4;
        lVar5 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar5 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar3 = (longlong *)**(undefined8 **)(lVar5 + 8);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8,param_3,PTR_DAT_02001080,&local_b8);
        *(undefined8 *)(param_1 + 0x22) = local_a8;
        *(undefined8 *)(param_1 + 0x24) = local_a0;
      }
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    *(double *)(param_1 + 0x2a) =
         *(double *)(param_1 + 0x2a) + (double)param_1[1] * *(double *)(param_1 + 0xc2) * dVar10;
    *(double *)(param_1 + 0x24) = *(double *)(param_1 + 0x24) + *(double *)(param_1 + 0xc2);
    *(double *)(param_1 + 0x38) = (double)*param_1 * dVar1 * (double)iVar2;
    *(double *)(param_1 + 0x20) =
         (double)param_1[1] * *(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0xf) * 8) = dVar16;
    *(double *)(param_1 + 0x12) = dVar16;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x11) * 8) = dVar15;
    *(double *)(param_1 + 0x14) = dVar15;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0xe) * 8) = dVar14;
    *(double *)(param_1 + 0xe) = dVar14;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar8 + 0x10) * 8) = dVar10;
    *(double *)(param_1 + 0x16) = dVar10;
    lVar5 = *(longlong *)(param_3 + 0x1b8);
    *(undefined8 *)(lVar5 + (longlong)(iVar8 + 0x13) * 8) = *(undefined8 *)(param_1 + 0x20);
    *(double *)(lVar5 + (longlong)(iVar8 + 0x12) * 8) =
         *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c);
    lVar5 = *(longlong *)(param_3 + 0x1b8);
    *(undefined8 *)(lVar5 + (longlong)(iVar8 + 0x14) * 8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(lVar5 + (longlong)(iVar8 + 0x15) * 8) = *(undefined8 *)(param_1 + 0xb2);
    *(double *)(param_1 + 0x108) =
         (double)*param_1 * (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1a) * dVar16);
    *(double *)(param_1 + 0x10e) =
         (double)*param_1 * (*(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x1e) * dVar15);
    if (param_1[1] < 0) {
      param_1[0x116] = 0;
      param_1[0x117] = 1;
      *(double *)(param_1 + 0x104) =
           (double)-*param_1 *
           (((*(double *)(param_1 + 0x2a) + *(double *)(param_1 + 0x24) * dVar10) -
            *(double *)(param_1 + 0x22) * dVar13) - *(double *)(param_1 + 0x26) * dVar15);
    }
    else {
      param_1[0x116] = 1;
      param_1[0x117] = 0;
      *(double *)(param_1 + 0x104) =
           (double)*param_1 *
           (((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * dVar10) -
            *(double *)(param_1 + 0x22) * dVar14) - *(double *)(param_1 + 0x26) * dVar16);
    }
    FUN_016ed320(param_2,(char)param_1[2] + '\x01',*(undefined8 *)(param_1 + 0x104),
                 *(undefined8 *)(param_1 + 0x24),0);
    FUN_016ed220(param_2,(char)param_1[2] + '\x02',
                 (double)param_1[0x116] * *(double *)(param_1 + 0x22),0);
    FUN_016ed220(param_2,(char)param_1[2] + '\x03',
                 (double)param_1[0x116] * *(double *)(param_1 + 0x26),0);
    FUN_016ed220(param_2,(char)param_1[2] + '\x04',
                 (double)-param_1[0x117] * *(double *)(param_1 + 0x22),0);
    FUN_016ed220(param_2,(char)param_1[2] + '\x05',
                 (double)-param_1[0x117] * *(double *)(param_1 + 0x26),0);
  }
  else {
    if ((char)param_1[0x54] == '\0') {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x4e) = uVar4;
    }
    if (*(char *)((longlong)param_1 + 0x151) == '\0') {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x50) = uVar4;
    }
    if (*(char *)((longlong)param_1 + 0x152) == '\0') {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x52) = uVar4;
    }
  }
  return;
}

