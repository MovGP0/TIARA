/* Ghidra address: 00b06920 */
/* Ghidra symbol: FUN_00b06920 */


void FUN_00b06920(longlong *param_1,char param_2)

{
  *(char *)((longlong)param_1 + 0x499) = param_2;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

