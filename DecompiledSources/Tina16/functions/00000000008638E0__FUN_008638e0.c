/* Ghidra address: 008638e0 */
/* Ghidra symbol: FUN_008638e0 */


undefined4 FUN_008638e0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_0041b800(&local_28);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    FUN_0041d630(uVar1);
    if (local_28 != 0) {
      uVar2 = FUN_0041b800(&local_38);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))
                        (*(longlong **)(param_1 + 0x18),uVar2);
      FUN_0041d630(uVar1);
      FUN_00862ff0(&local_30,local_38);
      FUN_0041b840(param_1 + 0x28,local_30);
    }
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x28));
  local_20 = 0;
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  return local_20;
}

