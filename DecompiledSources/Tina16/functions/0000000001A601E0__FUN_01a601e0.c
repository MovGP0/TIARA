/* Ghidra address: 01a601e0 */
/* Ghidra symbol: FUN_01a601e0 */


void FUN_01a601e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
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
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00416ba0(&local_48,local_res20,&DAT_01a60ba8);
  (**(code **)(*param_2 + 0x10))(param_2,local_40,local_res18,local_48,0);
  FUN_01d2afb0(param_1,local_40[0]);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0xa0);
  uVar5 = *(undefined2 *)(lVar1 + 0x2c);
  *(undefined2 *)(lVar1 + 0x2c) = 0xa4;
  FUN_00416ba0(&local_58,local_res20,L"Content");
  FUN_004b3880(lVar1,&local_60);
  (**(code **)(*param_2 + 0x10))(param_2,&local_50,local_res18,local_58,local_60);
  FUN_004b50b0(lVar1,local_50);
  lVar1 = *(longlong *)(param_1 + 0x90);
  *(undefined2 *)(*(longlong *)(lVar1 + 0xa0) + 0x2c) = uVar5;
  uVar7 = *(undefined8 *)(lVar1 + 0x80);
  FUN_00416ba0(&local_70,local_res20,L"FontName");
  FUN_005fccd0(uVar7,&local_78);
  (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_res18,local_70,local_78);
  FUN_005fcd80(uVar7,local_68);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  FUN_00416ba0(&local_80,local_res20,L"FontColor");
  uVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_80,*(undefined4 *)(lVar1 + 0x28))
  ;
  FUN_005fc860(lVar1,uVar6);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80);
  FUN_00416ba0(&local_88,local_res20,L"FontSize");
  uVar6 = FUN_005fce00(uVar7);
  uVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_88,uVar6);
  FUN_005fce30(uVar7,uVar6);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80);
  FUN_00416ba0(&local_90,local_res20,L"FontStyle");
  uVar3 = FUN_005fce60(uVar7);
  uVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_90,uVar3);
  FUN_005fce70(uVar7,uVar6);
  FUN_00416ba0(&local_98,local_res20,L"ContentType");
  cVar4 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_98,0);
  *(char *)(param_1 + 0x98) = cVar4;
  *(bool *)(*(longlong *)(param_1 + 0x90) + 0xb9) = cVar4 == '\x03';
  FUN_00416ba0(&local_a0,local_res20,L"CoordX");
  uVar6 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_a0,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  FUN_00416ba0(&local_a8,local_res20,L"CoordY");
  uVar6 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_a8,*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  FUN_00416ba0(&local_b0,local_res20,L"RelX");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_b0,*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  FUN_00416ba0(&local_b8,local_res20,L"RelY");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_b8,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  FUN_00416ba0(&local_c0,local_res20,L"RelXSize");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_c0,*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  FUN_00416ba0(&local_c8,local_res20,L"RelYSize");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_c8,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  FUN_00416ba0(&local_d0,local_res20,L"AbsSize");
  uVar5 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_d0,(longlong)*(short *)(param_1 + 0x70));
  *(undefined2 *)(param_1 + 0x70) = uVar5;
  FUN_00416ba0(&local_d8,local_res20,L"Alone");
  uVar3 = (**(code **)(*param_2 + 0x30))
                    (param_2,local_res18,local_d8,*(undefined1 *)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x80) = uVar3;
  FUN_00416ba0(&local_e0,local_res20,L"BgrndMode");
  uVar3 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_e0,*(undefined1 *)(param_1 + 0x99));
  *(undefined1 *)(param_1 + 0x99) = uVar3;
  FUN_00416ba0(&local_e8,local_res20,L"BgrndColor");
  uVar6 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_e8,*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  FUN_00416ba0(&local_f0,local_res20,L"Border");
  uVar3 = (**(code **)(*param_2 + 0x20))
                    (param_2,local_res18,local_f0,*(undefined1 *)(param_1 + 0xa0));
  *(undefined1 *)(param_1 + 0xa0) = uVar3;
  FUN_00416ba0(&local_f8,local_res20,L"PointCurve");
  (**(code **)(*param_2 + 0x10))(param_2,local_30,local_res18,local_f8,0);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar7 = FUN_01ad0e00(*(undefined8 *)(param_1 + 0x88),local_30[0]);
    *(undefined8 *)(param_1 + 0xa8) = uVar7;
  }
  FUN_00416ba0(&local_100,local_res20,L"PointToX");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_100,*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  FUN_00416ba0(&local_108,local_res20,L"PointToY");
  uVar7 = (**(code **)(*param_2 + 0x58))
                    (param_2,local_res18,local_108,*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    cVar4 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_01aae560);
    if (cVar4 == '\0') {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 200);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x98),0);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80);
      uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb8) = uVar7;
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 200);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),0);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 200);
      uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb8) = uVar7;
    }
  }
  FUN_00414560(&local_108,0x12);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,7);
  FUN_00414480(local_30);
  FUN_00414560(&local_res18,2);
  return;
}

