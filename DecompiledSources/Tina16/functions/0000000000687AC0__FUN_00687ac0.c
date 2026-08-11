/* Ghidra address: 00687ac0 */
/* Ghidra symbol: FUN_00687ac0 */


void FUN_00687ac0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x491) != param_2) {
    *(char *)(param_1 + 0x491) = param_2;
    FUN_00655b90();
  }
  return;
}

