/* Ghidra address: 0168b1a0 */
/* Ghidra symbol: FUN_0168b1a0 */


void FUN_0168b1a0(short *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 in_RAX;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double unaff_XMM9_Qa;
  double unaff_XMM10_Qa;
  double unaff_XMM11_Qa;
  double unaff_XMM12_Qa;
  
  bVar3 = (char)param_4 - 8;
  if (bVar3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar3 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if ((char)param_4 == '\f') {
      if (*(double *)(param_1 + 0xe0) != 0.0) {
        if (*(double *)(param_1 + 0x68) <= 0.0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0040c760(*(double *)(param_1 + 0x7c) * 5.5224904e-23 *
                               *(double *)(param_1 + 0x68));
        }
        FUN_016ed220(param_2,(char)param_1[0x150] + '\x02',uVar5,0);
      }
      dVar6 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x60));
      if (dVar6 == 0.0) {
        uVar5 = 0;
      }
      else {
        dVar7 = (double)FUN_00c42670(dVar6,*(undefined8 *)(param_1 + 0x130));
        dVar8 = (double)FUN_016ed7f0(param_3,param_4);
        uVar5 = FUN_0040c760(dVar6 * 3.2043834e-19 + (*(double *)(param_1 + 300) * dVar7) / dVar8);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\x03',uVar5,0);
      dVar6 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 100));
      if (dVar6 == 0.0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0040c760(dVar6 * 3.2043834e-19);
      }
      FUN_016ed220(param_2,(char)param_1[1] + '\x04',uVar5,0);
    }
  }
  else {
    *(double *)(param_1 + 0x3c) = *(double *)(param_1 + 0x7c) * 8.61708745588933e-05;
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x120);
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
        if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 10,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 10,uVar5,0);
          dVar6 = (double)FUN_00db05a0(param_2,param_3,(ushort)param_1[0x5c] + 10,0,1);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xb,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xb,uVar5,0);
          dVar7 = (double)FUN_00db05a0(param_2,param_3,(ushort)param_1[0x5c] + 0xb,0,1);
          dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                       *(undefined1 *)((longlong)param_1 + 0xb),
                                       *(undefined1 *)((longlong)param_1 + 9),0);
          dVar8 = (double)(int)*param_1 * dVar8;
          FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                       *(undefined1 *)((longlong)param_1 + 5),*(undefined1 *)((longlong)param_1 + 9)
                       ,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xd,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xd,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xe,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xe,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xf,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xf,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x10,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x10,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x11,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x11,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x12,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x12,uVar5,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0x13,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0x13,uVar5,0);
        }
        else {
          dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                       (char)param_1[5],0);
          dVar6 = (double)(int)*param_1 * dVar6;
          dVar7 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                       *(undefined1 *)((longlong)param_1 + 9),0);
          dVar7 = (double)(int)*param_1 * dVar7;
          dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                       *(undefined1 *)((longlong)param_1 + 0xb),
                                       *(undefined1 *)((longlong)param_1 + 9),0);
          dVar8 = (double)(int)*param_1 * dVar8;
          FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                       *(undefined1 *)((longlong)param_1 + 5),*(undefined1 *)((longlong)param_1 + 9)
                       ,0);
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 10,0);
          *(undefined8 *)(param_1 + 0x30) = uVar5;
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xb,0);
          *(undefined8 *)(param_1 + 0x34) = uVar5;
          uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 0xc,0);
          *(undefined8 *)(param_1 + 0x6c) = uVar5;
        }
      }
      else {
        dVar6 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 10,0);
        dVar7 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,param_1[0x5c] + 0xb,0);
        dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0xb),
                                     *(undefined1 *)((longlong)param_1 + 9),0);
        dVar8 = (double)(int)*param_1 * dVar8;
        FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)((longlong)param_1 + 5)
                     ,*(undefined1 *)((longlong)param_1 + 9),0);
        if ((*(byte *)(param_3 + 0x88) & 0x10) != 0) {
          dVar8 = 0.0;
        }
      }
      *(double *)(param_1 + 0x30) = dVar6;
      *(double *)(param_1 + 0x34) = dVar7;
      *(double *)(param_1 + 0x6c) = dVar8;
      lVar1 = *(longlong *)(param_2 + 0x130);
      if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x10))) {
        if (*(int *)(lVar1 + 0x10) == 0) {
          FUN_00594f90();
        }
        dVar8 = (double)(**(code **)(*(longlong *)**(undefined8 **)(lVar1 + 8) + 0x10))
                                  ((longlong *)**(undefined8 **)(lVar1 + 8),param_3,0xffffffff);
        unaff_XMM9_Qa = dVar8 + *(double *)(param_3 + 0x430);
        lVar1 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar1 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
        dVar8 = (double)(**(code **)(*plVar2 + 0x20))(plVar2,param_3,0xffffffff);
        unaff_XMM11_Qa = dVar8 + *(double *)(param_3 + 0x430) * dVar6;
        lVar1 = *(longlong *)(param_2 + 0x130);
        if (*(uint *)(lVar1 + 0x10) < 2) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 8);
        dVar6 = (double)(**(code **)(*plVar2 + 0x10))(plVar2,param_3,0xffffffff);
        unaff_XMM10_Qa = dVar6 + *(double *)(param_3 + 0x430);
        lVar1 = *(longlong *)(param_2 + 0x130);
        if (*(uint *)(lVar1 + 0x10) < 2) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 8);
        dVar6 = (double)(**(code **)(*plVar2 + 0x20))(plVar2,param_3,0xffffffff);
        unaff_XMM12_Qa = dVar6 + *(double *)(param_3 + 0x430) * dVar7;
      }
      uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      uVar5 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,param_1[0x5c] + 8,0);
      *(undefined8 *)(param_1 + 8) = uVar5;
      FUN_016ed460(param_2,(char)param_1[1] + '\x01',
                   ((double)(int)*param_1 * unaff_XMM11_Qa) / *(double *)(param_1 + 0x84),
                   unaff_XMM9_Qa / *(double *)(param_1 + 0x84),0,0);
      FUN_016ed460(param_2,(char)param_1[1] + '\x02',
                   ((double)(int)*param_1 * unaff_XMM12_Qa) / *(double *)(param_1 + 0x88),
                   unaff_XMM10_Qa / *(double *)(param_1 + 0x88),0,0);
      FUN_016ed320(param_2,(char)param_1[1] + '\x03',
                   (double)(int)*param_1 * (unaff_XMM11_Qa - unaff_XMM12_Qa),0,0);
      FUN_016ed220(param_2,(char)param_1[1] + '\x04',unaff_XMM9_Qa,0);
      FUN_016ed220(param_2,(char)param_1[1] + '\x05',-unaff_XMM10_Qa,0);
    }
    else {
      if ((char)param_1[0x134] == '\0') {
        uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                             *(undefined1 *)((longlong)param_1 + 5),
                             *(undefined1 *)((longlong)param_1 + 7),0);
        *(undefined8 *)(param_1 + 0x138) = uVar5;
      }
      if (*(char *)((longlong)param_1 + 0x269) == '\0') {
        uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                             *(undefined1 *)((longlong)param_1 + 7),0);
        *(undefined8 *)(param_1 + 0x13c) = uVar5;
      }
    }
  }
  return;
}

