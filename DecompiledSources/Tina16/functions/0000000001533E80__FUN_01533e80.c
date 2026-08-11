/* Ghidra address: 01533e80 */
/* Ghidra symbol: FUN_01533e80 */


void FUN_01533e80(longlong param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  if ((*(char *)(param_1 + 0x1bf9) != '\0') && (param_3 == *(int *)(param_1 + 0x1c04))) {
    *param_4 = 1;
    *param_5 = 0xffffff;
    *param_6 = 0x80;
  }
  return;
}

