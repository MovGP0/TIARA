/* Ghidra address: 01686e90 */
/* Ghidra symbol: FUN_01686e90 */


undefined8
FUN_01686e90(double param_1,double param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double extraout_XMM0_Qa;
  double dVar10;
  double dVar11;
  
  param_1 = param_1 - *(double *)(param_3 + 0x60);
  dVar10 = param_2 - *(double *)(param_3 + 0x68);
  dVar1 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xd,0);
  dVar2 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0x11,0);
  dVar3 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0x12,0);
  dVar4 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0x12,0);
  dVar5 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0x10,0);
  dVar5 = (dVar1 + (dVar2 + dVar3) * param_1) - (dVar4 + dVar5) * dVar10;
  dVar1 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xe,0);
  dVar2 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xf,0);
  dVar3 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0x10,0);
  dVar11 = dVar1 + dVar2 * param_1 + dVar3 * dVar10;
  dVar1 = *(double *)(param_5 + 0x3c8);
  dVar2 = *(double *)(param_5 + 0x3d0);
  dVar3 = *(double *)(param_5 + 0x3d8);
  dVar4 = *(double *)(param_5 + 0x3e0);
  if ((*(char *)(param_5 + 0x32f) != '\0') && ((*(byte *)(param_5 + 0x88) & 0x80) == 0)) {
    dVar6 = (double)FUN_0040c850(param_1);
    uVar7 = FUN_0040c850();
    uVar8 = FUN_0040c850(*(undefined8 *)(param_3 + 0x60));
    dVar9 = (double)FUN_00b90620(uVar7,uVar8);
    if (dVar6 < dVar1 * dVar9 + dVar2) {
      dVar10 = (double)FUN_0040c850(dVar10);
      uVar7 = FUN_0040c850(param_2);
      uVar8 = FUN_0040c850(*(undefined8 *)(param_3 + 0x68));
      dVar6 = (double)FUN_00b90620(uVar7,uVar8);
      if (dVar10 < dVar1 * dVar6 + dVar2) {
        dVar2 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xd,0);
        dVar2 = (double)FUN_0040c850(dVar5 - dVar2);
        uVar7 = FUN_0040c850(dVar5);
        FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xd,0);
        uVar8 = FUN_0040c850();
        dVar5 = (double)FUN_00b90620(uVar7,uVar8);
        if (dVar2 < dVar1 * dVar5 + dVar3) {
          dVar2 = (double)FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xe,0)
          ;
          dVar2 = (double)FUN_0040c850(dVar11 - dVar2);
          uVar7 = FUN_0040c850(dVar11);
          FUN_016eebe0(param_4,param_5 + 0x1b8,0,*(short *)(param_3 + 0xb8) + 0xe,0);
          uVar8 = FUN_0040c850();
          FUN_00b90620(uVar7,uVar8);
          if (dVar2 < dVar1 * extraout_XMM0_Qa + dVar4) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

