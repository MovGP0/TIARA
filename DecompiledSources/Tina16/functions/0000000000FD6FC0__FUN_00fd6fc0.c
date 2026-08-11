/* Ghidra address: 00fd6fc0 */
/* Ghidra symbol: FUN_00fd6fc0 */


void FUN_00fd6fc0(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x700));
  FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x708));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined1 *)(param_1 + 0x70c));
  FUN_00414480(local_20);
  return;
}

