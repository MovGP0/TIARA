/* Ghidra address: 00fd6560 */
/* Ghidra symbol: FUN_00fd6560 */


void FUN_00fd6560(longlong param_1)

{
  undefined1 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *(undefined1 *)(param_1 + 0x6e1) = uVar1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_10);
  FUN_00414ad0(param_1 + 0x6e8,local_10);
  FUN_00414480(&local_10);
  return;
}

