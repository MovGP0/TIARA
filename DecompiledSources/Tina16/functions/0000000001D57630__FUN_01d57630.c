/* Ghidra address: 01d57630 */
/* Ghidra symbol: FUN_01d57630 */


void FUN_01d57630(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_01d56e10(param_1 + 0x20,param_2,param_3,param_4);
  FUN_01d56e10(param_1 + 0x48,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_011641a0(param_1 + 0x78,param_2,param_3,param_4);
  }
  else if (*(char *)(param_1 + 0x70) == '\x02') {
    FUN_011635e0(param_1 + 0x78,param_2,param_3,param_4);
  }
  return;
}

