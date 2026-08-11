/* Ghidra address: 00aa6130 */
/* Ghidra symbol: FUN_00aa6130 */


void FUN_00aa6130(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x12]) {
    *(char *)(param_1 + 0x12) = param_2;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return;
}

