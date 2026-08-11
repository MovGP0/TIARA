/* Ghidra address: 01107aa0 */
/* Ghidra symbol: FUN_01107aa0 */


void FUN_01107aa0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01106ca0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

