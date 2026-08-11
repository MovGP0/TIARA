/* Ghidra address: 013e2850 */
/* Ghidra symbol: FUN_013e2850 */


undefined1 FUN_013e2850(char param_1,longlong *param_2,int param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res20;
  undefined1 auStack_4c8 [32];
  ulonglong local_4a8;
  ulonglong local_4a0;
  ulonglong local_498;
  undefined1 local_490;
  int local_47c;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 *local_3c0;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong local_368 [101];
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  int local_1c;
  
  local_3c0 = auStack_4c8;
  local_458 = 0;
  local_460 = 0;
  local_468 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_438 = 0;
  local_430 = 0;
  local_418 = 0;
  local_420 = 0;
  local_428 = 0;
  local_408 = 0;
  local_410 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_29 = 0;
  local_370 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)PTR_DAT_02003118 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02003118);
  }
  local_4a8 = 0;
  uVar3 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,0);
  *(undefined8 *)PTR_DAT_02003118 = uVar3;
  FUN_01cc6020(*(undefined8 *)PTR_DAT_02003118);
  local_28 = FUN_01af24a0(&DAT_01af0038,1,1,0);
  DAT_02108460 = '\0';
  uVar3 = FUN_00b89270();
  FUN_0041ddd0(&local_3d0,&LAB_013e2598);
  FUN_00b8e650(uVar3,&local_3c8,L"DrawWind.ImportingTxt",local_3d0);
  FUN_0064de00(*(undefined8 *)(local_28 + 8),local_3c8);
  FUN_01af2a70(local_28,FUN_013e25b0);
  *(undefined8 *)(local_28 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(local_28,1);
  FUN_01af29d0(local_28,0);
  FUN_01af2ae0(local_28);
  (**(code **)(*param_2 + 0x18))(param_2,&local_3d8,param_3);
  FUN_00415dd0(&local_3e0,local_3d8,0);
  FUN_00415dd0(&local_3e8,local_res20,0);
  FUN_00d309d0(local_3e0,local_370,local_3e8);
  if (param_1 == '\x01') {
    local_4a8 = (ulonglong)local_4a8._1_7_ << 8;
    local_4a0 = 0;
    local_498 = CONCAT71(local_498._1_7_,1);
    local_490 = 0;
    FUN_01cc2930(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),L"Imported",2,0);
  }
  else if (param_1 == '\x02') {
    local_4a8 = (ulonglong)local_4a8._1_7_ << 8;
    local_4a0 = local_4a0 & 0xffffffffffffff00;
    local_498 = 0;
    local_490 = 1;
    FUN_01cc31d0(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),2,L"Imported",2);
  }
  else if (param_1 == '\a') {
    local_380 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    if (0 < param_3) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_3f0,param_3 + -1);
      FUN_00415dd0(&local_3f8,local_3f0,0);
      FUN_00415dd0(&local_400,local_res20,0);
      FUN_00d309d0(local_3f8,local_380,local_400);
    }
    iVar2 = (**(code **)(*local_380 + 0x28))(local_380);
    iVar1 = (**(code **)(*local_370 + 0x28))(local_370);
    if (iVar2 == iVar1) {
      (**(code **)(*local_380 + 0x98))(local_380,0);
    }
    else {
      (**(code **)(*local_380 + 0x90))(local_380);
      iVar2 = (**(code **)(*local_370 + 0x28))(local_370);
      iVar2 = iVar2 + -1;
      local_30 = 1;
      if (0 < iVar2) {
        do {
          FUN_0043f750(&local_410,local_30);
          FUN_00416ba0(&local_408,L"Channel_",local_410);
          (**(code **)(*local_380 + 0x80))(local_380,local_408,1);
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = (**(code **)(*local_370 + 0x28))(local_370);
    local_4a8 = local_4a8 & 0xffffffffffffff00;
    local_4a0 = 0;
    local_498 = local_498 & 0xffffffffffffff00;
    FUN_01cc3330(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),iVar2 + -1,local_380,2);
    FUN_00410f20(local_380);
  }
  local_47c = (**(code **)(*param_2 + 0x28))(param_2);
  local_47c = local_47c + -1;
  local_1c = param_3;
  if (param_3 <= local_47c) {
    local_47c = (local_47c - param_3) + 1;
    do {
      if (DAT_02108460 != '\0') break;
      iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
      lVar4 = FUN_0040c770((double)(local_1c * 100) / (double)(iVar2 - param_3));
      FUN_01af2990(local_28,(double)lVar4);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      (**(code **)(*param_2 + 0x18))(param_2,&local_418,local_1c);
      FUN_00415dd0(&local_420,local_418,0);
      FUN_00415dd0(&local_428,local_res20,0);
      FUN_00d309d0(local_420,local_370,local_428);
      iVar2 = (**(code **)(*local_370 + 0x28))(local_370);
      if (iVar2 == 2) {
        (**(code **)(*local_370 + 0x18))(local_370,&local_430,0);
        local_398 = local_430;
        local_38 = FUN_00448650(local_430,PTR_DAT_02004830);
        (**(code **)(*local_370 + 0x18))(local_370,&local_438,1);
        local_3a0 = local_438;
        local_40 = FUN_00448650(local_438,PTR_DAT_02004830);
        FUN_01cc4620(*(undefined8 *)PTR_DAT_02003118,local_38);
        FUN_01cc46b0(*(undefined8 *)PTR_DAT_02003118,0,local_40);
      }
      else {
        (**(code **)(*local_370 + 0x18))(local_370,&local_440,0);
        local_3a8 = local_440;
        local_38 = FUN_00448650(local_440,PTR_DAT_02004830);
        iVar2 = (**(code **)(*local_370 + 0x28))(local_370);
        iVar2 = iVar2 + -1;
        local_30 = 1;
        if (0 < iVar2) {
          do {
            (**(code **)(*local_370 + 0x18))(local_370,&local_448,local_30);
            local_3b0 = local_448;
            lVar4 = FUN_00448650(local_448,PTR_DAT_02004830);
            local_368[local_30 + -1] = lVar4;
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_01cc4620(*(undefined8 *)PTR_DAT_02003118,local_38);
        iVar2 = (**(code **)(*local_370 + 0x28))(local_370);
        FUN_01cc4700(*(undefined8 *)PTR_DAT_02003118,local_368,iVar2 + -1);
      }
      local_1c = local_1c + 1;
      local_47c = local_47c + -1;
    } while (local_47c != 0);
  }
  FUN_00410f20(local_28);
  if (DAT_02108460 == '\0') {
    local_29 = 1;
    if (param_5 == '\0') {
      FUN_013d2f60(*(undefined8 *)PTR_DAT_02003118,0,0);
    }
    else {
      local_378 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_01cc5c60(*(undefined8 *)PTR_DAT_02003118);
      local_388 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02003118);
      while (local_388 != 0) {
        FUN_01cc0ae0(local_388,&local_450);
        (**(code **)(*local_378 + 0x80))(local_378,local_450,local_388);
        local_388 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02003118);
      }
      local_29 = FUN_013e2500(*(undefined8 *)PTR_DAT_02003118,local_378,0,1);
      FUN_00410f20(local_378);
    }
  }
  else {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003118);
    *(undefined8 *)PTR_DAT_02003118 = 0;
  }
  FUN_00410f20(local_370);
  FUN_00414560(&local_468,8);
  FUN_00414590(&local_428,2);
  FUN_00414560(&local_418,3);
  FUN_00414590(&local_400,2);
  FUN_00414480(&local_3f0);
  FUN_00414590(&local_3e8,2);
  FUN_00414560(&local_3d8,3);
  FUN_00414480(&local_res20);
  return local_29;
}

