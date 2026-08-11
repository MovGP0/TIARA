/* Ghidra address: 01891de0 */
/* Ghidra symbol: FUN_01891de0 */


void FUN_01891de0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00685570(param_1,param_2 & 0xfffffffc);
  FUN_004d62f0(*(undefined8 *)(param_1 + 0x590));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

