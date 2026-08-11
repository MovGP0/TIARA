/* Ghidra address: 0084e190 */
/* Ghidra symbol: FUN_0084e190 */


void FUN_0084e190(longlong *param_1,char param_2)

{
  *(char *)(param_1 + 0xbf) = param_2;
  if ((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x5f9) != '\0')) {
    (**(code **)(*param_1 + 0x180))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x5f9) = 0;
  }
  return;
}

