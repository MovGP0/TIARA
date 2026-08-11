/* Ghidra address: 00f2e400 */
/* Ghidra symbol: FUN_00f2e400 */


void FUN_00f2e400(longlong param_1,undefined2 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) * 2;
    FUN_00419260(param_1 + 0x40,&DAT_004065c0,1,(longlong)*(int *)(param_1 + 0x4c));
  }
  uVar1 = (ulonglong)*(int *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar1)) {
    uVar1 = FUN_00410a90();
  }
  *(undefined2 *)(lVar2 + uVar1 * 2) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

