/* Ghidra address: 00db3010 */
/* Ghidra symbol: FUN_00db3010 */


void FUN_00db3010(char *param_1,longlong param_2,longlong param_3,undefined4 param_4)

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
  
  bVar3 = (char)param_4 - 8;
  if (bVar3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar3 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if ((char)param_4 == '\f') {
      dVar6 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
      if (dVar6 == 0.0) {
        uVar5 = 0;
      }
      else {
        dVar7 = (double)FUN_00c42670(dVar6,*(undefined8 *)(param_1 + 0xe8));
        dVar8 = (double)FUN_016ed7f0(param_3,param_4);
        uVar5 = FUN_0040c760(dVar6 * 3.2043834e-19 + (*(double *)(param_1 + 0xe0) * dVar7) / dVar8);
      }
      FUN_016ed220(param_2,*param_1 + '\x02',uVar5,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) || ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
      if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
        dVar6 = (double)FUN_00db05a0(param_2,param_3,*(ushort *)(param_1 + 0x78) + 3,0,1);
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8);
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8);
      }
      else {
        dVar6 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0xfc) * 8)
                - *(double *)
                   (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x100) * 8);
      }
    }
    else {
      dVar6 = *(double *)
               (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
    }
    lVar1 = *(longlong *)(param_2 + 0x130);
    if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x10))) {
      if (*(int *)(lVar1 + 0x10) == 0) {
        FUN_00594f90();
      }
      dVar7 = (double)(**(code **)(*(longlong *)**(undefined8 **)(lVar1 + 8) + 0x10))
                                ((longlong *)**(undefined8 **)(lVar1 + 8),param_3,0xffffffff);
      *(double *)(param_1 + 0x10) = dVar7 + *(double *)(param_3 + 0x430);
      lVar1 = *(longlong *)(param_2 + 0x130);
      if (*(int *)(lVar1 + 0x10) == 0) {
        FUN_00594f90();
      }
      plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
      dVar7 = (double)(**(code **)(*plVar2 + 0x20))(plVar2,param_3,0xffffffff);
      *(double *)(param_1 + 8) = dVar7 + *(double *)(param_3 + 0x430) * dVar6;
    }
    FUN_016ed460(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10),0,0);
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8) =
         dVar6;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8) =
         *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 4) * 8) =
         *(undefined8 *)(param_1 + 0x10);
  }
  else {
    if (param_1[0x41] == '\0') {
      uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[4],0);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8) =
         *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 6) * 8) =
         0;
  }
  return;
}

