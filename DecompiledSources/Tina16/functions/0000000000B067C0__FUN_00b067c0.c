/* Ghidra address: 00b067c0 */
/* Ghidra symbol: FUN_00b067c0 */


void FUN_00b067c0(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x93]) {
    *(char *)(param_1 + 0x93) = param_2;
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

