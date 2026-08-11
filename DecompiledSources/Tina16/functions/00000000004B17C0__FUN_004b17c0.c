/* Ghidra address: 004b17c0 */
/* Ghidra symbol: FUN_004b17c0 */


void FUN_004b17c0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

