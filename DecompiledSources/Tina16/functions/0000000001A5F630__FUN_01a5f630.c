/* Ghidra address: 01a5f630 */
/* Ghidra symbol: FUN_01a5f630 */


void FUN_01a5f630(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_128 [32];
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
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined2 local_1a;
  
  local_30 = auStack_128;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
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
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00416ba0(&local_38,local_res20,&DAT_01a5ff6c);
  (**(code **)(*param_1 + 0x48))(param_1,&local_40);
  (**(code **)(*param_2 + 0x18))(param_2,local_res18,local_38,local_40);
  local_1a = *(undefined2 *)(*(longlong *)(param_1[0x12] + 0xa0) + 0x2c);
  *(undefined2 *)(*(longlong *)(param_1[0x12] + 0xa0) + 0x2c) = 0xa4;
  FUN_00416ba0(&local_48,local_res20,L"Content");
  FUN_004b3880(*(undefined8 *)(param_1[0x12] + 0xa0),&local_50);
  (**(code **)(*param_2 + 0x18))(param_2,local_res18,local_48,local_50);
  lVar1 = param_1[0x12];
  *(undefined2 *)(*(longlong *)(lVar1 + 0xa0) + 0x2c) = local_1a;
  FUN_00416ba0(&local_58,local_res20,L"FontName");
  FUN_005fccd0(*(undefined8 *)(lVar1 + 0x80),&local_60);
  (**(code **)(*param_2 + 0x18))(param_2,local_res18,local_58,local_60);
  FUN_00416ba0(&local_68,local_res20,L"FontColor");
  (**(code **)(*param_2 + 0x28))
            (param_2,local_res18,local_68,
             *(undefined4 *)(*(longlong *)(param_1[0x12] + 0x80) + 0x28));
  FUN_00416ba0(&local_70,local_res20,L"FontSize");
  uVar4 = FUN_005fce00(*(undefined8 *)(param_1[0x12] + 0x80));
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_70,uVar4);
  FUN_00416ba0(&local_78,local_res20,L"FontStyle");
  uVar2 = FUN_005fce60(*(undefined8 *)(param_1[0x12] + 0x80));
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_78,uVar2);
  FUN_00416ba0(&local_80,local_res20,L"ContentType");
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_80,(char)param_1[0x13]);
  FUN_00416ba0(&local_88,local_res20,L"CoordX");
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_88,(int)param_1[9]);
  FUN_00416ba0(&local_90,local_res20,L"CoordY");
  (**(code **)(*param_2 + 0x28))
            (param_2,local_res18,local_90,*(undefined4 *)((longlong)param_1 + 0x4c));
  FUN_00416ba0(&local_98,local_res20,L"RelX");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_98,param_1[10]);
  FUN_00416ba0(&local_a0,local_res20,L"RelY");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_a0,param_1[0xb]);
  FUN_00416ba0(&local_a8,local_res20,L"RelXSize");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_a8,param_1[0xc]);
  FUN_00416ba0(&local_b0,local_res20,L"RelYSize");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_b0,param_1[0xd]);
  FUN_00416ba0(&local_b8,local_res20,L"AbsSize");
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_b8,(longlong)(short)param_1[0xe]);
  FUN_00416ba0(&local_c0,local_res20,L"Alone");
  (**(code **)(*param_2 + 0x38))(param_2,local_res18,local_c0,(char)param_1[0x10]);
  FUN_00416ba0(&local_c8,local_res20,L"BgrndMode");
  (**(code **)(*param_2 + 0x28))
            (param_2,local_res18,local_c8,*(undefined1 *)((longlong)param_1 + 0x99));
  FUN_00416ba0(&local_d0,local_res20,L"BgrndColor");
  (**(code **)(*param_2 + 0x28))
            (param_2,local_res18,local_d0,*(undefined4 *)((longlong)param_1 + 0x9c));
  FUN_00416ba0(&local_d8,local_res20,L"Border");
  (**(code **)(*param_2 + 0x28))(param_2,local_res18,local_d8,(char)param_1[0x14]);
  if (param_1[0x15] != 0) {
    cVar3 = FUN_004113d0(param_1[0x15],&PTR_FUN_01aae560);
    if (cVar3 == '\0') {
      FUN_00416ba0(&local_f0,local_res20,L"PointCurve");
      (**(code **)(*(longlong *)param_1[0x15] + 0x48))((longlong *)param_1[0x15],&local_f8);
      (**(code **)(*param_2 + 0x18))(param_2,local_res18,local_f0,local_f8);
    }
    else {
      FUN_00416ba0(&local_e0,local_res20,L"PointCurve");
      (**(code **)(*(longlong *)param_1[0x15] + 0x48))((longlong *)param_1[0x15],&local_e8);
      (**(code **)(*param_2 + 0x18))(param_2,local_res18,local_e0,local_e8);
    }
  }
  FUN_00416ba0(&local_100,local_res20,L"PointToX");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_100,param_1[0x16]);
  FUN_00416ba0(&local_108,local_res20,L"PointToY");
  (**(code **)(*param_2 + 0x80))(param_2,local_res18,local_108,param_1[0x17]);
  FUN_00414560(&local_108,0x15);
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,5);
  FUN_00414560(&local_res18,2);
  return;
}

