/* Ghidra address: 00878c80 */
/* Ghidra symbol: FUN_00878c80 */


void FUN_00878c80(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + -8);
  }
  lVar2 = lVar2 - param_3;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  iVar1 = (int)lVar2;
  if ((-1 < param_4) && (param_4 < iVar1)) {
    iVar1 = param_4;
  }
  if (0 < iVar1) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)iVar1;
    if (*(longlong *)(param_1 + 0x10) < *(longlong *)(param_1 + 8)) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
    }
  }
  return;
}

