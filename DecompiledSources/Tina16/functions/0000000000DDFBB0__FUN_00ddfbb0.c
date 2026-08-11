/* Ghidra address: 00ddfbb0 */
/* Ghidra symbol: FUN_00ddfbb0 */


void FUN_00ddfbb0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00dde660(param_1);
  uVar2 = (**(code **)*param_2)(param_2);
  uVar2 = thunk_FUN_0412a7bb(2,uVar2);
  *(undefined8 *)(param_1 + 0x4a8) = uVar2;
  if (*(longlong *)(param_1 + 0x4a8) == 0) {
    FUN_0044d470();
  }
  local_10 = thunk_FUN_0416a623(*(undefined8 *)(param_1 + 0x4a8));
  uVar1 = (**(code **)*param_2)(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,local_10,uVar1);
  thunk_FUN_04172795(*(undefined8 *)(param_1 + 0x4a8));
  return;
}

