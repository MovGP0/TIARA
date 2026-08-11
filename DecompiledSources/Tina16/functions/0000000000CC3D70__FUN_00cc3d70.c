/* Ghidra address: 00cc3d70 */
/* Ghidra symbol: FUN_00cc3d70 */


void FUN_00cc3d70(longlong *param_1)

{
  if ((char)param_1[0x36] == '\0') {
    (**(code **)(*param_1 + 0x208))(param_1);
  }
  else {
    FUN_00cb45a0();
  }
  return;
}

