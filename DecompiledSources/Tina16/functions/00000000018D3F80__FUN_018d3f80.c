/* Ghidra address: 018d3f80 */
/* Ghidra symbol: FUN_018d3f80 */


void FUN_018d3f80(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018d3fe0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_018d6c40(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

