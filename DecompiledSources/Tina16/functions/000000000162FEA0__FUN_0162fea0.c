/* Ghidra address: 0162fea0 */
/* Ghidra symbol: FUN_0162fea0 */


ulonglong FUN_0162fea0(longlong param_1,longlong param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x108) <= 1e-18) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = (*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x110)) /
            (*(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x108));
  }
  dVar2 = (double)FUN_0040c850(dVar5);
  if (1e-09 < dVar2) {
    dVar2 = *(double *)(*(longlong *)(param_2 + 0x38) + 0x380);
    if (*(char *)(param_1 + 0xca) == '\0') {
      *(double *)(param_1 + 0xe0) = dVar2;
    }
    if (*(char *)(param_1 + 0xcb) == '\0') {
      uVar3 = FUN_0040c850(dVar5 * *(double *)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xe8) = uVar3;
    }
    dVar4 = (double)FUN_0040c850(dVar5 * *(double *)(param_1 + 0xe0));
    if (*(double *)(param_1 + 0xe8) <= dVar4 && dVar4 != *(double *)(param_1 + 0xe8)) {
      dVar4 = *(double *)(param_1 + 0xe8);
    }
    *(double *)(param_1 + 0x118) =
         -*(double *)(param_1 + 0x110) / dVar5 + *(double *)(param_1 + 0x108);
    dVar5 = (double)FUN_0040c850(*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100));
    if (dVar2 <= dVar5) {
      if (dVar5 < *(double *)(param_1 + 0xe0)) {
        dVar5 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xf8));
        if (dVar5 < dVar4) goto LAB_0163008b;
      }
      if (*(double *)(param_1 + 0x118) < *(double *)(param_1 + 0x100) ||
          *(double *)(param_1 + 0x118) == *(double *)(param_1 + 0x100)) {
        if (*(double *)(param_1 + 0x108) <= *(double *)(param_1 + 0x118)) {
          uVar3 = FUN_00b90620((*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x108)) * 0.5,
                               dVar2);
          FUN_016ed960(0,*(undefined8 *)(param_2 + 0x38),uVar3,1);
          uVar1 = 0;
        }
      }
      else {
        uVar3 = FUN_00b90620(*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100),dVar2);
        FUN_016ed960(0,*(undefined8 *)(param_2 + 0x38),uVar3,0);
      }
    }
  }
LAB_0163008b:
  return uVar1 & 0xffffffff;
}

