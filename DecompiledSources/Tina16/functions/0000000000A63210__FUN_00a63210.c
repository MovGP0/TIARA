/* Ghidra address: 00a63210 */
/* Ghidra symbol: FUN_00a63210 */


void FUN_00a63210(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x86) != 0) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + -4);
    }
    FUN_004169f0(param_1 + 0x88,iVar2 + 1);
    lVar1 = FUN_00414de0(param_1 + 0x88);
    *(undefined2 *)(lVar1 + -2 + (longlong)(iVar2 + 1) * 2) = *(undefined2 *)(param_1 + 0x86);
  }
  *(undefined2 *)(param_1 + 0x86) = param_2;
  return;
}

