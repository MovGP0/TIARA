/* Ghidra address: 00b984a0 */
/* Ghidra symbol: FUN_00b984a0 */


void FUN_00b984a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (lVar1 < *(longlong *)(param_1 + 0x40)) {
      lVar3 = lVar1;
    }
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    lVar1 = lVar1 - *(longlong *)(param_1 + 0x28);
    if (lVar1 < lVar3) {
      lVar2 = 0;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8);
      }
      FUN_00419260(param_1 + 0x20,&DAT_00406578,1,(lVar2 + lVar3) - lVar1);
    }
    FUN_004b84c0(*(undefined8 *)(param_1 + 8),
                 *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28),lVar3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + lVar3;
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + lVar3;
  }
  return;
}

