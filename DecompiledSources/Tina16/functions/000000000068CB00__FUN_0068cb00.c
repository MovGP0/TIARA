/* Ghidra address: 0068cb00 */
/* Ghidra symbol: FUN_0068cb00 */


void FUN_0068cb00(longlong *param_1)

{
  if ((char)param_1[0x8f] == '\0') {
    FUN_00658480();
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  return;
}

