/* Ghidra address: 004c9720 */
/* Ghidra symbol: FUN_004c9720 */


void FUN_004c9720(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30);
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38)) =
       *(undefined1 *)(param_1 + 0x54);
  lVar1 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_00409a70(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x18),lVar1);
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                     *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)iVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x28)) {
    uVar3 = thunk_FUN_004ae3c6(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x38) + -1);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_004c8dd0(param_1,PTR_PTR_02003970);
    }
  }
  *(undefined1 *)(param_1 + 0x54) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38));
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38)) = 0;
  return;
}

