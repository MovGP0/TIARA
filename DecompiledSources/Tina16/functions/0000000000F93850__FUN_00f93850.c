/* Ghidra address: 00f93850 */
/* Ghidra symbol: FUN_00f93850 */


void FUN_00f93850(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x700));
  if (*(char *)(param_1 + 0x714) == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x708));
  }
  else {
    FUN_00f61040(local_20,*(undefined4 *)(param_1 + 0x710));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(undefined1 *)(param_1 + 0x715));
  FUN_00414480(local_20);
  return;
}

