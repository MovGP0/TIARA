/* Ghidra address: 016bd020 */
/* Ghidra symbol: FUN_016bd020 */


void FUN_016bd020(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00b95ce0(*(undefined8 *)(param_1 + 0x58));
  FUN_00b95ce0(*(undefined8 *)(param_1 + 0x60));
  FUN_016bc9e0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

