/* Ghidra address: 00863a20 */
/* Ghidra symbol: FUN_00863a20 */


undefined4 FUN_00863a20(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_0041b800(&local_30);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    FUN_0041d630(uVar1);
    FUN_00862fb0(&local_28,local_30);
    FUN_0041b840(param_1 + 0x20,local_28);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x20));
  local_20 = 0;
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  return local_20;
}

