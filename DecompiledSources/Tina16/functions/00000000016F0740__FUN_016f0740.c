/* Ghidra address: 016f0740 */
/* Ghidra symbol: FUN_016f0740 */


void FUN_016f0740(longlong param_1,undefined8 param_2,undefined1 *param_3,double *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  uVar4 = FUN_00b92140(0);
  *param_3 = 1;
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x348) = 0;
  iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
  iVar1 = 1;
  if (0 < iVar3) {
    do {
      lVar2 = (longlong)iVar1;
      uVar5 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8));
      uVar6 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8));
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar2 * 8));
      dVar7 = (double)FUN_00b90630(uVar5,uVar6,*(double *)(param_1 + 0x3c0) * dVar7);
      dVar8 = *(double *)(param_1 + 0x3c8) * dVar7 + *(double *)(param_1 + 0x3d0);
      dVar7 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8) -
                                   *(double *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8));
      if (dVar8 < dVar7) {
        *param_4 = dVar8;
        *param_3 = 0;
        *(int *)(param_1 + 0x2ec) = iVar1;
        goto LAB_016f0a6c;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
  iVar3 = iVar1 + *(int *)(param_1 + 0x314) + -1;
  if (iVar1 <= iVar3) {
    iVar3 = (iVar3 - iVar1) + 1;
    do {
      lVar2 = (longlong)iVar1;
      uVar5 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8));
      uVar6 = FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8));
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar2 * 8));
      dVar7 = (double)FUN_00b90630(uVar5,uVar6,*(double *)(param_1 + 0x3c0) * dVar7);
      dVar8 = *(double *)(param_1 + 0x3c8) * dVar7 + *(double *)(param_1 + 0x3d8);
      dVar7 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8) -
                                   *(double *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8));
      if (dVar8 < dVar7) {
        *param_4 = dVar8;
        *param_3 = 0;
        *(int *)(param_1 + 0x2ec) = iVar1;
        goto LAB_016f0a6c;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar1 = 0;
  while ((*(char *)(param_1 + 0x331) == '\0' && (iVar1 < *(int *)(param_1 + 0x2d8)))) {
    iVar1 = iVar1 + 1;
    FUN_016ef480(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8),param_1)
    ;
    *(undefined8 *)(param_1 + 0x348) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8) + 0x128);
  }
  *param_4 = *(double *)(param_1 + 0x3d8);
  *param_3 = *(char *)(param_1 + 0x331) == '\0';
LAB_016f0a6c:
  dVar7 = (double)FUN_00b92140(uVar4);
  *(double *)PTR_DAT_020050f0 = dVar7 + *(double *)PTR_DAT_020050f0;
  return;
}

