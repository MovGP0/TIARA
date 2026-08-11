/* Ghidra address: 018ea0c0 */
/* Ghidra symbol: FUN_018ea0c0 */


undefined8
FUN_018ea0c0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_005f6910) {
    iVar1 = FUN_00416db0(param_5,L"HEIGHT");
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"WIDTH");
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
    }
  }
  else if (param_4 == (undefined **)&DAT_005f7500) {
    iVar1 = FUN_00416db0(param_5,L"HEIGHT");
    if (iVar1 == 0) {
      uVar2 = FUN_00605640(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"WIDTH");
      if (iVar1 == 0) {
        uVar2 = FUN_00605610(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
    }
  }
  else if (param_4 == &PTR_FUN_005f92e8) {
    iVar1 = FUN_00416db0(param_5,L"CANVAS");
    if (iVar1 == 0) {
      uVar3 = FUN_00609e10(param_3);
      FUN_00468700(param_2,uVar3);
    }
  }
  return param_2;
}

