/* Ghidra address: 01472b70 */
/* Ghidra symbol: FUN_01472b70 */


void FUN_01472b70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x508) == 6) {
    *(bool *)param_3 = *(char *)(param_1 + 0x741) == '\0';
  }
  return;
}

