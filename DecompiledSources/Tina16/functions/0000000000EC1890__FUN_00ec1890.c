/* Ghidra address: 00ec1890 */
/* Ghidra symbol: FUN_00ec1890 */


undefined8
FUN_00ec1890(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
            undefined8 *param_5,undefined4 *param_6,int *param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong local_res10 [3];
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
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_a8 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043ea00(local_50,*param_5);
  if (local_50[0] == 0) {
    FUN_00414b50(&local_40,*(undefined8 *)PTR_PTR_02002f18);
  }
  if (DAT_01ef6a40 == '\0') {
    FUN_00ec0240();
  }
  iVar2 = FUN_004170c0(&DAT_00ec2194,*param_5,1);
  FUN_00416dc0(DAT_0202eac0 + 0x114,*param_5,1,iVar2 + -1);
  iVar2 = FUN_004170c0(&DAT_00ec2194,*param_5,1);
  iVar3 = FUN_004170c0(&DAT_00ec21a4,*param_5,1);
  iVar4 = FUN_004170c0(&DAT_00ec2194,*param_5,1);
  FUN_00416dc0(DAT_0202eac0 + 0x115,*param_5,iVar2 + 1,(iVar3 - iVar4) + -1);
  FUN_0043ea00(&local_58,DAT_0202eac0[0x114]);
  FUN_00414ad0(DAT_0202eac0 + 0x114,local_58);
  FUN_0043ea00(&local_60,DAT_0202eac0[0x115]);
  FUN_00414ad0(DAT_0202eac0 + 0x115,local_60);
  if (DAT_0202eac0[0x115] != 0) {
    iVar2 = FUN_004170c0(&DAT_00ec21b4,DAT_0202eac0[0x115],1);
    if (iVar2 < 1) {
      FUN_00414b50(&local_40,L"TINA");
    }
    else {
      iVar2 = FUN_004170c0(&DAT_00ec21b4,DAT_0202eac0[0x115],1);
      FUN_00416dc0(&local_68,DAT_0202eac0[0x115],1,iVar2 + -1);
      FUN_00ea9ef0(&local_40,local_68);
      iVar2 = FUN_004170c0(&DAT_00ec21b4,DAT_0202eac0[0x115],1);
      uVar5 = 0;
      if (DAT_0202eac0[0x115] != 0) {
        uVar5 = *(undefined4 *)(DAT_0202eac0[0x115] + -4);
      }
      FUN_00416dc0(DAT_0202eac0 + 0x115,DAT_0202eac0[0x115],iVar2 + 1,uVar5);
    }
  }
  FUN_00414480(local_30);
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_38,iVar3);
      FUN_00eaa0b0(&local_70,local_38);
      FUN_00414b50(&local_38,local_70);
      FUN_00416cd0(local_30,3,local_30[0],local_38,&DAT_00ec21dc);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_30[0] == 0) {
    FUN_00414480(DAT_0202eac0 + 0x111);
  }
  else {
    FUN_00416ba0(DAT_0202eac0 + 0x111,local_30[0],L"VCC GND VSS VDD ");
  }
  *(undefined4 *)(DAT_0202eac0 + 0x117) = *param_6;
  FUN_00414ad0(DAT_0202eac0 + 0x110,local_30[0]);
  uVar5 = (**(code **)(*param_3 + 0x28))(param_3);
  *(undefined4 *)((longlong)DAT_0202eac0 + 0x8bc) = uVar5;
  lVar7 = FUN_00eae150(local_40,1);
  DAT_0202eac0[0x10a] = lVar7;
  FUN_00414480(DAT_0202eac0 + 0x10e);
  FUN_00414480(DAT_0202eac0 + 0x10c);
  iVar2 = FUN_004170c0(&DAT_00ec221c,local_res10[0],1);
  if (0 < iVar2) {
    uVar6 = FUN_004170c0(&DAT_00ec221c,local_res10[0],1);
    uVar5 = 0;
    if (local_res10[0] != 0) {
      uVar5 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416e20(local_res10,uVar6,uVar5);
  }
  FUN_00414ad0(DAT_0202eac0 + 0x112,local_res10[0]);
  FUN_00414ad0(DAT_0202eac0 + 0x113,local_40);
  (**(code **)(*(longlong *)DAT_0202eac0[0xdd] + 0x268))((longlong *)DAT_0202eac0[0xdd],0);
  iVar2 = (**(code **)(*param_4 + 0x28))(param_4);
  *(bool *)(DAT_0202eac0 + 0x118) = 0 < iVar2;
  (**(code **)(*(longlong *)DAT_0202eac0[0x10b] + 0x90))((longlong *)DAT_0202eac0[0x10b]);
  (**(code **)(*(longlong *)DAT_0202eac0[0x10b] + 0x10))((longlong *)DAT_0202eac0[0x10b],param_4);
  FUN_00ec06e0(DAT_0202eac0,local_res10[0]);
  if (DAT_0202eac0[0x115] != 0) {
    FUN_00ea9ef0(&local_78,DAT_0202eac0[0x115]);
    iVar2 = (**(code **)(**(longlong **)(DAT_0202eac0[0xd8] + 0x4a0) + 0xb0))
                      (*(longlong **)(DAT_0202eac0[0xd8] + 0x4a0),local_78);
    if (iVar2 == -1) {
      (**(code **)(*(longlong *)DAT_0202eac0[0xdd] + 0x268))((longlong *)DAT_0202eac0[0xdd],1);
      FUN_00ec06e0(DAT_0202eac0,local_res10[0]);
    }
  }
  iVar2 = (**(code **)(*DAT_0202eac0 + 0x2d0))(DAT_0202eac0);
  *param_7 = iVar2;
  if (*param_7 == 1) {
    iVar2 = FUN_00416db0(DAT_0202eac0[0x113],L"TINA");
    if (iVar2 == 0) {
      FUN_00414480(&local_38);
    }
    else {
      FUN_00ea9ca0(&local_80,DAT_0202eac0[0x113]);
      FUN_00416ba0(&local_38,local_80,&DAT_00ec21b4);
    }
    plVar1 = (longlong *)DAT_0202eac0[0xd9];
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_90,uVar5);
    FUN_00ea9ca0(&local_88,local_90);
    plVar1 = (longlong *)DAT_0202eac0[0xd8];
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_a0,uVar5);
    FUN_00ea9ca0(&local_98,local_a0);
    FUN_00416cd0(param_5,5,local_88,&LAB_00ec222c,local_38,local_98,&DAT_00ec21a4);
    FUN_00414ad0(param_1,*param_5);
    FUN_00414ad0(PTR_PTR_02002f18,DAT_0202eac0[0x113]);
    FUN_0064dd90(DAT_0202eac0[0xff],&local_a8);
    uVar5 = FUN_0043fc50(local_a8,1);
    *(undefined4 *)(DAT_0202eac0 + 0x117) = uVar5;
    *param_6 = uVar5;
    (**(code **)(*param_4 + 0x90))(param_4);
    (**(code **)(*param_4 + 0x10))(param_4,DAT_0202eac0[0x10b]);
  }
  else {
    FUN_00414ad0(param_1,*param_5);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,0xb);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return param_1;
}

