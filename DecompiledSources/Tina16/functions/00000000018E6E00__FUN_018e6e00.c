/* Ghidra address: 018e6e00 */
/* Ghidra symbol: FUN_018e6e00 */


undefined8
FUN_018e6e00(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_00475a40) {
    iVar1 = FUN_00416db0(param_5,L"COUNT");
    if (iVar1 == 0) {
      FUN_00468530(param_2,*(undefined4 *)(param_3[2] + 0x10),0xfffffffffffffffc);
    }
  }
  else if (param_4 == &PTR_FUN_00472dd0) {
    iVar1 = FUN_00416db0(param_5,L"COUNT");
    if (iVar1 == 0) {
      FUN_00468530(param_2,(int)param_3[2],0xfffffffffffffffc);
    }
  }
  else if (param_4 == &PTR_FUN_00476820) {
    iVar1 = FUN_00416db0(param_5,L"COMMATEXT");
    if (iVar1 == 0) {
      FUN_004b37d0(param_3,local_20);
      FUN_00468a10(param_2,local_20[0]);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"COUNT");
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"TEXT");
        if (iVar1 == 0) {
          (**(code **)(*param_3 + 0x38))(param_3,&local_28);
          FUN_00468a10(param_2,local_28);
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_00478280) {
    iVar1 = FUN_00416db0(param_5,L"DUPLICATES");
    if (iVar1 == 0) {
      FUN_00468530(param_2,*(undefined1 *)((longlong)param_3 + 0x49),1);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"SORTED");
      if (iVar1 == 0) {
        FUN_00468820(param_2,(char)param_3[9]);
      }
    }
  }
  else if (param_4 == &PTR_FUN_00478eb0) {
    iVar1 = FUN_00416db0(param_5,L"POSITION");
    if (iVar1 == 0) {
      uVar3 = FUN_004b6da0(param_3);
      FUN_00468700(param_2,uVar3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"SIZE");
      if (iVar1 == 0) {
        uVar3 = (**(code **)*param_3)(param_3);
        FUN_00468700(param_2,uVar3);
      }
    }
  }
  else if (param_4 == &PTR_FUN_00486f38) {
    iVar1 = FUN_00416db0(param_5,L"OWNER");
    if (iVar1 == 0) {
      FUN_00468700(param_2,param_3[1]);
    }
  }
  else if (param_4 == (undefined **)&DAT_0181ce38) {
    iVar1 = FUN_00416db0(param_5,L"DATA");
    if (iVar1 == 0) {
      FUN_00468700(param_2,param_3[1]);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"COUNT");
      if (iVar1 == 0) {
        uVar2 = FUN_0181e3e0(param_3);
        FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"NAME");
        if (iVar1 == 0) {
          FUN_00468a10(param_2,param_3[3]);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"PARENT");
          if (iVar1 == 0) {
            FUN_00468700(param_2,param_3[4]);
          }
          else {
            iVar1 = FUN_00416db0(param_5,L"TEXT");
            if (iVar1 == 0) {
              FUN_00468a10(param_2,param_3[5]);
            }
          }
        }
      }
    }
  }
  else if (param_4 == (undefined **)&DAT_0181d588) {
    iVar1 = FUN_00416db0(param_5,L"ROOT");
    if (iVar1 == 0) {
      FUN_00468700(param_2,param_3[2]);
    }
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

