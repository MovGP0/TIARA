/* Ghidra address: 019b3950 */
/* Ghidra symbol: FUN_019b3950 */


void FUN_019b3950(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_019b3ad0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_019b2bd0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

