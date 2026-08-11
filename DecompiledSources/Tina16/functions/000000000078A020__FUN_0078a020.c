/* Ghidra address: 0078a020 */
/* Ghidra symbol: FUN_0078a020 */


void FUN_0078a020(longlong *param_1)

{
  (**(code **)(*param_1 + -0x38))(param_1);
  if (((char)param_1[0xc] == '\0') && (*(char *)((longlong)param_1 + 0x61) == '\0')) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_0078a0c0(param_1);
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  else if ((*(char *)((longlong)param_1 + 0x61) != '\0') && ((char)param_1[0xc] != '\0')) {
    FUN_0078a130(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  return;
}

