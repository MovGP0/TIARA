/* Ghidra address: 00c20b30 */
/* Ghidra symbol: FUN_00c20b30 */


void FUN_00c20b30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x818));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x820));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x828));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x830));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x838));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x840));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

