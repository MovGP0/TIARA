/* Ghidra address: 01c07140 */
/* Ghidra symbol: FUN_01c07140 */


void FUN_01c07140(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  lVar1 = FUN_01c07120(param_1);
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

