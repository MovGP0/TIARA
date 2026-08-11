/* Ghidra address: 0197bf40 */
/* Ghidra symbol: FUN_0197bf40 */


void FUN_0197bf40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_0197c1a0(param_1,0);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

