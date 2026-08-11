/* Ghidra address: 0181a890 */
/* Ghidra symbol: FUN_0181a890 */


void FUN_0181a890(longlong *param_1,undefined4 param_2)

{
  if (*(char *)((longlong)param_1 + 0x6bc) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x6bc) = 0;
    (**(code **)(*param_1 + 0x350))(param_1,param_2);
    *(undefined4 *)(param_1 + 0xd6) = param_2;
  }
  return;
}

