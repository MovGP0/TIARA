/* Ghidra address: 01663480 */
/* Ghidra symbol: FUN_01663480 */


void FUN_01663480(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xb8);
    FUN_0165e150(param_1,*(undefined8 *)(param_1 + 0x118));
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xdd);
    FUN_0165dfb0(param_1,0x10);
  }
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xdd);
  FUN_0165dfb0(param_1,0x9c);
  FUN_0165dfb0(param_1,0x24);
  FUN_0165e0c0(param_1,*(int *)(param_1 + 0x13ac0) * 8);
  *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) + 1;
  if (*(int *)(param_1 + 0x13ac4) < *(int *)(param_1 + 0x13ac0)) {
    *(int *)(param_1 + 0x13ac4) = *(int *)(param_1 + 0x13ac0);
  }
  return;
}

