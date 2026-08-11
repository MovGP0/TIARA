/* Ghidra address: 018ea250 */
/* Ghidra symbol: FUN_018ea250 */


void FUN_018ea250(undefined8 param_1,longlong *param_2,undefined **param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  FUN_0046bd60(&local_40);
  if (param_3 == &PTR_FUN_005f6910) {
    iVar1 = FUN_00416db0(param_4,L"HEIGHT");
    if (iVar1 == 0) {
      uVar2 = FUN_00462650(&local_40);
      (**(code **)(*param_2 + 0x70))(param_2,uVar2);
    }
    else {
      iVar1 = FUN_00416db0(param_4,L"WIDTH");
      if (iVar1 == 0) {
        uVar2 = FUN_00462650(&local_40);
        (**(code **)(*param_2 + 0x88))(param_2,uVar2);
      }
    }
  }
  FUN_00460ba0(&local_40);
  return;
}

