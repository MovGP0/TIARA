/* Ghidra address: 017f2230 */
/* Ghidra symbol: FUN_017f2230 */


void FUN_017f2230(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + 1;
  (**(code **)(**(longlong **)(param_1 + 1000) + 0x18))
            (*(longlong **)(param_1 + 1000),local_20,*(undefined4 *)(param_1 + 0x3a4));
  FUN_00414b50(param_1 + 0x3a8,local_20[0]);
  FUN_017f21b0(param_1 + 0x3a8);
  FUN_00414480(local_20);
  return;
}

