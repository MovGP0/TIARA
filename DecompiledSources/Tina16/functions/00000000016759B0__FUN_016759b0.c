/* Ghidra address: 016759b0 */
/* Ghidra symbol: FUN_016759b0 */


void FUN_016759b0(int *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 in_RAX;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  bVar4 = (char)param_4 - 8;
  if (bVar4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar4 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if ((char)param_4 == '\f') {
      uVar6 = FUN_0040c850(*(undefined8 *)(param_1 + 0x2a));
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x22));
      if (*(double *)(param_1 + 0x2a) == 0.0) {
        dVar7 = 0.0;
      }
      else {
        dVar8 = (double)FUN_00c42670(uVar6,*(undefined8 *)(param_1 + 0x58));
        dVar9 = (double)FUN_016ed7f0(param_3,param_4);
        dVar7 = (double)FUN_0040c760((*(double *)(param_1 + 0x5a) * 1.10449808e-22 * dVar7) / 3.0 +
                                     (*(double *)(param_1 + 0x56) * dVar8) / dVar9);
      }
      FUN_016ed220(param_2,(char)param_1[2] + '\r',dVar7 * *(double *)(param_1 + 0x62),0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    dVar7 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
    iVar1 = *param_1;
    dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
    dVar8 = (double)*param_1 * dVar8;
    dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
    dVar9 = (double)*param_1 * dVar9;
    dVar12 = dVar8 - dVar9;
    *(double *)(param_1 + 0xe) = dVar8;
    *(double *)(param_1 + 0x10) = dVar12;
    *(double *)(param_1 + 0x12) = (double)iVar1 * dVar7;
    *(double *)(param_1 + 0x14) = (double)iVar1 * dVar7 - dVar9;
    *(double *)(param_1 + 0x16) = dVar9;
    FUN_016ed320(param_2,(char)param_1[2] + '\a',0,0,0);
    FUN_016ed320(param_2,(char)param_1[2] + '\x06',0,0,0);
    if (dVar9 < 0.0) {
      param_1[1] = -1;
    }
    else {
      param_1[1] = 1;
    }
    *(double *)(param_1 + 0x38) = (double)*param_1 * *(double *)(param_1 + 0x32);
    if (param_1[1] == 1) {
      dVar7 = dVar8 - *(double *)(param_1 + 0x38);
    }
    else {
      dVar7 = dVar12 - *(double *)(param_1 + 0x38);
    }
    lVar2 = *(longlong *)(param_2 + 0x130);
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x10))) {
      if (*(char *)(param_3 + 0xed7) == '\x01') {
        if (*(int *)(lVar2 + 0x10) == 0) {
          FUN_00594f90();
        }
        dVar10 = (double)(**(code **)(*(longlong *)**(undefined8 **)(lVar2 + 8) + 0x10))
                                   ((longlong *)**(undefined8 **)(lVar2 + 8),param_3,0xffffffff);
        dVar11 = dVar9;
        if (param_1[1] != 1) {
          dVar11 = -dVar9;
        }
        *(double *)(param_1 + 0x22) = dVar10 * dVar11;
        *(double *)(param_1 + 0x24) = dVar10 * dVar7;
        dVar11 = dVar9;
        if (param_1[1] != 1) {
          dVar11 = -dVar9;
        }
        *(double *)(param_1 + 0x2a) = dVar10 * dVar11 * dVar7;
      }
      else {
        local_80 = dVar9;
        local_88 = dVar8;
        if (param_1[1] != 1) {
          local_80 = -dVar9;
          local_88 = dVar12;
        }
        if (*(int *)(lVar2 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar6 = (**(code **)(*(longlong *)**(undefined8 **)(lVar2 + 8) + 0x28))
                          ((longlong *)**(undefined8 **)(lVar2 + 8),param_3,&DAT_01f7e478,&local_88)
        ;
        *(undefined8 *)(param_1 + 0x2a) = uVar6;
        lVar2 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar2 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar3 = (longlong *)**(undefined8 **)(lVar2 + 8);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_78,param_3,&DAT_01f7e478,&local_88);
        *(undefined8 *)(param_1 + 0x22) = local_78;
        *(undefined8 *)(param_1 + 0x24) = local_70;
      }
    }
    if (param_1[1] == 1) {
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)*param_1 *
                   ((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * dVar9) -
                   *(double *)(param_1 + 0x22) * dVar8) * *(double *)(param_1 + 0x62),
                   (*(double *)(param_1 + 0x24) + *(double *)(param_3 + 0x430)) *
                   *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',
                   *(double *)(param_1 + 0x22) * *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',0,0);
    }
    else {
      FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                   (double)-*param_1 *
                   ((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * -dVar9) -
                   *(double *)(param_1 + 0x22) * dVar12) * *(double *)(param_1 + 0x62),
                   (*(double *)(param_1 + 0x24) + *(double *)(param_3 + 0x430)) *
                   *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x02',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x03',0,0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x04',
                   -*(double *)(param_1 + 0x22) * *(double *)(param_1 + 0x62),0);
      FUN_016ed220(param_2,(char)param_1[2] + '\x05',0,0);
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x2a);
    *(double *)(param_1 + 0x20) =
         (double)param_1[1] * *(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x1c);
  }
  else {
    if ((char)param_1[100] == '\0') {
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x5c) = uVar6;
    }
    if (*(char *)((longlong)param_1 + 0x191) == '\0') {
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x5e) = uVar6;
    }
    if (*(char *)((longlong)param_1 + 0x192) == '\0') {
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x60) = uVar6;
    }
  }
  return;
}

