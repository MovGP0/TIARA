/* Ghidra address: 016de690 */
/* Ghidra symbol: FUN_016de690 */


void FUN_016de690(longlong param_1,longlong param_2,int param_3,double *param_4,char param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_1 + 0x84);
  dVar5 = (double)FUN_00db05a0(param_1,param_2,param_3,0,1);
  lVar3 = (longlong)(iVar2 + param_3 + -1);
  uVar6 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8));
  uVar7 = FUN_0040c850(dVar5);
  dVar8 = (double)FUN_00b90630(uVar6,uVar7,
                               *(double *)(param_2 + 0x3c0) *
                               *(double *)(*(longlong *)(param_2 + 0x180) + lVar3 * 8));
  dVar5 = *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) - dVar5;
  if (param_5 == '\0') {
    dVar10 = *(double *)(param_2 + 0x3c8);
    dVar11 = *(double *)(param_2 + 0x3d8);
    dVar1 = *(double *)(param_2 + 0x3d8);
    dVar9 = (double)FUN_0040c850(dVar5);
    if ((dVar9 <= 1e-30) || (dVar8 < dVar1)) {
      dVar5 = 1e+100;
    }
    else {
      dVar5 = (dVar8 * dVar10 + dVar11) / dVar5;
    }
  }
  else {
    dVar10 = *(double *)(param_2 + 0x3c8);
    dVar11 = *(double *)(param_2 + 0x3d0);
    dVar1 = *(double *)(param_2 + 0x3d0);
    dVar9 = (double)FUN_0040c850(dVar5);
    if ((dVar9 <= 1e-30) || (dVar8 < dVar1)) {
      dVar5 = 1e+100;
    }
    else {
      dVar5 = (dVar8 * dVar10 + dVar11) / dVar5;
    }
  }
  dVar8 = (double)FUN_016ddc90(*(undefined1 *)(param_2 + 0x886),*(undefined1 *)(param_2 + 0xb));
  dVar10 = (double)FUN_016ddcb0(*(undefined1 *)(param_2 + 0x886),*(undefined1 *)(param_2 + 0xb));
  dVar8 = (dVar10 - dVar8) / dVar8;
  if (dVar5 < 1e+30) {
    if (*(char *)(param_2 + 0x886) == '\x01') {
      if (*(char *)(param_2 + 0xb) == '\x01') {
        FUN_0040c850(*(double *)(param_2 + 0x3f8) * dVar5 * dVar8);
        dVar5 = (double)FUN_0040c760();
        dVar5 = *(double *)(param_2 + 0x10) * dVar5;
      }
      else if (*(char *)(param_2 + 0xb) == '\x02') {
        dVar10 = (double)FUN_01b08a30(param_2,0);
        dVar11 = (double)FUN_01b08a30(param_2,1);
        uVar6 = FUN_0040c850((*(double *)(param_2 + 0x3f8) * dVar8 * dVar5 * (dVar10 + dVar11)) /
                             *(double *)(param_2 + 0x10));
        dVar8 = (double)FUN_0040c2f0(uVar6);
        dVar5 = (double)FUN_0040af80(dVar8 / (double)(*(byte *)(param_2 + 0xb) + 1));
        dVar5 = *(double *)(param_2 + 0x10) * dVar5;
      }
    }
    else if (*(char *)(param_2 + 0x886) == '\x02') {
      dVar10 = 0.0;
      iVar2 = 0;
      iVar4 = *(byte *)(param_2 + 0xb) + 1;
      do {
        dVar11 = (double)FUN_01b08a30(param_2,iVar2);
        dVar10 = dVar10 + dVar11;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      dVar5 = (double)FUN_0040c850((dVar5 * *(double *)(param_2 + 0x3f8) * dVar8 * dVar10) /
                                   *(double *)(param_2 + 0x10));
      if (*(char *)(param_2 + 0xb) != '\0') {
        if (*(char *)(param_2 + 0xb) == '\x01') {
          dVar5 = (double)FUN_0040c760(dVar5);
        }
        else {
          dVar8 = (double)FUN_0040c2f0(dVar5);
          dVar5 = (double)FUN_0040af80(dVar8 / (double)(*(byte *)(param_2 + 0xb) + 1));
        }
      }
      dVar5 = dVar5 * *(double *)(param_2 + 0x10);
    }
  }
  if (dVar5 < *param_4) {
    *param_4 = dVar5;
  }
  return;
}

