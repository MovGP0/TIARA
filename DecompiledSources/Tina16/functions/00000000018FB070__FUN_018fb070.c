/* Ghidra address: 018fb070 */
/* Ghidra symbol: FUN_018fb070 */


void FUN_018fb070(undefined8 param_1,longlong *param_2,undefined **param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  FUN_0046bd60(&local_40);
  if (param_3 == &PTR_FUN_009e5030) {
    iVar4 = FUN_00416db0(param_4,L"TEXT");
    if (iVar4 == 0) {
      FUN_00467310(local_50,&local_40);
      (**(code **)(*param_2 + 0x58))(param_2,local_50[0]);
    }
  }
  else if (param_3 == &PTR_FUN_01918c28) {
    iVar4 = FUN_00416db0(param_4,L"PARENT");
    if (iVar4 == 0) {
      uVar6 = FUN_004634b0(&local_40);
      (**(code **)(*param_2 + 0xc0))(param_2,uVar6);
    }
  }
  else if (param_3 == &PTR_FUN_01921f40) {
    iVar4 = FUN_00416db0(param_4,L"TAGSTR");
    if (iVar4 == 0) {
      FUN_00467e90(param_2 + 0x3a,&local_40);
    }
  }
  else if (param_3 == &PTR_FUN_01925478) {
    iVar4 = FUN_00416db0(param_4,L"TEXT");
    if (iVar4 == 0) {
      cVar1 = FUN_005fcf90(param_2[0xf]);
      if (cVar1 != '\x01') {
        sVar3 = FUN_0046c220(&local_40);
        if (sVar3 == 0x100) {
          FUN_00466730(&local_60,&local_40,0);
          uVar2 = FUN_005fcf90(param_2[0xf]);
          FUN_01807bd0(&local_58,local_60,uVar2,0);
          (**(code **)(*param_2 + 0x358))(param_2,local_58);
          goto code_r0x018fb3c2;
        }
      }
      FUN_00467310(&local_68,&local_40);
      (**(code **)(*param_2 + 0x358))(param_2,local_68);
    }
    else {
      iVar4 = FUN_00416db0(param_4,L"ANSITEXT");
      if (iVar4 == 0) {
        FUN_00466730(&local_70,&local_40,0);
        FUN_0195f760(param_2,local_70);
      }
      else {
        iVar4 = FUN_00416db0(param_4,L"LINES");
        if (iVar4 == 0) {
          uVar6 = FUN_004634b0(&local_40);
          (**(code **)(*(longlong *)param_2[0x61] + 0x10))((longlong *)param_2[0x61],uVar6);
        }
      }
    }
  }
  else if (param_3 == &PTR_FUN_01936058) {
    iVar4 = FUN_00416db0(param_4,L"MODALRESULT");
    if (iVar4 == 0) {
      uVar5 = FUN_00462650(&local_40);
      FUN_0196a380(param_2,uVar5);
    }
  }
  else if (param_3 == &PTR_FUN_0193aeb8) {
    iVar4 = FUN_00416db0(param_4,L"TERMINATED");
    if (iVar4 == 0) {
      iVar4 = FUN_004644a0(&local_40);
      FUN_01977630(param_2,iVar4 != 0);
    }
  }
  else if (param_3 == &PTR_FUN_01937480) {
    iVar4 = FUN_00416db0(param_4,L"DESTROYFORMS");
    if (iVar4 == 0) {
      iVar4 = FUN_004644a0(&local_40);
      *(bool *)((longlong)param_2 + 9) = iVar4 != 0;
    }
  }
  else if (param_3 == &PTR_FUN_018b5738) {
    iVar4 = FUN_00416db0(param_4,L"CURPAGE");
    if (iVar4 == 0) {
      uVar5 = FUN_00462650(&local_40);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    }
  }
code_r0x018fb3c2:
  FUN_004144d0(&local_70);
  FUN_00414520(&local_68);
  FUN_004144d0(&local_60);
  FUN_004145c0(&local_58,2);
  FUN_00460ba0(&local_40);
  return;
}

