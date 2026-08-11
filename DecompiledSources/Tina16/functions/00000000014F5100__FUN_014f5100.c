/* Ghidra address: 014f5100 */
/* Ghidra symbol: FUN_014f5100 */


void FUN_014f5100(longlong param_1)

{
  FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x13b8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x13b8),(longlong)(*(int *)(param_1 + 0x691) * 8));
  }
  FUN_01b079d0(param_1);
  return;
}

