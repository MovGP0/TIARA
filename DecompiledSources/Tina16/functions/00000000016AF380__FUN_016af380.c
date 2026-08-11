/* Ghidra address: 016af380 */
/* Ghidra symbol: FUN_016af380 */


void FUN_016af380(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x10));
  FUN_004095f0(*(undefined8 *)(param_1 + 8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

