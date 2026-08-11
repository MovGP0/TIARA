/* Ghidra address: 010e3c60 */
/* Ghidra symbol: FUN_010e3c60 */


void FUN_010e3c60(longlong param_1,undefined8 param_2,char *param_3)

{
  if ((*PTR_DAT_02003b20 != '\0') &&
     (*param_3 = *(char *)(param_1 + 0x7ed) == '\0', *param_3 == '\0')) {
    FUN_016fd8d0(L"Please close all measurement\rinstruments before exiting TINA.");
  }
  return;
}

