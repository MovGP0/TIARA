/* Ghidra address: 01cbf8a0 */
/* Ghidra symbol: FUN_01cbf8a0 */


void FUN_01cbf8a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00442c30(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18),(uint)*(byte *)(param_1 + 0x14) * 4);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

