/* Ghidra address: 008954a0 */
/* Ghidra symbol: FUN_008954a0 */


undefined2 FUN_008954a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [64];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  undefined2 local_a;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_20 = 0;
  FUN_00415dd0(&local_20,param_2,0);
  uVar1 = FUN_00415ab0(local_20);
  local_18 = (**(code **)PTR_PTR_02002220)(uVar1,0);
  if (local_18 == 0) {
    local_a = FUN_00877c50(param_2);
  }
  else {
    local_a = (**(code **)PTR_PTR_02002a90)(*(undefined2 *)(local_18 + 0x10));
  }
  FUN_00414480(&local_38);
  FUN_004144d0(&local_20);
  return local_a;
}

