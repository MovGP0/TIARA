/* Ghidra address: 016f3820 */
/* Ghidra symbol: FUN_016f3820 */


void FUN_016f3820(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  iVar5 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      lVar4 = (longlong)iVar3;
      dVar6 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8));
      lVar1 = *(longlong *)(param_1 + 0x138);
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(lVar1 + lVar4 * 8));
      if (dVar7 < dVar6) {
        if (dVar6 <= 10000.0) {
          *(undefined8 *)(lVar1 + lVar4 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8);
        }
        else {
          iVar2 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8));
          *(double *)(*(longlong *)(param_1 + 0x138) + lVar4 * 8) = (double)iVar2 * dVar6;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
  iVar5 = iVar3 + *(int *)(param_1 + 0x314) + -1;
  if (iVar3 <= iVar5) {
    iVar5 = (iVar5 - iVar3) + 1;
    do {
      lVar4 = (longlong)iVar3;
      dVar6 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8));
      lVar1 = *(longlong *)(param_1 + 0x138);
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(lVar1 + lVar4 * 8));
      if (dVar7 < dVar6) {
        if (dVar6 <= 100.0) {
          *(undefined8 *)(lVar1 + lVar4 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8);
        }
        else {
          iVar2 = FUN_00c42630(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8));
          *(double *)(*(longlong *)(param_1 + 0x138) + lVar4 * 8) = (double)iVar2 * dVar6;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

