/* Ghidra address: 0068ee10 */
/* Ghidra symbol: FUN_0068ee10 */


void FUN_0068ee10(longlong *param_1)

{
  if ((char)param_1[0x8f] == '\0') {
    FUN_00657db0();
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  return;
}

