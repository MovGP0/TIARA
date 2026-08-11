/* Ghidra address: 007e2c30 */
/* Ghidra symbol: FUN_007e2c30 */


void FUN_007e2c30(longlong *param_1,char param_2)

{
  if ((char)param_1[0x13] != param_2) {
    *(char *)(param_1 + 0x13) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

