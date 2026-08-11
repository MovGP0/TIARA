/* Ghidra address: 005dce10 */
/* Ghidra symbol: FUN_005dce10 */


void FUN_005dce10(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(char *)((longlong)param_1 + 0x29) != '\0') && ((char)param_1[5] != '\0')) {
    (**(code **)(*param_1 + 200))(param_1);
  }
  FUN_00410f20(param_1[3]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

