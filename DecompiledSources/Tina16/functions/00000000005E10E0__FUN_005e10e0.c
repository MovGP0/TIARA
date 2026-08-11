/* Ghidra address: 005e10e0 */
/* Ghidra symbol: FUN_005e10e0 */


void FUN_005e10e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_005e1270(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_005e01c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

