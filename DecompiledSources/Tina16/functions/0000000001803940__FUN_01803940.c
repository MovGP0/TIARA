/* Ghidra address: 01803940 */
/* Ghidra symbol: FUN_01803940 */


void FUN_01803940(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018039a0(param_1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48),param_1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

