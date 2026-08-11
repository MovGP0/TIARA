/* Ghidra address: 012e96a0 */
/* Ghidra symbol: FUN_012e96a0 */


void FUN_012e96a0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_10);
  uVar1 = FUN_0043fc00(local_10);
  *(undefined4 *)(param_1 + 0x6f0) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  uVar1 = FUN_01b218a0(uVar1);
  *(undefined4 *)(param_1 + 0x6ec) = uVar1;
  FUN_00414480(&local_10);
  return;
}

