/* Ghidra address: 014d8e50 */
/* Ghidra symbol: FUN_014d8e50 */


void FUN_014d8e50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_014d2c50(param_1 + 8,param_2,param_3);
  }
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_014d1c10(param_1 + 0x138,param_2,param_3);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_014d65d0(param_1 + 200,param_2,param_3);
  }
  return;
}

