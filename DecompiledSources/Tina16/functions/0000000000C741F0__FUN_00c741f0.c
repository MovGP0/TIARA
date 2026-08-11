/* Ghidra address: 00c741f0 */
/* Ghidra symbol: FUN_00c741f0 */


void FUN_00c741f0(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xa6]) {
    *(char *)(param_1 + 0xa6) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

