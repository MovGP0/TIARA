/* Ghidra address: 01b10c00 */
/* Ghidra symbol: FUN_01b10c00 */


void FUN_01b10c00(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

