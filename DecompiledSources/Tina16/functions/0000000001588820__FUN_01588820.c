/* Ghidra address: 01588820 */
/* Ghidra symbol: FUN_01588820 */


void FUN_01588820(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_0059b430(param_1 + 8,0);
  }
  FUN_0059b400(param_1 + 8,0);
  FUN_01584b30(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

