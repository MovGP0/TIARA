/* Ghidra address: 00779b50 */
/* Ghidra symbol: FUN_00779b50 */


void FUN_00779b50(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0xb8))(param_1);
  if (*PTR_DAT_02001218 == '\0') {
    FUN_0061a430();
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

