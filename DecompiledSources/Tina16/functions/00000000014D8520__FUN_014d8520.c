/* Ghidra address: 014d8520 */
/* Ghidra symbol: FUN_014d8520 */


void FUN_014d8520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_014d1c10(param_1 + 8,param_2,param_3);
  }
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_014d1c10(param_1 + 0x118,param_2,param_3);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_014d65d0(param_1 + 0xa8,param_2,param_3);
  }
  return;
}

