/* Ghidra address: 0049efa0 */
/* Ghidra symbol: FUN_0049efa0 */


void FUN_0049efa0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

