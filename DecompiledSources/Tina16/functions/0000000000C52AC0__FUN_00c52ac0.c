/* Ghidra address: 00c52ac0 */
/* Ghidra symbol: FUN_00c52ac0 */


void FUN_00c52ac0(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
    *(undefined1 *)(param_1 + 0x88) = 0;
    if ((*(int *)(param_1 + 0x8c) == 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
      if (iVar1 < *(int *)(*(longlong *)(param_1 + 0x78) + 0x10) + -1) {
        FUN_004aee50(*(longlong *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
    }
  }
  return;
}

