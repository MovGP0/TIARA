/* Ghidra address: 00b90440 */
/* Ghidra symbol: FUN_00b90440 */


void FUN_00b90440(longlong param_1,double param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(double *)(param_1 + 0x4d8) != param_2) {
    *(double *)(param_1 + 0x4d8) = param_2;
  }
  FUN_00b8fd60(&local_10,*(undefined8 *)(param_1 + 0x4d8),6,*(undefined1 *)(param_1 + 0x510),
               *(char *)(param_1 + 0x511) == '\0');
  FUN_0064de00(param_1,local_10);
  FUN_00414480(&local_10);
  return;
}

