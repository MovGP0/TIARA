/* Ghidra address: 0176edb0 */
/* Ghidra symbol: FUN_0176edb0 */


void FUN_0176edb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),param_2);
  FUN_013ad8c0(local_20,*(undefined8 *)(param_1 + 0xb0));
  FUN_00414ad0(param_1 + 0x58,local_20[0]);
  *(undefined1 *)(param_1 + 0x115) = param_3;
  FUN_00414480(local_20);
  return;
}

