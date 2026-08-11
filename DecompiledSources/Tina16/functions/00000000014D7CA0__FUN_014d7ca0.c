/* Ghidra address: 014d7ca0 */
/* Ghidra symbol: FUN_014d7ca0 */


void FUN_014d7ca0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_014d09c0(param_1 + 8,param_2,param_3);
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_014d09c0(param_1 + 0x128,param_2,param_3);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_014d5bf0(param_1 + 0xb8,param_2,param_3);
  }
  return;
}

