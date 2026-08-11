/* Ghidra address: 016f0c30 */
/* Ghidra symbol: FUN_016f0c30 */


void FUN_016f0c30(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int local_7c [4];
  int local_6c [15];
  
  iVar2 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      lVar3 = (longlong)iVar1;
      dVar4 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_1 + 0x118) + lVar3 * 8) -
                                   *(double *)(*(longlong *)(param_1 + 0x128) + lVar3 * 8));
      dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x128) + (longlong)iVar1 * 8));
      dVar6 = (double)FUN_0040c850(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8));
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar3 * 8));
      dVar7 = *(double *)(param_1 + 0x3c0) * dVar7;
      if (dVar7 < dVar5) {
        dVar7 = dVar5;
      }
      if (dVar7 < dVar6) {
        dVar7 = dVar6;
      }
      if (*(double *)(param_1 + 0x3c8) * dVar7 + *(double *)(param_1 + 0x3d0) < dVar4) {
        local_6c[0] = iVar1;
        FUN_00597de0(param_2 + 8,local_6c);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
  iVar2 = iVar1 + *(int *)(param_1 + 0x314) + -1;
  if (iVar1 <= iVar2) {
    iVar2 = (iVar2 - iVar1) + 1;
    do {
      lVar3 = (longlong)iVar1;
      dVar4 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_1 + 0x118) + lVar3 * 8) -
                                   *(double *)(*(longlong *)(param_1 + 0x128) + lVar3 * 8));
      dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x128) + (longlong)iVar1 * 8));
      dVar6 = (double)FUN_0040c850(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8));
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar3 * 8));
      dVar7 = *(double *)(param_1 + 0x3c0) * dVar7;
      if (dVar7 < dVar5) {
        dVar7 = dVar5;
      }
      if (dVar7 < dVar6) {
        dVar7 = dVar6;
      }
      if (*(double *)(param_1 + 0x3c8) * dVar7 + *(double *)(param_1 + 0x3d8) < dVar4) {
        local_7c[0] = iVar1;
        FUN_00597de0(param_3 + 8,local_7c);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

