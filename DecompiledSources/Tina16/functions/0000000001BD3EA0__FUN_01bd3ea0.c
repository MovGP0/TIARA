/* Ghidra address: 01bd3ea0 */
/* Ghidra symbol: FUN_01bd3ea0 */


void FUN_01bd3ea0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x370));
  FUN_01c04100(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

