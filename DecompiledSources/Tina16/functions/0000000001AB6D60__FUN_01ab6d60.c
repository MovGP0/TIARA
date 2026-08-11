/* Ghidra address: 01ab6d60 */
/* Ghidra symbol: FUN_01ab6d60 */


void FUN_01ab6d60(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01ada1b0(*(undefined8 *)(param_1 + 0x60),param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_01cc8370(*(longlong *)(param_1 + 0x80));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_01d2d2e0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

