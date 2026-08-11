/* Ghidra address: 01322fb0 */
/* Ghidra symbol: FUN_01322fb0 */


ulonglong FUN_01322fb0(longlong param_1)

{
  double dVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0x1420) != 0) {
    dVar1 = *(double *)(param_1 + 0x720);
    dVar7 = *(double *)(param_1 + 0x730) / 100.0;
    iVar4 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
    iVar2 = 1;
    if (0 < iVar4) {
      do {
        dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 8));
        dVar6 = (double)FUN_0040c850(*(double *)
                                      (*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 8) -
                                     *(double *)
                                      (*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 8));
        if (dVar7 * dVar5 + dVar1 < dVar6) {
          uVar3 = 0;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    dVar1 = *(double *)(param_1 + 0x728);
    iVar2 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
    iVar4 = iVar2 + *(int *)(param_1 + 0x314) + -1;
    if (iVar2 <= iVar4) {
      iVar4 = (iVar4 - iVar2) + 1;
      do {
        dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 8));
        dVar6 = (double)FUN_0040c850(*(double *)
                                      (*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 8) -
                                     *(double *)
                                      (*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 8));
        if (dVar7 * dVar5 + dVar1 < dVar6) {
          uVar3 = 0;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return uVar3 & 0xffffffff;
}

