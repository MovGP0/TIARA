/* Ghidra address: 00786bc0 */
/* Ghidra symbol: FUN_00786bc0 */


void FUN_00786bc0(longlong *param_1)

{
  (**(code **)(*param_1 + -0x38))(param_1);
  if (((char)param_1[7] == '\0') && (*(char *)((longlong)param_1 + 0x39) == '\0')) {
    *(undefined1 *)(param_1 + 7) = 1;
    FUN_00786aa0(param_1);
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  else if ((*(char *)((longlong)param_1 + 0x39) != '\0') && ((char)param_1[7] != '\0')) {
    FUN_00786b10(param_1);
    *(undefined1 *)(param_1 + 7) = 0;
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  return;
}

