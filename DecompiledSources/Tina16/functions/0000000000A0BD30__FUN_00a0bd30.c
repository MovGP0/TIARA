/* Ghidra address: 00a0bd30 */
/* Ghidra symbol: FUN_00a0bd30 */


void FUN_00a0bd30(longlong *param_1,char param_2)

{
  if ((char)param_1[0xd] != param_2) {
    FUN_00a0abb0(param_1);
    *(char *)(param_1 + 0xd) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

