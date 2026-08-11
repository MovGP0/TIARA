/* Ghidra address: 0109e760 */
/* Ghidra symbol: FUN_0109e760 */


undefined8 FUN_0109e760(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x878));
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x18))
            (*(longlong **)(param_1 + 0x9d8),&local_28,uVar1);
  FUN_0043e130(local_20,local_28);
  FUN_00414ad0(param_1 + 0x9b8,local_20[0]);
  uVar2 = FUN_00442620(param_1 + 0xe30,*(undefined8 *)(param_1 + 0x9b8));
  FUN_00414560(&local_28,2);
  return uVar2;
}

