/* Ghidra address: 00651530 */
/* Ghidra symbol: FUN_00651530 */


void FUN_00651530(longlong *param_1,longlong param_2)

{
  if ((PTR_DAT_02005bd0[0xd] != '\0') && (*(longlong *)(param_2 + 8) == 0)) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

