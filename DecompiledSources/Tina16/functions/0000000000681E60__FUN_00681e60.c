/* Ghidra address: 00681e60 */
/* Ghidra symbol: FUN_00681e60 */


void FUN_00681e60(longlong param_1,undefined8 param_2)

{
  if ((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x498) == '\x01')) {
    FUN_00681940(param_1);
    FUN_00655b90(param_1);
  }
  FUN_0065a450(param_1,param_2);
  return;
}

