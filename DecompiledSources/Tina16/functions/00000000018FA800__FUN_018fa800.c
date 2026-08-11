/* Ghidra address: 018fa800 */
/* Ghidra symbol: FUN_018fa800 */


undefined8
FUN_018fa800(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_009e5030) {
    iVar1 = FUN_00416db0(param_5,L"COUNT");
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"TEXT");
      if (iVar1 == 0) {
        (**(code **)(*param_3 + 0x38))(param_3,local_20);
        FUN_004689d0(param_2,local_20[0]);
      }
    }
  }
  else if (param_4 == &PTR_FUN_0191d1a8) {
    iVar1 = FUN_00416db0(param_5,L"RECNO");
    if (iVar1 == 0) {
      FUN_00468530(param_2,*(undefined4 *)((longlong)param_3 + 0x234),0xfffffffffffffffc);
    }
  }
  else if (param_4 == &PTR_FUN_01918c28) {
    iVar1 = FUN_00416db0(param_5,L"OBJECTS");
    if (iVar1 == 0) {
      FUN_00468700(param_2,param_3[0x10]);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"ALLOBJECTS");
      if (iVar1 == 0) {
        uVar3 = FUN_01951400(param_3);
        FUN_00468700(param_2,uVar3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"PARENT");
        if (iVar1 == 0) {
          FUN_00468700(param_2,param_3[0x1e]);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"PAGE");
          if (iVar1 == 0) {
            uVar3 = FUN_01950600(param_3);
            FUN_00468700(param_2,uVar3);
          }
          else {
            iVar1 = FUN_00416db0(param_5,L"ABSLEFT");
            if (iVar1 == 0) {
              uVar3 = FUN_019508b0(param_3);
              FUN_00468860(param_2,uVar3);
            }
            else {
              iVar1 = FUN_00416db0(param_5,L"ABSTOP");
              if (iVar1 == 0) {
                uVar3 = FUN_01950860(param_3);
                FUN_00468860(param_2,uVar3);
              }
            }
          }
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_01921f40) {
    iVar1 = FUN_00416db0(param_5,L"TAGSTR");
    if (iVar1 == 0) {
      FUN_00468a10(param_2,param_3[0x3a]);
    }
  }
  else if (param_4 == &PTR_FUN_01925478) {
    iVar1 = FUN_00416db0(param_5,L"TEXT");
    if (iVar1 == 0) {
      (**(code **)(*param_3 + 0x348))(param_3,&local_28);
      FUN_004689d0(param_2,local_28);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"ANSITEXT");
      if (iVar1 == 0) {
        FUN_0195f820(param_3,&local_30);
        FUN_00468910(param_2,local_30);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"LINES");
        if (iVar1 == 0) {
          FUN_00468700(param_2,param_3[0x61]);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"VALUE");
          if (iVar1 == 0) {
            (**(code **)(*param_3 + 0x350))(param_3,param_2);
          }
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_0192c3a0) {
    iVar1 = FUN_00416db0(param_5,L"OVERFLOW");
    if (iVar1 == 0) {
      FUN_00468820(param_2,(char)param_3[0x39]);
    }
  }
  else if (param_4 == &PTR_FUN_01936058) {
    iVar1 = FUN_00416db0(param_5,L"MODALRESULT");
    if (iVar1 == 0) {
      uVar2 = FUN_0196a350(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
  }
  else if (param_4 == &PTR_FUN_0193aeb8) {
    iVar1 = FUN_00416db0(param_5,L"TERMINATED");
    if (iVar1 == 0) {
      FUN_00468820(param_2,(char)param_3[0x51]);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"VARIABLES");
      if (iVar1 == 0) {
        FUN_00468700(param_2,param_3[0x53]);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"STYLES");
        if (iVar1 == 0) {
          FUN_00468700(param_2,param_3[0x4f]);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"DRILLSTATE");
          if (iVar1 == 0) {
            FUN_00468700(param_2,param_3[0x32]);
          }
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_01937480) {
    iVar1 = FUN_00416db0(param_5,L"DESTROYFORMS");
    if (iVar1 == 0) {
      FUN_00468820(param_2,*(undefined1 *)((longlong)param_3 + 9));
    }
  }
  else if (param_4 == &PTR_FUN_018b5738) {
    iVar1 = FUN_00416db0(param_5,L"COUNT");
    if (iVar1 == 0) {
      uVar2 = (**(code **)*param_3)(param_3);
      FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"CURPAGE");
      if (iVar1 == 0) {
        FUN_00468530(param_2,*(undefined4 *)((longlong)param_3 + 0xc),0xfffffffffffffffc);
      }
    }
  }
  FUN_004144d0(&local_30);
  FUN_004145c0(&local_28,2);
  return param_2;
}

