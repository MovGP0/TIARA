/* Ghidra address: 00c33030 */
/* Ghidra symbol: FUN_00c33030 */


void FUN_00c33030(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[9]) {
    FUN_00c35490(param_1);
    *(char *)(param_1 + 9) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

