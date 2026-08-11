/* Ghidra address: 00bfcde0 */
/* Ghidra symbol: FUN_00bfcde0 */


void FUN_00bfcde0(longlong *param_1)

{
  if ((char)param_1[0x93] == '\0') {
    FUN_00bbadd0(param_1[0xc2],*(undefined4 *)(param_1[0xc2] + 0x30));
  }
  else {
    FUN_00bbadd0(param_1[0xc2],*(int *)(param_1[0x94] + 0x1c) + *(int *)(param_1[0xc2] + 0x30) * 3);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

