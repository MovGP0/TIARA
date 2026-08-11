/* Ghidra address: 01a810b0 */
/* Ghidra symbol: FUN_01a810b0 */


void FUN_01a810b0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_618 [32];
  undefined8 local_5f8;
  wchar_t *local_5f0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  int local_5d0;
  int local_5cc;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined1 *local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong *local_4b8;
  longlong local_4b0;
  longlong local_4a0;
  longlong local_498;
  longlong *local_490;
  longlong local_488;
  longlong *local_480;
  longlong local_478;
  undefined8 local_470;
  longlong *local_468;
  double *local_460;
  double *local_458;
  double *local_450;
  int local_444;
  undefined4 local_440;
  int local_43c;
  int local_438;
  char local_433;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  char local_40a;
  char local_409;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [759];
  char local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_540 = auStack_618;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  local_570 = 0;
  local_578 = 0;
  local_580 = 0;
  local_568 = 0;
  local_560 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_418 = 0;
  local_420 = 0;
  local_428 = 0;
  local_430 = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  FUN_01aee720(&local_548,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFAsTextMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_548);
  local_f0 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_f1 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_f0);
  local_433 = '\0';
  if (local_f1 == '\x02') {
    local_490 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_00414ad0(local_490 + 0x20,&DAT_01a83724);
    FUN_00724380(local_490,L"tcurve.txt");
    FUN_00414ad0(local_490 + 0x1c,L"Text files (*.txt)|*.txt");
    *(undefined4 *)(local_490 + 0x1b) = 0x116;
    cVar3 = (**(code **)(*local_490 + 0xa8))(local_490);
    if (cVar3 != '\0') {
      FUN_00724270(local_490,&local_550);
      FUN_0040cf10(local_3e8,local_550,0);
      FUN_00409900();
      FUN_0040ca00(local_3e8);
      FUN_00409900();
      uVar5 = FUN_004aeac0(local_f0,0);
      cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
      if (cVar3 == '\0') {
        uVar5 = FUN_004aeac0(local_f0,0);
        cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aaff18);
        if (cVar3 != '\0') {
          local_4a0 = FUN_004aeac0(local_f0,0);
          (**(code **)(**(longlong **)(local_4a0 + 0x80) + 0x10))
                    (*(longlong **)(local_4a0 + 0x80),*(undefined8 *)(local_4a0 + 0x98),0);
          DAT_02110848 = 0;
          DAT_02110850 = 0;
          FUN_00414b50(&local_430,*(undefined8 *)(*(longlong *)(local_4a0 + 0xe8) + 0xd8));
          iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
          if (0 < iVar4) {
            iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
            FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
          }
          iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
          if (0 < iVar4) {
            iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
            FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
          }
          uVar5 = FUN_0040f200(local_3e8,local_430);
          uVar5 = FUN_0040f3d0(uVar5,9);
          FUN_01cc0ae0(*(undefined8 *)(local_4a0 + 0x98),&local_560);
          uVar5 = FUN_0040f200(uVar5,local_560);
          FUN_0040f590(uVar5);
          FUN_00409900();
          local_40a = '\x04';
          while (cVar3 = (**(code **)(**(longlong **)(local_4a0 + 0x80) + 0x30))
                                   (*(longlong **)(local_4a0 + 0x80),&local_3f0,&local_409,0),
                cVar3 != '\0') {
            if (local_40a == '\0') {
              FUN_00414480(&local_38);
              FUN_00448450(&local_38,local_3f0,PTR_DAT_02004830);
              uVar5 = FUN_0040f200(local_3e8,local_38);
              uVar5 = FUN_0040f3d0(uVar5,9);
              uVar5 = FUN_0040ef30(uVar5,0);
              FUN_0040f590(uVar5);
              FUN_00414480(&local_38);
              FUN_00409900();
            }
            else if (local_40a == '\x01') {
              FUN_00414480(&local_40);
              FUN_00448450(&local_40,local_3f0,PTR_DAT_02004830);
              uVar5 = FUN_0040f200(local_3e8,local_40);
              uVar5 = FUN_0040f3d0(uVar5,9);
              uVar5 = FUN_0040ef30(uVar5,1);
              FUN_0040f590(uVar5);
              FUN_00414480(&local_40);
              FUN_00409900();
            }
            if (local_409 == '\0') {
              FUN_00414480(&local_48);
              FUN_00448450(&local_48,local_3f0,PTR_DAT_02004830);
              uVar5 = FUN_0040f200(local_3e8,local_48);
              uVar5 = FUN_0040f3d0(uVar5,9);
              uVar5 = FUN_0040ef30(uVar5,0);
              FUN_0040f590(uVar5);
              FUN_00414480(&local_48);
              FUN_00409900();
            }
            else if (local_409 == '\x01') {
              FUN_00414480(&local_50);
              FUN_00448450(&local_50,local_3f0,PTR_DAT_02004830);
              uVar5 = FUN_0040f200(local_3e8,local_50);
              uVar5 = FUN_0040f3d0(uVar5,9);
              uVar5 = FUN_0040ef30(uVar5,1);
              FUN_0040f590(uVar5);
              FUN_00414480(&local_50);
              FUN_00409900();
            }
            local_40a = local_409;
          }
          if (local_409 == '\0') {
            FUN_00414480(&local_58);
            local_4e0 = *(undefined8 *)(*(longlong *)(local_4a0 + 0xe8) + 0xc0);
            FUN_00448450(&local_58,local_4e0,PTR_DAT_02004830);
            uVar5 = FUN_0040f200(local_3e8,local_58);
            uVar5 = FUN_0040f3d0(uVar5,9);
            uVar5 = FUN_0040ef30(uVar5,0);
            FUN_0040f590(uVar5);
            FUN_00414480(&local_58);
            FUN_00409900();
          }
          else if (local_409 == '\x01') {
            FUN_00414480(&local_60);
            local_4e8 = *(undefined8 *)(*(longlong *)(local_4a0 + 0xe8) + 0xc0);
            FUN_00448450(&local_60,local_4e8,PTR_DAT_02004830);
            uVar5 = FUN_0040f200(local_3e8,local_60);
            uVar5 = FUN_0040f3d0(uVar5,9);
            uVar5 = FUN_0040ef30(uVar5,1);
            FUN_0040f590(uVar5);
            FUN_00414480(&local_60);
            FUN_00409900();
          }
        }
      }
      else {
        local_498 = FUN_004aeac0(local_f0,0);
        (**(code **)(**(longlong **)(local_498 + 200) + 0x10))
                  (*(longlong **)(local_498 + 200),*(undefined8 *)(local_498 + 0xe0),0);
        DAT_02110848 = 0;
        DAT_02110850 = 0;
        FUN_00414b50(&local_430,*(undefined8 *)(*(longlong *)(local_498 + 0xf8) + 0xd8));
        iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
        if (0 < iVar4) {
          iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
          FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
        }
        iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
        if (0 < iVar4) {
          iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
          FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
        }
        uVar5 = FUN_0040f200(local_3e8,local_430);
        uVar5 = FUN_0040f3d0(uVar5,9);
        FUN_01cc0ae0(*(undefined8 *)(local_498 + 0xe0),&local_558);
        uVar5 = FUN_0040f200(uVar5,local_558);
        FUN_0040f590(uVar5);
        FUN_00409900();
        while (cVar3 = (**(code **)(**(longlong **)(local_498 + 200) + 0x30))
                                 (*(longlong **)(local_498 + 200),&local_3f0,&local_3f8,0),
              cVar3 != '\0') {
          FUN_00414480(&local_30);
          FUN_00448450(&local_30,local_3f0,PTR_DAT_02004830);
          uVar5 = FUN_0040f200(local_3e8,local_30);
          local_4d8 = FUN_0040f3d0(uVar5,9);
          FUN_00414480(&local_28);
          FUN_00448450(&local_28,local_3f8,PTR_DAT_02004830);
          uVar5 = FUN_0040f200(local_4d8,local_28);
          FUN_0040f590(uVar5);
          FUN_00414480(&local_28);
          FUN_00414480(&local_30);
          FUN_00409900();
        }
      }
      FUN_0040d150(local_3e8);
      FUN_00409900();
    }
    FUN_00410f20(local_490);
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8) + 0x28))();
    local_5dc = iVar4 + -1;
    local_438 = 0;
    if (-1 < local_5dc) {
      do {
        local_5dc = iVar4;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
        uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,local_438);
        local_4b0 = FUN_004113f0(uVar5,&DAT_01cdd500);
        iVar4 = (**(code **)(**(longlong **)(local_4b0 + 0x70) + 0x28))
                          (*(longlong **)(local_4b0 + 0x70));
        if ((iVar4 == 1) && ((*(char *)(local_4b0 + 0x58) != '\x02' || (local_438 == 0)))) {
          local_4b8 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
          FUN_00414ad0(local_4b8 + 0x20,&DAT_01a83724);
          FUN_00724380(local_4b8,L"tcurve.txt");
          FUN_00414ad0(local_4b8 + 0x1c,
                       L"Text files (*.txt)|*.txt|Common Simulation Data Format (*.csd)|*.csd");
          FUN_0043f750(&local_568,local_438 + 1);
          FUN_00416ba0(local_4b8 + 0x1f,L"Save diagram",local_568);
          *(undefined4 *)(local_4b8 + 0x1b) = 0x116;
          cVar3 = (**(code **)(*local_4b8 + 0xa8))(local_4b8);
          if (cVar3 != '\0') {
            FUN_00724270(local_4b8,&local_580);
            FUN_00441a10(&local_578,local_580);
            FUN_0043e1a0(&local_570,local_578);
            iVar4 = FUN_00416db0(local_570,L".csd");
            if (iVar4 == 0) {
              FUN_00724270(local_4b8,&local_588);
              FUN_01ce92d0(local_4b0,local_588);
              goto LAB_01a83318;
            }
            FUN_00724270(local_4b8,&local_590);
            FUN_0040cf10(local_3e8,local_590,0);
            FUN_00409900();
            FUN_0040ca00(local_3e8);
            FUN_00409900();
            FUN_00414480(&local_418);
            FUN_00414480(&local_420);
            uVar5 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                              (*(longlong **)(local_4b0 + 0x80),0);
            cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
            if ((cVar3 == '\0') && (*(char *)(local_4b0 + 0x58) != '\x02')) {
              uVar5 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                (*(longlong **)(local_4b0 + 0x80),0);
              cVar3 = FUN_004113d0(uVar5,&DAT_01ab2000);
              if (cVar3 == '\0') {
                uVar5 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                  (*(longlong **)(local_4b0 + 0x80),0);
                cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aaff18);
                if (cVar3 != '\0') {
                  iVar4 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x28))();
                  local_5cc = iVar4 + -1;
                  local_1c = 0;
                  if (-1 < local_5cc) {
                    do {
                      local_5cc = iVar4;
                      local_4d0 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                            (*(longlong **)(local_4b0 + 0x80),local_1c);
                      (**(code **)(**(longlong **)(local_4d0 + 0x80) + 0x10))
                                (*(longlong **)(local_4d0 + 0x80),*(undefined8 *)(local_4d0 + 0x98),
                                 0);
                      DAT_02110848 = 0;
                      DAT_02110850 = 0;
                      FUN_00414b50(&local_430,
                                   *(undefined8 *)(*(longlong *)(local_4d0 + 0xe8) + 0xd8));
                      iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
                      if (0 < iVar4) {
                        iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
                        FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
                      }
                      iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
                      if (0 < iVar4) {
                        iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
                        FUN_00416dc0(&local_430,local_430,1,iVar4 + -1);
                      }
                      uVar5 = FUN_0040f200(local_3e8,local_430);
                      uVar5 = FUN_0040f3d0(uVar5,9);
                      FUN_01cc0ae0(*(undefined8 *)(local_4d0 + 0x98),&local_5c8);
                      uVar5 = FUN_0040f200(uVar5,local_5c8);
                      FUN_0040f590(uVar5);
                      FUN_00409900();
                      local_40a = '\x04';
                      while (cVar3 = (**(code **)(**(longlong **)(local_4d0 + 0x80) + 0x30))
                                               (*(longlong **)(local_4d0 + 0x80),&local_3f0,
                                                &local_409,0), cVar3 != '\0') {
                        if (local_40a == '\0') {
                          FUN_00414480(&local_c0);
                          FUN_00448450(&local_c0,local_3f0,PTR_DAT_02004830);
                          uVar5 = FUN_0040f200(local_3e8,local_c0);
                          uVar5 = FUN_0040f3d0(uVar5,9);
                          uVar5 = FUN_0040ef30(uVar5,0);
                          FUN_0040f590(uVar5);
                          FUN_00414480(&local_c0);
                          FUN_00409900();
                        }
                        else if (local_40a == '\x01') {
                          FUN_00414480(&local_c8);
                          FUN_00448450(&local_c8,local_3f0,PTR_DAT_02004830);
                          uVar5 = FUN_0040f200(local_3e8,local_c8);
                          uVar5 = FUN_0040f3d0(uVar5,9);
                          uVar5 = FUN_0040ef30(uVar5,1);
                          FUN_0040f590(uVar5);
                          FUN_00414480(&local_c8);
                          FUN_00409900();
                        }
                        if (local_409 == '\0') {
                          FUN_00414480(&local_d0);
                          FUN_00448450(&local_d0,local_3f0,PTR_DAT_02004830);
                          uVar5 = FUN_0040f200(local_3e8,local_d0);
                          uVar5 = FUN_0040f3d0(uVar5,9);
                          uVar5 = FUN_0040ef30(uVar5,0);
                          FUN_0040f590(uVar5);
                          FUN_00414480(&local_d0);
                          FUN_00409900();
                        }
                        else if (local_409 == '\x01') {
                          FUN_00414480(&local_d8);
                          FUN_00448450(&local_d8,local_3f0,PTR_DAT_02004830);
                          uVar5 = FUN_0040f200(local_3e8,local_d8);
                          uVar5 = FUN_0040f3d0(uVar5,9);
                          uVar5 = FUN_0040ef30(uVar5,1);
                          FUN_0040f590(uVar5);
                          FUN_00414480(&local_d8);
                          FUN_00409900();
                        }
                        local_40a = local_409;
                      }
                      if (local_409 == '\0') {
                        FUN_00414480(&local_e0);
                        local_530 = *(undefined8 *)(*(longlong *)(local_4d0 + 0xe8) + 0xc0);
                        FUN_00448450(&local_e0,local_530);
                        uVar5 = FUN_0040f200(local_3e8,local_e0);
                        uVar5 = FUN_0040f3d0(uVar5,9);
                        uVar5 = FUN_0040ef30(uVar5,0);
                        FUN_0040f590(uVar5);
                        FUN_00414480(&local_e0);
                        FUN_00409900();
                      }
                      else if (local_409 == '\x01') {
                        FUN_00414480(&local_e8);
                        local_538 = *(undefined8 *)(*(longlong *)(local_4d0 + 0xe8) + 0xc0);
                        FUN_00448450(&local_e8,local_538);
                        uVar5 = FUN_0040f200(local_3e8,local_e8);
                        uVar5 = FUN_0040f3d0(uVar5,9);
                        uVar5 = FUN_0040ef30(uVar5,1);
                        FUN_0040f590(uVar5);
                        FUN_00414480(&local_e8);
                        FUN_00409900();
                      }
                      uVar5 = FUN_0040f200(local_3e8,0);
                      FUN_0040f590(uVar5);
                      FUN_00409900();
                      local_1c = local_1c + 1;
                      local_5cc = local_5cc + -1;
                      iVar4 = local_5cc;
                    } while (local_5cc != 0);
                  }
                }
              }
              else {
                iVar4 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x28))();
                local_5d0 = iVar4 + -1;
                local_1c = 0;
                if (-1 < local_5d0) {
                  do {
                    local_5d0 = iVar4;
                    local_4c8 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                          (*(longlong **)(local_4b0 + 0x80),local_1c);
                    (**(code **)(**(longlong **)(local_4c8 + 0x80) + 0x10))
                              (*(longlong **)(local_4c8 + 0x80),*(undefined8 *)(local_4c8 + 0x98),0)
                    ;
                    DAT_02110848 = 0;
                    DAT_02110850 = 0;
                    FUN_00414b50(&local_430,*(undefined8 *)(*(longlong *)(local_4c8 + 0xe8) + 0xd8))
                    ;
                    iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
                    if (0 < iVar4) {
                      FUN_004170c0(&DAT_01a837a0,local_430,1);
                      FUN_00416dc0(&local_430,local_430,1);
                    }
                    iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
                    if (0 < iVar4) {
                      FUN_004170c0(&DAT_01a837b0,local_430,1);
                      FUN_00416dc0(&local_430,local_430,1);
                    }
                    uVar5 = FUN_0040f200(local_3e8,local_430);
                    uVar5 = FUN_0040f3d0(uVar5,9);
                    uVar5 = FUN_0040f3d0(uVar5,9);
                    FUN_01cd6430(*(undefined8 *)(local_4c8 + 0xf0),&local_5c0);
                    uVar5 = FUN_0040f200(uVar5,local_5c0);
                    FUN_0040f590(uVar5);
                    FUN_00409900();
                    (**(code **)(**(longlong **)(local_4c8 + 0x80) + 0x30))
                              (*(longlong **)(local_4c8 + 0x80),&local_400,&local_408);
                    while (cVar3 = (**(code **)(**(longlong **)(local_4c8 + 0x80) + 0x30))
                                             (*(longlong **)(local_4c8 + 0x80),&local_3f0,&local_3f8
                                             ), cVar3 != '\0') {
                      FUN_00414480(&local_a0);
                      FUN_00448450(&local_a0,local_400,PTR_DAT_02004830);
                      uVar5 = FUN_0040f200(local_3e8,local_a0);
                      local_510 = FUN_0040f3d0(uVar5,9);
                      FUN_00414480(&local_98);
                      FUN_00448450(&local_98,local_3f0,PTR_DAT_02004830);
                      uVar5 = FUN_0040f200(local_510,local_98);
                      local_518 = FUN_0040f3d0(uVar5,9);
                      FUN_00414480(&local_90);
                      FUN_00448450(&local_90,local_408,PTR_DAT_02004830);
                      uVar5 = FUN_0040f200(local_518,local_90);
                      FUN_0040f590(uVar5);
                      FUN_00414480(&local_90);
                      FUN_00414480(&local_98);
                      FUN_00414480(&local_a0);
                      FUN_00409900();
                      local_400 = local_3f0;
                      local_408 = local_3f8;
                    }
                    local_3f0 = *(undefined8 *)(local_4c8 + 0xc0);
                    FUN_00414480(&local_b8);
                    FUN_00448450(&local_b8,local_400,PTR_DAT_02004830);
                    uVar5 = FUN_0040f200(local_3e8,local_b8);
                    local_520 = FUN_0040f3d0(uVar5,9);
                    FUN_00414480(&local_b0);
                    FUN_00448450(&local_b0,local_3f0,PTR_DAT_02004830);
                    uVar5 = FUN_0040f200(local_520,local_b0);
                    local_528 = FUN_0040f3d0(uVar5,9);
                    FUN_00414480(&local_a8);
                    FUN_00448450(&local_a8,local_3f8);
                    uVar5 = FUN_0040f200(local_528,local_a8);
                    FUN_0040f590(uVar5);
                    FUN_00414480(&local_a8);
                    FUN_00414480(&local_b0);
                    FUN_00414480(&local_b8);
                    FUN_00409900();
                    uVar5 = FUN_0040f200(local_3e8,0);
                    FUN_0040f590(uVar5);
                    FUN_00409900();
                    local_1c = local_1c + 1;
                    local_5d0 = local_5d0 + -1;
                    iVar4 = local_5d0;
                  } while (local_5d0 != 0);
                }
              }
            }
            else {
              uVar5 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                (*(longlong **)(local_4b0 + 0x80),local_1c);
              cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
              if (cVar3 == '\0') {
                lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                  (*(longlong **)(local_4b0 + 0x80),0);
                FUN_00414b50(&local_430,*(undefined8 *)(*(longlong *)(lVar6 + 0xe8) + 0xd8));
              }
              else {
                lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                  (*(longlong **)(local_4b0 + 0x80),0);
                FUN_00414b50(&local_430,*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xd8));
              }
              iVar4 = FUN_004170c0(&DAT_01a837a0,local_430,1);
              if (0 < iVar4) {
                FUN_004170c0(&DAT_01a837a0,local_430,1);
                FUN_00416dc0(&local_430,local_430,1);
              }
              iVar4 = FUN_004170c0(&DAT_01a837b0,local_430,1);
              if (0 < iVar4) {
                FUN_004170c0(&DAT_01a837b0,local_430,1);
                FUN_00416dc0(&local_430,local_430,1);
              }
              FUN_00416ba0(&local_420,&DAT_01a83898,local_430);
              local_440 = 0;
              local_468 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
              local_470 = FUN_00410e60(&PTR_FUN_00472dd0,1);
              iVar4 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x28))();
              local_5d8 = iVar4 + -1;
              local_1c = 0;
              if (-1 < local_5d8) {
                do {
                  local_5d8 = iVar4;
                  uVar5 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                    (*(longlong **)(local_4b0 + 0x80),local_1c);
                  cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
                  if (cVar3 == '\0') {
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_478 = *(longlong *)(lVar6 + 0x98);
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_488 = *(longlong *)(lVar6 + 0x88);
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_480 = *(longlong **)(lVar6 + 0x80);
                  }
                  else {
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_478 = *(longlong *)(lVar6 + 0xe0);
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_488 = *(longlong *)(lVar6 + 0xd0);
                    lVar6 = (**(code **)(**(longlong **)(local_4b0 + 0x80) + 0x30))
                                      (*(longlong **)(local_4b0 + 0x80),local_1c);
                    local_480 = *(longlong **)(lVar6 + 200);
                  }
                  iVar4 = FUN_01a80fc0(auStack_618,*(undefined8 *)(local_4b0 + 0x80),local_488);
                  if ((*(int *)(local_478 + 0x154) == iVar4) &&
                     (iVar4 = FUN_004aeba0(local_470,local_478), iVar4 == -1)) {
                    bVar1 = *(byte *)(*(longlong *)(local_488 + 8) + 0x434);
                    if (bVar1 < 8) {
                      bVar7 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(local_488 + 8) >> 8),1)
                               << (bVar1 & 0x1f) & 0x10U) != 0;
                    }
                    else {
                      bVar7 = false;
                    }
                    if (bVar7) {
                      local_433 = '\x01';
                    }
                    local_444 = (**(code **)(*local_480 + 0x20))(local_480,local_478,0);
                    DAT_02110848 = 0;
                    DAT_02110850 = 0;
                    local_450 = (double *)FUN_004095c0((longlong)local_444);
                    (**(code **)(*local_468 + 0x10))(local_468);
                    FUN_00414480(&local_428);
                    FUN_01cc6ed0(local_488,local_478,local_468);
                    iVar4 = (int)local_468[2];
                    local_43c = 0;
                    if (-1 < iVar4 + -1) {
                      do {
                        uVar5 = FUN_004aeac0(local_468,local_43c);
                        FUN_004ae7e0(local_470,uVar5);
                        lVar6 = FUN_004aeac0(local_468,local_43c);
                        if (*(char *)(lVar6 + 0x2b) == '\0') {
                          uVar5 = FUN_004aeac0(local_468,local_43c);
                          FUN_01cc0ae0(uVar5,&local_598);
                          local_5f8 = local_598;
                          FUN_00416cd0(&local_428,3,local_428);
                        }
                        else {
                          bVar1 = *(byte *)(*(longlong *)(local_488 + 8) + 0x434);
                          if (bVar1 < 8) {
                            bVar7 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(local_488 + 8) >>
                                                         8),1) << (bVar1 & 0x1f) & 0x10U) != 0;
                          }
                          else {
                            bVar7 = false;
                          }
                          if (bVar7) {
                            uVar5 = FUN_004aeac0(local_468,local_43c);
                            FUN_01cc0ae0(uVar5,&local_5a0);
                            local_5f8 = local_5a0;
                            local_5f0 = L"-abs (dB)";
                            FUN_00416cd0(&local_428,4,local_428,&DAT_01a838ac);
                          }
                          else {
                            uVar5 = FUN_004aeac0(local_468,local_43c);
                            FUN_01cc0ae0(uVar5,&local_5a8);
                            local_5f8 = local_5a8;
                            local_5f0 = L"-abs";
                            FUN_00416cd0(&local_428,4,local_428,&DAT_01a838ac);
                          }
                          uVar5 = FUN_004aeac0(local_468,local_43c);
                          FUN_01cc0ae0(uVar5,&local_5b0);
                          local_5f8 = local_5b0;
                          local_5f0 = L"-phase (deg)";
                          FUN_00416cd0(&local_428,4,local_428);
                        }
                        local_43c = local_43c + 1;
                        iVar4 = iVar4 + -1;
                      } while (iVar4 != 0);
                    }
                    FUN_00416ba0(&local_5b8,local_420,local_428);
                    uVar5 = FUN_0040f200(local_3e8,local_5b8);
                    FUN_0040f590(uVar5);
                    FUN_00409900();
                    while (cVar3 = (**(code **)(*local_480 + 0x40))(local_480,&local_3f0,local_450),
                          cVar3 != '\0') {
                      FUN_00414480(&local_68);
                      FUN_00448450(&local_68,local_3f0,PTR_DAT_02004830);
                      FUN_00414b50(&local_418,local_68);
                      FUN_00414480(&local_68);
                      local_458 = local_450;
                      local_5d4 = *(int *)(local_478 + 0x150) + -1;
                      local_43c = 0;
                      iVar4 = *(int *)(local_478 + 0x150);
                      if (-1 < local_5d4) {
                        do {
                          local_5d4 = iVar4;
                          local_460 = local_458;
                          if (*(char *)(local_478 + 0x2b) == '\0') {
                            FUN_00414480(&local_70);
                            local_4f0 = *local_460;
                            FUN_00448450(&local_70,local_4f0,PTR_DAT_02004830);
                            local_5f8 = local_70;
                            FUN_00416cd0(&local_418,3,local_418);
                            FUN_00414480(&local_70);
                            FUN_00b909d0(&local_458,8);
                          }
                          else {
                            bVar1 = *(byte *)(*(longlong *)(local_488 + 8) + 0x434);
                            if (bVar1 < 8) {
                              bVar7 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(local_488 + 8)
                                                           >> 8),1) << (bVar1 & 0x1f) & 0x10U) != 0;
                            }
                            else {
                              bVar7 = false;
                            }
                            if (bVar7) {
                              FUN_00414480(&local_78);
                              local_4f8 = (double)FUN_00f121a0(*local_460);
                              local_4f8 = local_4f8 * 20.0;
                              FUN_00448450(&local_78,local_4f8,PTR_DAT_02004830);
                              local_5f8 = local_78;
                              FUN_00416cd0(&local_418,3,local_418,&DAT_01a838ac);
                              FUN_00414480(&local_78);
                            }
                            else {
                              FUN_00414480(&local_80);
                              local_500 = *local_460;
                              FUN_00448450(&local_80,local_500,PTR_DAT_02004830);
                              local_5f8 = local_80;
                              FUN_00416cd0(&local_418,3,local_418,&DAT_01a838ac);
                              FUN_00414480(&local_80);
                            }
                            FUN_00b909d0(&local_458,8);
                            local_460 = local_458;
                            FUN_00414480(&local_88);
                            local_508 = *local_460 * 57.29577951308232;
                            FUN_00448450(&local_88,local_508,PTR_DAT_02004830);
                            local_5f8 = local_88;
                            FUN_00416cd0(&local_418,3,local_418);
                            FUN_00414480(&local_88);
                            FUN_00b909d0(&local_458,8);
                          }
                          local_5d4 = local_5d4 + -1;
                          iVar4 = local_5d4;
                        } while (local_5d4 != 0);
                      }
                      uVar5 = FUN_0040f200(local_3e8,local_418);
                      FUN_0040f590(uVar5);
                      FUN_00409900();
                    }
                    uVar5 = FUN_0040f200(local_3e8,0);
                    FUN_0040f590(uVar5);
                    FUN_00409900();
                    FUN_004095f0(local_450);
                  }
                  local_1c = local_1c + 1;
                  local_5d8 = local_5d8 + -1;
                  iVar4 = local_5d8;
                } while (local_5d8 != 0);
              }
              FUN_00410f20(local_468);
              FUN_00410f20(local_470);
            }
            FUN_0040d150(local_3e8);
            FUN_00409900();
          }
          FUN_00410f20(local_4b8);
          if (local_433 != '\0') break;
        }
        local_438 = local_438 + 1;
        local_5dc = local_5dc + -1;
        iVar4 = local_5dc;
      } while (local_5dc != 0);
    }
  }
  FUN_00410f20(local_f0);
LAB_01a83318:
  FUN_00414560(&local_5c8,7);
  FUN_00414560(&local_590,3);
  FUN_00414560(&local_578,5);
  FUN_00414480(&local_550);
  FUN_00414480(&local_548);
  FUN_00414560(&local_430,4);
  FUN_00414560(&local_e8,0x19);
  return;
}

