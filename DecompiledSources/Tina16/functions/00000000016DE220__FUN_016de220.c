/* Ghidra address: 016de220 */
/* Ghidra symbol: FUN_016de220 */


void FUN_016de220(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 double *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_6 == '\0') {
    iVar1 = FUN_01b05690(param_1,param_3,param_4);
    lVar3 = (longlong)iVar1;
    uVar5 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8));
    uVar6 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x178) + lVar3 * 8));
    dVar7 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x138) + lVar3 * 8));
    dVar8 = (double)FUN_00b90630(uVar5,uVar6,*(double *)(param_2 + 0x3c0) * dVar7);
    dVar7 = *(double *)(param_2 + 0x3c8);
    dVar10 = *(double *)(param_2 + 0x3d8);
    dVar12 = *(double *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8) -
             *(double *)(*(longlong *)(param_2 + 0x178) + lVar3 * 8);
    dVar11 = *(double *)(param_2 + 0x3d8);
    dVar9 = (double)FUN_0040c850(dVar12);
    if ((dVar9 <= 1e-30) || (dVar8 < dVar11)) {
      dVar12 = 1e+100;
    }
    else {
      dVar12 = (dVar8 * dVar7 + dVar10) / dVar12;
    }
  }
  else {
    iVar1 = FUN_01b05600(param_1,param_3);
    iVar2 = FUN_01b05600(param_1,param_4);
    lVar4 = (longlong)iVar1;
    lVar3 = (longlong)iVar2;
    uVar5 = FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x118) + lVar4 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8));
    uVar6 = FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x178) + lVar4 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x178) + lVar3 * 8));
    dVar7 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x138) + lVar4 * 8) -
                                 *(double *)(*(longlong *)(param_2 + 0x138) + lVar3 * 8));
    dVar8 = (double)FUN_00b90630(uVar5,uVar6,*(double *)(param_2 + 0x3c0) * dVar7);
    dVar7 = *(double *)(param_2 + 0x3c8);
    dVar10 = *(double *)(param_2 + 0x3d0);
    dVar12 = (*(double *)(*(longlong *)(param_2 + 0x118) + lVar4 * 8) -
             *(double *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8)) -
             (*(double *)(*(longlong *)(param_2 + 0x178) + lVar4 * 8) -
             *(double *)(*(longlong *)(param_2 + 0x178) + lVar3 * 8));
    dVar11 = *(double *)(param_2 + 0x3d0);
    dVar9 = (double)FUN_0040c850(dVar12);
    if ((dVar9 <= 1e-30) || (dVar8 < dVar11)) {
      dVar12 = 1e+100;
    }
    else {
      dVar12 = (dVar8 * dVar7 + dVar10) / dVar12;
    }
  }
  dVar7 = (double)FUN_016ddc90(*(undefined1 *)(param_2 + 0x886),*(undefined1 *)(param_2 + 0xb));
  dVar10 = (double)FUN_016ddcb0(*(undefined1 *)(param_2 + 0x886),*(undefined1 *)(param_2 + 0xb));
  dVar7 = (dVar10 - dVar7) / dVar7;
  if (dVar12 < 1e+30) {
    if (*(char *)(param_2 + 0x886) == '\x01') {
      if (*(char *)(param_2 + 0xb) == '\x01') {
        FUN_0040c850(*(double *)(param_2 + 0x3f8) * dVar12 * dVar7);
        dVar12 = (double)FUN_0040c760();
        dVar12 = *(double *)(param_2 + 0x10) * dVar12;
      }
      else if (*(char *)(param_2 + 0xb) == '\x02') {
        dVar10 = (double)FUN_01b08a30(param_2,0);
        dVar11 = (double)FUN_01b08a30(param_2,1);
        uVar5 = FUN_0040c850((*(double *)(param_2 + 0x3f8) * dVar7 * dVar12 * (dVar10 + dVar11)) /
                             *(double *)(param_2 + 0x10));
        dVar7 = (double)FUN_0040c2f0(uVar5);
        dVar12 = (double)FUN_0040af80(dVar7 / (double)(*(byte *)(param_2 + 0xb) + 1));
        dVar12 = *(double *)(param_2 + 0x10) * dVar12;
      }
    }
    else if (*(char *)(param_2 + 0x886) == '\x02') {
      dVar10 = 0.0;
      iVar2 = 0;
      iVar1 = *(byte *)(param_2 + 0xb) + 1;
      do {
        dVar11 = (double)FUN_01b08a30(param_2,iVar2);
        dVar10 = dVar10 + dVar11;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      dVar12 = (double)FUN_0040c850((dVar12 * *(double *)(param_2 + 0x3f8) * dVar7 * dVar10) /
                                    *(double *)(param_2 + 0x10));
      if (*(char *)(param_2 + 0xb) != '\0') {
        if (*(char *)(param_2 + 0xb) == '\x01') {
          dVar12 = (double)FUN_0040c760(dVar12);
        }
        else {
          dVar7 = (double)FUN_0040c2f0(dVar12);
          dVar12 = (double)FUN_0040af80(dVar7 / (double)(*(byte *)(param_2 + 0xb) + 1));
        }
      }
      dVar12 = dVar12 * *(double *)(param_2 + 0x10);
    }
  }
  if (dVar12 < *param_5) {
    *param_5 = dVar12;
  }
  return;
}

