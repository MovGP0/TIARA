/* Ghidra address: 00786c20 */
/* Ghidra symbol: FUN_00786c20 */


void FUN_00786c20(longlong *param_1)

{
  (**(code **)(*param_1 + -0x38))(param_1);
  if ((char)param_1[7] == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    FUN_00786aa0(param_1);
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  return;
}

