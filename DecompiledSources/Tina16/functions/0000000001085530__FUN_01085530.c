/* Ghidra address: 01085530 */
/* Ghidra symbol: FUN_01085530 */


void FUN_01085530(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_34;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  longlong local_20 [2];
  
  local_50[0] = 0;
  local_20[0] = 0;
  local_40 = 0;
  FUN_00c0f960(*(undefined8 *)(param_1 + 0xa78),local_50);
  FUN_00414ad0(param_1 + 0xb48,local_50[0]);
  FUN_00415dd0(local_20,*(undefined8 *)(param_1 + 0xb48),0);
  uVar1 = 0;
  if ((*(longlong *)(param_1 + 0xb28) != 0) && (*(int *)(param_1 + 0xad8) != 2)) {
    if (local_20[0] != 0) {
      uVar1 = FUN_0108bb30(param_1);
      uVar2 = FUN_004425e0(param_1 + 0x2c10,local_20[0]);
      uVar1 = _Debug_GetSymbolValue
                        (*(undefined8 *)(param_1 + 0xb28),uVar1,uVar2,local_28,2,local_2c);
    }
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x900),uVar1);
    local_58 = FUN_00498310(0,0);
    uVar2 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0xa78),&local_58);
    local_34._0_4_ = (int)uVar2;
    in_stack_00000028 = (int)local_34 + in_stack_00000028;
    local_34._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    in_stack_00000030 = local_34._4_4_ + in_stack_00000030;
    local_34 = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0xa8))
              (*(longlong **)(param_1 + 0x8f8),in_stack_00000028,in_stack_00000030);
  }
  FUN_00414480(local_50);
  FUN_004144d0(&local_40);
  FUN_004144d0(local_20);
  return;
}

