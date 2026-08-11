/* Ghidra address: 016e7da0 */
/* Ghidra symbol: FUN_016e7da0 */


double FUN_016e7da0(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar11 = *param_2 * *(double *)(param_1 + 0x20);
  dVar7 = 0.0;
  dVar5 = 0.0;
  dVar8 = 0.0;
  dVar6 = 0.0;
  iVar1 = *(int *)(param_1 + 0xa4);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(param_1 + 0xa8))) {
    if (iVar1 == 0) {
      dVar12 = 0.0;
      dVar13 = 1.0;
      dVar9 = 0.0;
      dVar10 = 0.0;
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + 1) != '\0') && (0 < param_6)) {
        dVar5 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)(*(int *)(param_1 + 0x40) + param_6 + -1) * 8),0,
                                     param_4,param_6,0,param_5,0,1);
      }
    }
    else if (iVar1 == *(int *)(param_1 + 0xa8)) {
      iVar1 = (*(int *)(param_1 + 0xa8) + -1) * 2;
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar9 = 0.0;
      dVar10 = 1.0;
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + (longlong)(iVar1 + 1)) != '\0') &&
         (0 < param_6)) {
        dVar6 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)
                                       (iVar1 * *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x40)
                                        + param_6 + -1) * 8),0,param_4,param_6,0,param_5,0,1);
      }
    }
    else {
      iVar1 = iVar1 * 2;
      iVar2 = iVar1 + -2;
      iVar3 = iVar1 * *(int *)(param_1 + 0x40);
      iVar4 = iVar3 + *(int *)(param_1 + 0x40) * -2;
      dVar7 = (double)FUN_00b90620(*(double *)(param_1 + 0xc0) *
                                   *(double *)(*(longlong *)(param_1 + 0x58) + 0x3d8),
                                   *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8)
                                   - *(double *)
                                      (*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8));
      dVar9 = (*(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar1 + 1) * 8) -
              *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar1 + -1) * 8)) /
              (dVar7 * dVar7);
      dVar10 = *(double *)(param_1 + 0xb8) -
               *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8);
      dVar12 = (*(double *)(param_1 + 0xb8) -
               *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8)) * dVar9;
      dVar13 = 1.0 - dVar10 / dVar7;
      dVar9 = -dVar10 * dVar9;
      dVar10 = dVar10 / dVar7;
      dVar7 = 0.0;
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2) != '\0') && (0 < param_6)) {
        dVar7 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)(iVar4 + param_6 + -1) * 8),0,param_4,param_6,0,
                                     param_5,0,1);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + (longlong)(iVar1 + -1)) != '\0') &&
         (0 < param_6)) {
        dVar5 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)(iVar4 + *(int *)(param_1 + 0x40) + param_6 + -1) *
                                       8),0,param_4,param_6,0,param_5,0,1);
      }
      dVar8 = 0.0;
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1) != '\0') && (0 < param_6)) {
        dVar8 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)(iVar3 + param_6 + -1) * 8),0,param_4,param_6,0,
                                     param_5,0,1);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + (longlong)(iVar1 + 1)) != '\0') &&
         (0 < param_6)) {
        dVar6 = (double)FUN_0165a4e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x90) +
                                       (longlong)(iVar3 + *(int *)(param_1 + 0x40) + param_6 + -1) *
                                       8),0,param_4,param_6,0,param_5,0,1);
      }
    }
    dVar11 = dVar11 + dVar7 * dVar12 + dVar5 * dVar13 + dVar8 * dVar9 + dVar6 * dVar10;
  }
  return dVar11;
}

