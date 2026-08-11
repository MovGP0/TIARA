/* Ghidra address: 0067fd10 */
/* Ghidra symbol: FUN_0067fd10 */


void FUN_0067fd10(longlong *param_1,char param_2)

{
  if ((char)param_1[0x68] != param_2) {
    *(char *)(param_1 + 0x68) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x321) = 0;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

