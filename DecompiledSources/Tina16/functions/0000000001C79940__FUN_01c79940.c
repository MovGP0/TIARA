/* Ghidra address: 01c79940 */
/* Ghidra symbol: FUN_01c79940 */


void FUN_01c79940(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_6d8 [32];
  undefined8 local_6b8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  longlong local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8 [256];
  undefined8 local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined1 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  short *local_4a8;
  undefined1 *local_4a0;
  longlong *local_490;
  longlong *local_488;
  longlong *local_480;
  longlong *local_478;
  char local_469;
  longlong *local_468;
  int local_460;
  int local_45c;
  undefined8 local_458;
  longlong local_450;
  longlong local_448;
  undefined1 local_440;
  undefined4 local_43c;
  char local_434;
  undefined1 local_433;
  byte local_432 [41];
  undefined1 local_409;
  undefined1 local_3e0;
  undefined1 local_3b7;
  undefined1 local_38e;
  undefined1 local_365;
  undefined2 local_364;
  undefined2 local_362;
  undefined2 local_360;
  undefined2 local_35e;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350;
  undefined1 local_34f;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined8 local_318;
  undefined1 local_310 [768];
  
  local_4a0 = auStack_6d8;
  local_6a0 = 0;
  local_698 = 0;
  local_690 = 0;
  local_688 = 0;
  local_680 = 0;
  local_678 = 0;
  local_670 = 0;
  local_668 = 0;
  local_660 = 0;
  local_650 = 0;
  local_658 = 0;
  local_648 = 0;
  local_640 = 0;
  local_638 = 0;
  local_630 = 0;
  local_628 = 0;
  local_620 = 0;
  local_618 = 0;
  local_610 = 0;
  local_608 = 0;
  local_600 = 0;
  local_5f8 = 0;
  local_5f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4c0 = 0;
  local_4c8 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = (short *)0x0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_338 = 0;
  local_478 = (longlong *)0x0;
  local_480 = (longlong *)0x0;
  local_488 = (longlong *)0x0;
  local_490 = (longlong *)0x0;
  FUN_00417580(&local_450,&DAT_01c4d5e8);
  if (*param_2 != 0) {
    FUN_00441920(&local_4a8,*param_2);
    if (*local_4a8 == 0x23) {
      FUN_00416ba0(&local_4b0,*(undefined8 *)PTR_DAT_02001340,L"\\TEST");
      FUN_00724420(*(undefined8 *)(param_1 + 0xad0),local_4b0);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xad0) + 0xa8))
                        (*(longlong **)(param_1 + 0xad0));
      if (cVar1 == '\0') {
        *PTR_DAT_02003d20 = 0;
        *PTR_DAT_020023b0 = 0;
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_4c8,0x593);
        local_4d8 = *param_2;
        local_4d0 = 0x11;
        FUN_00442f70(&local_4c0,local_4c8,&local_4d8,0);
        FUN_016fd940(local_4c0);
        goto LAB_01c7a88b;
      }
      FUN_00724270(*(undefined8 *)(param_1 + 0xad0),&local_4b8);
      FUN_00414ad0(param_2,local_4b8);
    }
    local_468 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_468 + 0xd8))(local_468,*param_2);
    (**(code **)(*local_468 + 0x38))(local_468,&local_4e0);
    iVar2 = FUN_004170c0(L"<?xml",local_4e0,1);
    local_469 = iVar2 == 0;
    FUN_00410f20(local_468);
    *PTR_DAT_02002ce0 = 0;
    *PTR_DAT_02002a08 = 0;
    FUN_00b92240(*param_2,L"[END]");
    cVar1 = FUN_00440a20(*param_2,1);
    if (cVar1 == '\0') {
      FUN_0044d440();
    }
    if (local_469 == '\0') {
      FUN_00bac3d0(&local_478);
      cVar1 = (**(code **)(*local_478 + 0x170))(local_478,*param_2);
      if ((cVar1 != '\0') &&
         ((**(code **)(*local_478 + 0x100))(local_478,&local_630), local_630 != 0)) {
        (**(code **)(*local_478 + 0x100))(local_478,&local_488);
        (**(code **)(*local_488 + 0x100))(local_488,&local_638,L"version");
        local_45c = FUN_0043fc50(local_638,0);
        (**(code **)(*local_488 + 0xe8))(local_488,&local_480,L"/tasklist/task");
        (**(code **)(*local_480 + 0x68))(local_480);
        (**(code **)(*local_480 + 0x70))(local_480,&local_640);
        FUN_0041b890(&local_490,local_640,&DAT_01c7abe6);
        local_460 = 0;
        FUN_00848a70(*(undefined8 *)(param_1 + 0xa48),100);
        while (local_490 != (longlong *)0x0) {
          (**(code **)(*local_490 + 0xb8))(local_490,&local_648);
          FUN_00414b50(&local_450,local_648);
          (**(code **)(*local_490 + 0x100))(local_490,&local_658,L"file");
          FUN_00b93320(&local_650,local_658);
          FUN_00b928f0(&local_330,local_650,0);
          cVar1 = FUN_005d2620(local_330,1);
          if (cVar1 == '\0') {
            local_6b8 = local_330;
            FUN_00416cd0(&local_448,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c7ab14);
          }
          else {
            FUN_00414b50(&local_448,local_330);
          }
          (**(code **)(*local_490 + 0x100))(local_490,&local_660,L"mode");
          FUN_00416910(local_5e8,local_660,0xff);
          FUN_00415020(local_432,local_5e8,0x28);
          iVar2 = FUN_00414f50(local_432,&DAT_01c7ac26,(ulonglong)local_432[0] + 1);
          if (iVar2 == 0) {
            local_434 = '\x02';
          }
          else {
            iVar2 = FUN_00414f50(local_432,&DAT_01c7ac29,(ulonglong)local_432[0] + 1);
            if (iVar2 == 0) {
              local_434 = '\x01';
            }
            else {
              iVar2 = FUN_00414f50(local_432,&DAT_01c7ac2c,(ulonglong)local_432[0] + 1);
              if (iVar2 == 0) {
                local_434 = '\x03';
              }
              else {
                iVar2 = FUN_00414f50(local_432,&DAT_01c7ac2f,(ulonglong)local_432[0] + 1);
                if (iVar2 == 0) {
                  local_434 = '\x04';
                }
                else {
                  iVar2 = FUN_00414f50(local_432,&DAT_01c7ac32,(ulonglong)local_432[0] + 1);
                  if (iVar2 == 0) {
                    local_434 = '\x05';
                  }
                  else {
                    local_434 = '\0';
                  }
                }
              }
            }
          }
          (**(code **)(*local_490 + 0x100))(local_490,&local_668,L"editing");
          iVar2 = FUN_00416db0(local_668,&DAT_01c7ab8c);
          local_365 = iVar2 == 0;
          local_364 = 0;
          (**(code **)(*local_490 + 0x100))(local_490,&local_670,L"faulty");
          local_362 = FUN_00b914f0(local_670);
          (**(code **)(*local_490 + 0x100))(local_490,&local_678,L"analflags");
          local_360 = FUN_00b914f0(local_678);
          (**(code **)(*local_490 + 0x100))(local_490,&local_680,L"measflags");
          local_35e = FUN_00b914f0(local_680);
          (**(code **)(*local_490 + 0x100))(local_490,&local_688,L"autosolve");
          iVar2 = FUN_00416db0(local_688,&DAT_01c7ab8c);
          local_350 = iVar2 == 0;
          (**(code **)(*local_490 + 0x100))(local_490,&local_690,L"advisor");
          iVar2 = FUN_00416db0(local_690,&DAT_01c7ab8c);
          local_34f = iVar2 == 0;
          local_440 = 0;
          local_358 = 0xffffffff;
          local_354 = 0;
          local_35c = 0xffffffff;
          local_43c = 0;
          local_433 = 0;
          local_409 = 0;
          local_3e0 = 0;
          local_3b7 = 0;
          local_38e = 0;
          if (local_45c < 5) {
            local_350 = local_434 == '\x04';
            local_35e = 0;
            local_360 = 2;
          }
          local_458 = FUN_00418560(0x118,&DAT_01c4d5e8);
          FUN_00417c40(local_458,&local_450,&DAT_01c4d5e8);
          plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0xa48),1);
          FUN_00416ba0(&local_698,&DAT_01c7ab9c,local_450);
          (**(code **)(*plVar4 + 0x80))(plVar4,local_698,local_458);
          local_460 = local_460 + 1;
          (**(code **)(*local_480 + 0x70))(local_480,&local_6a0);
          FUN_0041b890(&local_490,local_6a0,&DAT_01c7abe6);
        }
        FUN_00848a70(*(undefined8 *)(param_1 + 0xa48),local_460);
      }
    }
    else {
      FUN_0040cf10(local_310,*param_2,0);
      FUN_00409900();
      FUN_0040c9e0(local_310);
      FUN_00409900();
      FUN_00b922d0(local_310,&local_318);
      iVar2 = FUN_004170c0(L"TTASK:",local_318,1);
      if (iVar2 == 1) {
        FUN_00416dc0(&local_4e8,local_318,7,0xff);
        local_45c = FUN_0043fc50(local_4e8,0);
      }
      else {
        FUN_0040c9e0(local_310);
        FUN_00409900();
        local_45c = 0;
      }
      *PTR_DAT_02002ce0 = 0;
      local_460 = 0;
      FUN_00848a70(*(undefined8 *)(param_1 + 0xa48),100);
      while( true ) {
        cVar1 = FUN_0040d1c0(local_310);
        FUN_00409900();
        if ((cVar1 != '\0') || (*PTR_DAT_02002ce0 != '\0')) break;
        FUN_00b922d0(local_310,&local_338);
        FUN_00414b50(&local_450,local_338);
        FUN_00b922d0(local_310,&local_338);
        local_6b8 = local_338;
        FUN_00416cd0(&local_448,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c7ab14);
        FUN_00b922d0(local_310,&local_338);
        FUN_00414b50(&local_320,local_338);
        if (*PTR_DAT_02002ce0 == '\0') {
          if (((local_450 == 0) || (local_448 == 0)) || (local_320 == 0)) {
            *PTR_DAT_02002ce0 = 1;
          }
          else {
            FUN_00b90870(&local_328,&local_320);
            FUN_00416910(local_5e8,local_328,0xff);
            FUN_00415020(local_432,local_5e8,0x28);
            iVar2 = FUN_00416db0(local_328,&PTR_DAT_01c7ab24);
            if (iVar2 == 0) {
              local_434 = '\x02';
            }
            else {
              iVar2 = FUN_00416db0(local_328,&PTR_DAT_01c7ab38);
              if (iVar2 == 0) {
                local_434 = '\x01';
              }
              else {
                iVar2 = FUN_00416db0(local_328,&PTR_LAB_01c7ab4c);
                if (iVar2 == 0) {
                  local_434 = '\x03';
                }
                else {
                  iVar2 = FUN_00416db0(local_328,&PTR_DAT_01c7ab60);
                  if (iVar2 == 0) {
                    local_434 = '\x04';
                  }
                  else {
                    iVar2 = FUN_00416db0(local_328,L"DCOPT");
                    if (iVar2 == 0) {
                      local_434 = '\x05';
                    }
                    else {
                      local_434 = '\0';
                    }
                  }
                }
              }
            }
            FUN_00b90870(&local_5f0,&local_320);
            iVar2 = FUN_00416db0(local_5f0,&DAT_01c7ab8c);
            local_365 = iVar2 == 0;
            FUN_00b90870(&local_5f8,&local_320);
            local_364 = FUN_00b914f0(local_5f8);
            FUN_00b90870(&local_600,&local_320);
            local_362 = FUN_00b914f0(local_600);
            FUN_00b90870(&local_608,&local_320);
            local_360 = FUN_00b914f0(local_608);
            FUN_00b90870(&local_610,&local_320);
            local_35e = FUN_00b914f0(local_610);
            FUN_00b90870(&local_618,&local_320);
            iVar2 = FUN_00416db0(local_618,&DAT_01c7ab8c);
            local_350 = iVar2 == 0;
            FUN_00b90870(&local_620,&local_320);
            iVar2 = FUN_00416db0(local_620,&DAT_01c7ab8c);
            local_34f = iVar2 == 0;
            local_440 = 0;
            local_358 = 0xffffffff;
            local_354 = 0;
            local_35c = 0xffffffff;
            local_43c = 0;
            local_433 = 0;
            local_409 = 0;
            local_3e0 = 0;
            local_3b7 = 0;
            local_38e = 0;
            if (local_45c < 5) {
              local_350 = local_434 == '\x04';
              local_35e = 0;
              local_360 = 2;
            }
          }
          if (*PTR_DAT_02002ce0 == '\0') {
            local_458 = FUN_00418560(0x118,&DAT_01c4d5e8);
            FUN_00417c40(local_458,&local_450,&DAT_01c4d5e8);
            plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0xa48),1);
            FUN_00416ba0(&local_628,&DAT_01c7ab9c,local_450);
            (**(code **)(*plVar4 + 0x80))(plVar4,local_628,local_458);
            local_460 = local_460 + 1;
          }
        }
      }
      FUN_00848a70(*(undefined8 *)(param_1 + 0xa48),local_460);
      FUN_0040d150(local_310);
      FUN_00409900();
    }
    *PTR_DAT_02002ce0 = 0;
  }
LAB_01c7a88b:
  FUN_0041b800(&local_6a0);
  FUN_00414560(&local_698,0xb);
  FUN_0041b800(&local_640);
  FUN_00414480(&local_638);
  FUN_0041b800(&local_630);
  FUN_00414560(&local_628,8);
  FUN_00414560(&local_4e8,2);
  FUN_00414560(&local_4c8,2);
  FUN_00414480(&local_4b8);
  FUN_00414560(&local_4b0,2);
  FUN_00417840(&local_490,&LAB_00b9fca0,2);
  FUN_0041b800(&local_480);
  FUN_0041b800(&local_478);
  FUN_00417740(&local_450,&DAT_01c4d5e8);
  FUN_00414560(&local_338,5);
  return;
}

