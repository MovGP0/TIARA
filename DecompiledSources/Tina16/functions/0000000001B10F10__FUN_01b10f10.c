/* Ghidra address: 01b10f10 */
/* Ghidra symbol: FUN_01b10f10 */


void FUN_01b10f10(longlong param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (dVar4 = (double)FUN_016ed7b0(*(undefined8 *)(param_1 + 0x20),6), dVar4 < param_2)) {
    iVar3 = 0;
    while ((iVar3 < *(int *)(param_1 + 0x18) &&
           (pdVar1 = (double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8),
           *pdVar1 <= param_2 && param_2 != *pdVar1))) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar3 < iVar2) {
      if (*(double *)(param_1 + 8) <
          *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) - param_2) {
        if ((1 < *(int *)(param_1 + 0x18)) &&
           (param_2 - *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar3 + -1) * 8) <=
            *(double *)(param_1 + 8))) {
          return;
        }
        if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18) + 1) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1000;
          FUN_00409620(param_1 + 0x10,(longlong)(*(int *)(param_1 + 0x1c) * 8));
        }
        FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8,
                     *(longlong *)(param_1 + 0x10) + (longlong)(iVar3 + 1) * 8,
                     (longlong)((*(int *)(param_1 + 0x18) - iVar3) * 8));
        *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) = param_2;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) = param_2;
      }
    }
    else if (*(double *)(param_1 + 8) <
             param_2 - *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar2 + -1) * 8)) {
      if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1000;
        FUN_00409620(param_1 + 0x10,(longlong)(*(int *)(param_1 + 0x1c) * 8));
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8) =
           param_2;
    }
  }
  return;
}

