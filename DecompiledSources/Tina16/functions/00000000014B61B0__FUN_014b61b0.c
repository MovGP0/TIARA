/* Ghidra address: 014b61b0 */
/* Ghidra symbol: FUN_014b61b0 */


void FUN_014b61b0(longlong param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  if ((*(char *)(param_1 + 0x895) != '\0') && (param_3 == *(int *)(param_1 + 0x8a0))) {
    *param_4 = 1;
    *param_5 = 0xffffff;
    *param_6 = 0x80;
  }
  return;
}

