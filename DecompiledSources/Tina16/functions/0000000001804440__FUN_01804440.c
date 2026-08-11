/* Ghidra address: 01804440 */
/* Ghidra symbol: FUN_01804440 */


void FUN_01804440(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018046a0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

