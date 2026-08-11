/* Ghidra address: 00c74190 */
/* Ghidra symbol: FUN_00c74190 */


void FUN_00c74190(longlong *param_1)

{
  FUN_00c72390(param_1[0xa5]);
  *(undefined1 *)((longlong)param_1 + 0x53d) = 1;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

