/* Ghidra address: 00f927a0 */
/* Ghidra symbol: FUN_00f927a0 */


void FUN_00f927a0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(param_1 + 0x6f0));
  if (*(char *)(param_1 + 0x704) == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6f8));
  }
  else {
    FUN_00f61040(&local_10,*(undefined4 *)(param_1 + 0x700));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_10);
  }
  FUN_00414480(&local_10);
  return;
}

