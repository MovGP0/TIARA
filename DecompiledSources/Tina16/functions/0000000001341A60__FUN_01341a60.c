/* Ghidra address: 01341a60 */
/* Ghidra symbol: FUN_01341a60 */


void FUN_01341a60(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_79 [16];
  undefined1 local_69 [57];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_01cc6560(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x18));
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_01cc6580(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x40));
    }
    else {
      FUN_01cc6580(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x40));
      uVar3 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0xe8));
      cVar1 = *(char *)(param_1 + 0x27);
      uVar8 = FUN_00b90650(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),
                           *(undefined8 *)(param_1 + 0x30));
      if (cVar1 != '\0') {
        uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390);
      }
      _set_preview_time(uVar3,uVar8);
      FUN_015f6f60(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0xc0),
                   *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68));
    }
    uVar8 = FUN_01cc6540(*(undefined8 *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    if (*(char *)(param_1 + 0x27) != '\0') {
      FUN_013415b0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
    }
    cVar1 = *(char *)(param_1 + 0x27);
    dVar9 = (double)FUN_00b90650(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),
                                 *(undefined8 *)(param_1 + 0x30));
    dVar11 = *(double *)(*(longlong *)(param_1 + 0x68) + 0x390);
    if (cVar1 == '\0') {
      dVar11 = dVar9;
    }
    if (*(char *)(param_1 + 0x27) == '\0') {
      dVar9 = *(double *)(param_1 + 0x28);
    }
    else if (*(double *)(*(longlong *)(param_1 + 0x68) + 0xdd0) <= 0.0) {
      dVar9 = *(double *)(param_1 + 0x28);
    }
    else {
      dVar9 = (double)FUN_00b90620(*(undefined8 *)(param_1 + 0x28),
                                   dVar11 - *(double *)(*(longlong *)(param_1 + 0x68) + 0xdd0));
    }
    iVar6 = 0;
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10);
    if (-1 < iVar7 + -1) {
      do {
        lVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),iVar6);
        lVar5 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8),iVar6);
        uVar2 = *(undefined4 *)(lVar4 + 0x2c);
        FUN_01cc1350(lVar4,local_69,0);
        FUN_01cc1380(lVar4,local_79,0);
        *(undefined4 *)(lVar5 + 0x2c) = uVar2;
        FUN_01cc13a0(lVar5,0,local_69,local_79);
        FUN_01cc0ac0(lVar5,dVar9,dVar11);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0xc0) + 8) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar8 = FUN_01d347d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0xc0) + 8),iVar6);
        FUN_01cc0ac0(uVar8,dVar9,dVar11);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(char *)(param_1 + 0x27) != '\0') {
      dVar10 = dVar9;
      if ((*(char *)(param_1 + 0x27) != '\0') &&
         (0.0 < *(double *)(*(longlong *)(param_1 + 0x68) + 0xdd0))) {
        dVar10 = (double)FUN_00b90620(0,dVar9 - *(double *)(*(longlong *)(param_1 + 0x68) + 0xdd0) /
                                                2.0);
      }
      FUN_01341600(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),dVar10);
      iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10);
      iVar6 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8),iVar6);
          if (*(char *)(lVar4 + 8) == '\x01') {
            FUN_01cc0ac0(lVar4,dVar9,dVar11);
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (*(longlong *)PTR_DAT_02001e00 != 0) {
      FUN_013e2500(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x40),0,1);
      uVar8 = FUN_00b90650(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390),
                           *(undefined8 *)(param_1 + 0x30));
      FUN_013d3710(*(undefined8 *)(param_1 + 0x38),uVar8);
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x390);
    if (*(longlong *)PTR_DAT_02004a28 == 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x1418);
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(longlong *)PTR_DAT_02004a28 + 0x24);
    }
  }
  return;
}

