/* Ghidra address: 00cc3d40 */
/* Ghidra symbol: FUN_00cc3d40 */


void FUN_00cc3d40(longlong *param_1)

{
  if ((char)param_1[0x36] == '\0') {
    (**(code **)(*param_1 + 0x200))(param_1);
  }
  else {
    FUN_00cb45c0();
  }
  return;
}

