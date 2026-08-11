/* Ghidra address: 00960450 */
/* Ghidra symbol: FUN_00960450 */


void FUN_00960450(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_008f4ab0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x108));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x118));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

