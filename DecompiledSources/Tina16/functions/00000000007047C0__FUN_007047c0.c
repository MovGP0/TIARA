/* Ghidra address: 007047c0 */
/* Ghidra symbol: FUN_007047c0 */


void FUN_007047c0(longlong *param_1)

{
  FUN_00651370(param_1);
  if ((*PTR_DAT_02003210 == '\0') && (*(byte *)(param_1 + 0xb0) < 2)) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

