/* Ghidra address: 01113d70 */
/* Ghidra symbol: FUN_01113d70 */


void FUN_01113d70(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x640))) {
    if (*(char *)(param_1 + 0x611) != '\0') {
      FUN_01113dd0(param_1);
    }
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  return;
}

