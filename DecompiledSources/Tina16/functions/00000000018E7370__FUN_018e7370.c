/* Ghidra address: 018e7370 */
/* Ghidra symbol: FUN_018e7370 */


void FUN_018e7370(undefined8 param_1,longlong *param_2,undefined **param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  FUN_0046bd60(&local_40);
  if (param_3 == &PTR_FUN_00476820) {
    iVar2 = FUN_00416db0(param_4,L"COMMATEXT");
    if (iVar2 == 0) {
      FUN_00467e90(local_50,&local_40);
      FUN_004b4b10(param_2,local_50[0]);
    }
    else {
      iVar2 = FUN_00416db0(param_4,L"TEXT");
      if (iVar2 == 0) {
        FUN_00467e90(&local_58,&local_40);
        (**(code **)(*param_2 + 0x60))(param_2,local_58);
      }
    }
  }
  else if (param_3 == &PTR_FUN_00478280) {
    iVar2 = FUN_00416db0(param_4,L"DUPLICATES");
    if (iVar2 == 0) {
      uVar1 = FUN_00462650(&local_40);
      *(undefined1 *)((longlong)param_2 + 0x49) = uVar1;
    }
    else {
      iVar2 = FUN_00416db0(param_4,L"SORTED");
      if (iVar2 == 0) {
        iVar2 = FUN_004644a0(&local_40);
        FUN_004b67b0(param_2,iVar2 != 0);
      }
    }
  }
  else if (param_3 == &PTR_FUN_00478eb0) {
    iVar2 = FUN_00416db0(param_4,L"POSITION");
    if (iVar2 == 0) {
      uVar3 = FUN_004634b0(&local_40);
      FUN_004b6dc0(param_2,uVar3);
    }
  }
  else if (param_3 == (undefined **)&DAT_0181ce38) {
    iVar2 = FUN_00416db0(param_4,L"DATA");
    if (iVar2 == 0) {
      lVar4 = FUN_004634b0(&local_40);
      param_2[1] = lVar4;
    }
    else {
      iVar2 = FUN_00416db0(param_4,L"NAME");
      if (iVar2 == 0) {
        FUN_00467e90(param_2 + 3,&local_40);
      }
      else {
        iVar2 = FUN_00416db0(param_4,L"TEXT");
        if (iVar2 == 0) {
          FUN_00467e90(param_2 + 5,&local_40);
        }
      }
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00460ba0(&local_40);
  return;
}

