/* Ghidra address: 01967c50 */
/* Ghidra symbol: FUN_01967c50 */


void FUN_01967c50(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x208));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1e8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1f0));
  FUN_01954030(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

