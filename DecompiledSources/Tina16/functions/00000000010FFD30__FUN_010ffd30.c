/* Ghidra address: 010ffd30 */
/* Ghidra symbol: FUN_010ffd30 */


void FUN_010ffd30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x150));
  FUN_01ccdb90(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

