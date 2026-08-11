/* Ghidra address: 00b6cac0 */
/* Ghidra symbol: FUN_00b6cac0 */


void FUN_00b6cac0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((char)param_1[0xf] != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

