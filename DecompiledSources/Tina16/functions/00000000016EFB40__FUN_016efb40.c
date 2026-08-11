/* Ghidra address: 016efb40 */
/* Ghidra symbol: FUN_016efb40 */


undefined8 FUN_016efb40(longlong param_1,double param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  uVar6 = FUN_00b92140(0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x110) + 0x120) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x110) + 9);
  dVar9 = param_2 * 2.0;
  if (*(double *)(param_1 + 0x3f8) <= 100.0 && *(double *)(param_1 + 0x3f8) != 100.0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    if (*(char *)(lVar2 + 0x120) == '\0') {
      dVar9 = (double)FUN_016ef6b0(*(undefined8 *)(lVar2 + 0x130),0);
    }
    else {
      *(int *)(lVar2 + 0xa4) = *(int *)(lVar2 + 0xa0) + 2;
      iVar5 = *(int *)(lVar2 + 0xd0) + -1;
      iVar4 = 1;
      if (0 < iVar5) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xc0) + (longlong)iVar4 * 8);
          if (*(char *)(lVar3 + 0x1b) != '\0') {
            FUN_004d1ec0(lVar3);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      dVar7 = (double)FUN_016ef6b0(*(undefined8 *)(lVar2 + 0x130),0);
      if (dVar7 < dVar9) {
        dVar9 = dVar7;
      }
      *(int *)(lVar2 + 0xa0) = *(int *)(lVar2 + 0xa0) + 2;
      iVar5 = *(int *)(lVar2 + 0xd0) + -1;
      iVar4 = 1;
      if (0 < iVar5) {
        do {
          while (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 200) + (longlong)iVar4 * 8) + 0x60) <
                 *(int *)(lVar2 + 0xa0)) {
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xc0) + (longlong)iVar4 * 8);
            if (*(char *)(lVar3 + 0x1b) != '\0') {
              FUN_004d1ec0(lVar3);
            }
          }
          pdVar1 = (double *)
                   (*(longlong *)(*(longlong *)(lVar2 + 200) + (longlong)iVar4 * 8) + 0x70);
          if (*pdVar1 <= dVar9 && dVar9 != *pdVar1) {
            dVar9 = *(double *)
                     (*(longlong *)(*(longlong *)(lVar2 + 200) + (longlong)iVar4 * 8) + 0x70);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  uVar8 = FUN_00b90620(dVar9,*(undefined8 *)(param_1 + 0x368));
  uVar8 = FUN_00b90650(param_2 * 2.0,uVar8);
  dVar9 = (double)FUN_00b92140(uVar6);
  *(double *)PTR_DAT_02003c58 = dVar9 + *(double *)PTR_DAT_02003c58;
  return uVar8;
}

