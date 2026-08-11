/* Ghidra address: 00de0ce0 */
/* Ghidra symbol: FUN_00de0ce0 */


void FUN_00de0ce0(longlong *param_1)

{
  if ((*(uint *)(param_1 + 0x9e) & 0x400) == 0) {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  else {
    FUN_00658480();
  }
  return;
}

