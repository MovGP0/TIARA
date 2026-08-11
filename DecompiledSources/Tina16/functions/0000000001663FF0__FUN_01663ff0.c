/* Ghidra address: 01663ff0 */
/* Ghidra symbol: FUN_01663ff0 */


void FUN_01663ff0(longlong param_1,double param_2)

{
  if (param_2 == 0.0) {
    FUN_01663700(param_1,0);
  }
  else {
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xb8);
    FUN_0165e030(param_1,param_2);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0x89);
    FUN_0165dfb0(param_1,0x84);
    FUN_0165dfb0(param_1,0x24);
    FUN_0165e0c0(param_1,*(int *)(param_1 + 0x13ac0) * 8);
    *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) + 1;
    if (*(int *)(param_1 + 0x13ac4) < *(int *)(param_1 + 0x13ac0)) {
      *(int *)(param_1 + 0x13ac4) = *(int *)(param_1 + 0x13ac0);
    }
  }
  return;
}

