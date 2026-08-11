/* Ghidra address: 01cf0980 */
/* Ghidra symbol: FUN_01cf0980 */


void FUN_01cf0980(longlong *param_1)

{
  if ((char)param_1[1] != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

