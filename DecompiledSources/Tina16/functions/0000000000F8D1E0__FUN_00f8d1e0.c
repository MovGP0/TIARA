/* Ghidra address: 00f8d1e0 */
/* Ghidra symbol: FUN_00f8d1e0 */


void FUN_00f8d1e0(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x3474) = (char)param_2;
  _MCU_SetDebugMode(*(undefined8 *)(param_1 + 0x60),1);
  FUN_00f8e910(param_1,param_2);
  return;
}

