/* Ghidra address: 01891a20 */
/* Ghidra symbol: FUN_01891a20 */


void FUN_01891a20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4e8) = param_2;
  FUN_0064e030(param_1);
  FUN_0064e030(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 200));
  return;
}

