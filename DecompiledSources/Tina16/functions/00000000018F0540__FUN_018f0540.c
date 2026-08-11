/* Ghidra address: 018f0540 */
/* Ghidra symbol: FUN_018f0540 */


undefined8
FUN_018f0540(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_0063d930) {
    iVar1 = FUN_00416db0(param_5,L"PARENT");
    if (iVar1 == 0) {
      FUN_00468700(param_2,param_3[0xf]);
    }
  }
  else if (param_4 == &PTR_FUN_0066f8b0) {
    iVar1 = FUN_00416db0(param_5,L"DROPPEDDOWN");
    if (iVar1 == 0) {
      uVar2 = FUN_006838c0(param_3);
      FUN_00468820(param_2,uVar2);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"ITEMINDEX");
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_3 + 0x260))(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
    }
  }
  else if (param_4 == &PTR_FUN_00676b98) {
    iVar1 = FUN_00416db0(param_5,L"SELCOUNT");
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_3 + 0x2b0))(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"ITEMINDEX");
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_3 + 0x260))(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
    }
  }
  else if (param_4 == &PTR_FUN_007ee548) {
    iVar1 = FUN_00416db0(param_5,L"MODALRESULT");
    if (iVar1 == 0) {
      FUN_00468530(param_2,(int)param_3[0xa1],0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"CANVAS");
      if (iVar1 == 0) {
        uVar3 = FUN_007ffbe0(param_3);
        FUN_00468700(param_2,uVar3);
      }
    }
  }
  else if (param_4 == &PTR_FUN_007f4918) {
    iVar1 = FUN_00416db0(param_5,L"EXENAME");
    if (iVar1 == 0) {
      FUN_0080dcf0(param_3,&local_10);
      FUN_00468a10(param_2,local_10);
    }
  }
  FUN_00414480(&local_10);
  return param_2;
}

