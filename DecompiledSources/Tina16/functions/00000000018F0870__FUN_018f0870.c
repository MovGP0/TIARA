/* Ghidra address: 018f0870 */
/* Ghidra symbol: FUN_018f0870 */


void FUN_018f0870(undefined8 param_1,longlong *param_2,undefined **param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  FUN_0046bd60(&local_40);
  if (param_3 == &PTR_FUN_0063d930) {
    iVar1 = FUN_00416db0(param_4,L"PARENT");
    if (iVar1 == 0) {
      uVar3 = FUN_004634b0(&local_40);
      (**(code **)(*param_2 + 0x130))(param_2,uVar3);
    }
  }
  else if (param_3 == &PTR_FUN_0066f8b0) {
    iVar1 = FUN_00416db0(param_4,L"DROPPEDDOWN");
    if (iVar1 == 0) {
      iVar1 = FUN_004644a0(&local_40);
      FUN_006838f0(param_2,iVar1 != 0);
    }
    else {
      iVar1 = FUN_00416db0(param_4,L"ITEMINDEX");
      if (iVar1 == 0) {
        uVar2 = FUN_00462650(&local_40);
        (**(code **)(*param_2 + 0x268))(param_2,uVar2);
      }
    }
  }
  else if (param_3 == &PTR_FUN_00676b98) {
    iVar1 = FUN_00416db0(param_4,L"ITEMINDEX");
    if (iVar1 == 0) {
      uVar2 = FUN_00462650(&local_40);
      (**(code **)(*param_2 + 0x268))(param_2,uVar2);
    }
  }
  else if (param_3 == &PTR_FUN_007ee548) {
    iVar1 = FUN_00416db0(param_4,L"MODALRESULT");
    if (iVar1 == 0) {
      uVar2 = FUN_00462650(&local_40);
      *(undefined4 *)(param_2 + 0xa1) = uVar2;
    }
  }
  FUN_00460ba0(&local_40);
  return;
}

