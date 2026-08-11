/* Ghidra address: 00684090 */
/* Ghidra symbol: FUN_00684090 */


void FUN_00684090(longlong *param_1)

{
  FUN_00651370(param_1);
  if ((*PTR_DAT_02003210 == '\0') && (*(byte *)((longlong)param_1 + 0x54a) < 2)) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

