/* Ghidra address: 0181cbc0 */
/* Ghidra symbol: FUN_0181cbc0 */


void FUN_0181cbc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006e65a0(*(undefined8 *)(param_1 + 0x6e8));
  if (*(int *)(param_1 + 0x704) < iVar1) {
    iVar1 = FUN_006e6550(*(undefined8 *)(param_1 + 0x6e8));
    if (iVar1 <= *(int *)(param_1 + 0x704)) {
      FUN_0181c960(param_1,*(int *)(param_1 + 0x704) + 1);
    }
  }
  return;
}

