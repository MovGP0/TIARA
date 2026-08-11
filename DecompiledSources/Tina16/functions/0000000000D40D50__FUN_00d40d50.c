/* Ghidra address: 00d40d50 */
/* Ghidra symbol: FUN_00d40d50 */


void FUN_00d40d50(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = FUN_00788df0(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x2a) != '\0')) {
    *(bool *)(param_1 + 0x18) = *(int *)(param_2 + 8) != 0;
    (**(code **)(*param_1 + 0x68))(param_1);
    *(undefined8 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

