/* Ghidra address: 007414f0 */
/* Ghidra symbol: FUN_007414f0 */


void FUN_007414f0(longlong *param_1,char param_2)

{
  if ((char)param_1[0x65] != param_2) {
    *(char *)(param_1 + 0x65) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

