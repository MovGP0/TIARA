/* Ghidra address: 0185cc40 */
/* Ghidra symbol: FUN_0185cc40 */


void FUN_0185cc40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0185ccb0(param_1);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

