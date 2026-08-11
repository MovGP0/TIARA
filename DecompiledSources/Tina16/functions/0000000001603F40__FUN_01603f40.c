/* Ghidra address: 01603f40 */
/* Ghidra symbol: FUN_01603f40 */


void FUN_01603f40(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_5a8 [32];
  undefined8 local_588;
  undefined *local_580;
  int *local_578;
  undefined *local_570;
  undefined8 local_568;
  undefined *local_560;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  int *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined1 *local_4f0;
  char local_4d9;
  undefined1 local_4d8 [14];
  undefined8 local_4ca;
  undefined4 local_4ba;
  char local_4b6;
  undefined1 local_4b4;
  undefined4 local_4b2;
  undefined1 local_4a1;
  undefined8 local_4a0;
  undefined4 local_498;
  int local_494;
  ulonglong local_490;
  ulonglong uStack_488;
  undefined8 local_480;
  undefined8 local_478;
  int local_470;
  undefined1 local_46a [522];
  undefined8 local_260;
  undefined1 local_252 [522];
  undefined8 local_48;
  undefined8 local_40;
  
  local_4f0 = auStack_5a8;
  local_548 = 0;
  local_550 = 0;
  local_540 = 0;
  local_538 = 0;
  local_528 = 0;
  local_530 = 0;
  local_518 = 0;
  local_520 = (int *)0x0;
  local_510 = 0;
  local_508 = 0;
  local_4f8 = 0;
  local_500 = 0;
  local_260 = 0;
  local_4a0 = 0;
  cVar2 = FUN_019a02e0(param_1);
  if (cVar2 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_500,PTR_LAB_020025c0);
    FUN_00b8e650(uVar3,&local_4f8,L"Sched_c.sAnaNotAllowedTxt",local_500);
    FUN_016fd940(local_4f8);
  }
  else {
    local_588 = CONCAT71(local_588._1_7_,param_3);
    local_580 = (undefined *)((ulonglong)local_580 & 0xffffffffffff0000);
    local_578 = &local_494;
    cVar2 = FUN_014b7d50(0xd,param_1,1,0);
    if (cVar2 == '\0') {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_508,local_494 + 0x86);
      FUN_016fd940(local_508);
    }
    else {
      local_470 = 1;
      puVar5 = (undefined8 *)PTR_DAT_02003ed8;
      puVar6 = (undefined8 *)local_4d8;
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_019a16d0(param_1,4,0x86);
      if (cVar2 == '\0') {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_510,0x106);
        FUN_016fd9b0(local_510,0x1582);
      }
      else {
        if ((param_2 == '\0') && (param_3 == '\0')) {
          uVar3 = FUN_007fc180(&PTR_FUN_00e80318,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_02001fa0 = uVar3;
          FUN_00e80c70(*(undefined8 *)PTR_DAT_02001fa0,local_4d8);
          (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001fa0 + 0x6d8) + 0x128))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001fa0 + 0x6d8),*PTR_DAT_02003d98);
          local_470 = (**(code **)(**(longlong **)PTR_DAT_02001fa0 + 0x2d0))
                                (*(longlong **)PTR_DAT_02001fa0);
          FUN_00e80c50(*(undefined8 *)PTR_DAT_02001fa0,local_4d8);
          FUN_00410f20(*(undefined8 *)PTR_DAT_02001fa0);
        }
        else {
          local_4d8._6_8_ = *(undefined8 *)(PTR_DAT_02004010 + 0x2c0);
          local_4ca = FUN_015f6540(local_4d8._6_8_);
        }
        if (local_470 == 1) {
          uVar3 = *(undefined8 *)(PTR_DAT_020034d0 + 0x10);
          local_490 = *(ulonglong *)PTR_DAT_020034d0 & 0xffffffffffffff;
          uStack_488 = *(ulonglong *)(PTR_DAT_020034d0 + 8) & 0xffffffff;
          local_478 = *(undefined8 *)(PTR_DAT_02004010 + 0x2c0);
          local_480._3_5_ = (undefined5)((ulonglong)uVar3 >> 0x18);
          uVar1 = CONCAT53(local_480._3_5_,CONCAT12(PTR_DAT_020030c0[2],(short)uVar3));
          local_480._5_3_ = (undefined3)((ulonglong)uVar3 >> 0x28);
          local_480 = CONCAT35(local_480._5_3_,CONCAT14(PTR_DAT_020030c0[3],(int)uVar1)) &
                      0xffffffffffffff00;
          local_4ba = 0;
          local_4b4 = 0;
          local_4a1 = *PTR_DAT_020017c0;
          FUN_015fcb30(&local_260,&DAT_0210f7fc);
          uVar3 = FUN_00442620(local_252,local_260);
          FUN_015fcc20(uVar3,&local_48,0,0);
          local_40 = FUN_0154bb80(&DAT_01546f18,1);
          FUN_01569030(local_40,*(undefined8 *)(param_1 + 0x360));
          local_588 = 0;
          local_578 = (int *)CONCAT71(local_578._1_7_,param_3);
          local_570 = (undefined *)((ulonglong)local_570 & 0xffffffffffffff00);
          local_580 = (undefined *)param_1;
          FUN_0155bbe0(local_40,local_260,local_48,&local_490);
          FUN_019af590(param_1,local_260);
          cVar2 = FUN_019a04e0(param_1,0xffff,&local_498);
          if (cVar2 == '\0') {
            local_4b2 = 0;
          }
          else {
            local_4b2 = local_498;
          }
          FUN_01603020(param_1,0,0,0);
          FUN_015fd070(local_260,0,local_40,local_4d8);
          FUN_015f9c70(&local_518);
          FUN_015fcd70(&local_520,local_260);
          local_588 = local_518;
          local_580 = &DAT_016048f8;
          local_578 = local_520;
          local_570 = &DAT_016048e8;
          local_568 = *(undefined8 *)PTR_PTR_02001aa8;
          local_560 = &DAT_0160490c;
          FUN_00416cd0(&local_4a0,8,*(undefined8 *)PTR_DAT_02005598,&DAT_016048e8);
          FUN_00442620(local_46a,local_4a0);
          if ((param_2 == '\0') && (local_4b6 != '\0')) {
            FUN_015f9c70(&local_530);
            local_588 = local_530;
            FUN_00416cd0(&local_528,3,*(undefined8 *)PTR_DAT_02005598,&DAT_016048e8);
            cVar2 = FUN_00440a20(local_528,1);
            if (cVar2 == '\0') {
              FUN_015f9c70(&local_540);
              FUN_00416ad0(&local_540,L" not found in TINA path!");
              FUN_015fcf20(local_540,0,0,0);
            }
            else {
              uVar3 = FUN_015f2270();
              *(undefined8 *)PTR_DAT_02002410 = uVar3;
              if (*(longlong *)PTR_DAT_02002410 == 0) {
                FUN_00416830(&local_538,local_46a,0x105);
                FUN_01d44af0(local_538,0,1);
              }
              else {
                thunk_FUN_0413e052(*(undefined8 *)PTR_DAT_02002410,0x8196,1,0);
                thunk_FUN_041775c2(*(undefined8 *)PTR_DAT_02002410);
              }
            }
          }
          else {
            _Param_SetAnalysisParameters(local_48,*(undefined8 *)(param_1 + 0x60a));
            local_588 = 0;
            local_580 = (undefined *)0x0;
            cVar2 = FUN_015f47a0(local_48,param_1,param_3,&local_4d9);
            if (cVar2 == '\0') {
              FUN_015fcf20(0,local_48,1,0);
            }
            FUN_0160bca0(local_48,local_40,1);
            FUN_0160f290(local_48,local_40);
            FUN_0156c410(local_40,param_1,local_48,1);
            if (local_4d9 == '\0') {
              cVar2 = _run_stricted(local_48,param_2);
              if (cVar2 == '\0') {
                FUN_015f8f20(&local_548,local_48);
                FUN_00416880(&local_550,local_548);
                FUN_015fcf20(local_550,local_48,0,0);
              }
              FUN_01603ea0(param_1,local_260,local_48,param_2);
              FUN_01601740(local_48,local_260,local_40,0);
            }
          }
          FUN_0156c550(local_40,local_48);
          FUN_00410f20(local_40);
          uVar3 = FUN_00442620(local_252,local_260);
          FUN_015fcd60(local_48,uVar3,0);
          FUN_015fcbd0(&DAT_0210f7fc,0);
        }
      }
    }
  }
  FUN_00414480(&local_550);
  FUN_004144d0(&local_548);
  FUN_00414560(&local_540,10);
  FUN_00414480(&local_4a0);
  FUN_00414480(&local_260);
  return;
}

