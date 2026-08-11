/* Ghidra address: 018d3db0 */
/* Ghidra symbol: FUN_018d3db0 */


void FUN_018d3db0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018d3e00(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

