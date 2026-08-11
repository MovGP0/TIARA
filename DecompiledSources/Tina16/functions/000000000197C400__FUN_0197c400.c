/* Ghidra address: 0197c400 */
/* Ghidra symbol: FUN_0197c400 */


void FUN_0197c400(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_00452320(param_1 + 0x4a8);
  }
  FUN_00452320(param_1 + 0x4b0);
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

