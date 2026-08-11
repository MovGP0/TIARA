/* Ghidra address: 00a34210 */
/* Ghidra symbol: FUN_00a34210 */


void FUN_00a34210(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + 1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

