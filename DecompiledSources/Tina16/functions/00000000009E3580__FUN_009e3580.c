/* Ghidra address: 009e3580 */
/* Ghidra symbol: FUN_009e3580 */


ulonglong FUN_009e3580(longlong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (param_2 / 3) * 4 + 4;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
    }
    uVar2 = uVar2 + (uVar2 / (ulonglong)(longlong)*(int *)(param_1 + 8)) *
                    (longlong)(iVar1 * param_3);
  }
  return uVar2;
}

