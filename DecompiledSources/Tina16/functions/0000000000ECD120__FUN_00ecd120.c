/* Ghidra address: 00ecd120 */
/* Ghidra symbol: FUN_00ecd120 */


undefined8
FUN_00ecd120(undefined8 param_1,byte param_2,longlong param_3,longlong *param_4,longlong param_5,
            longlong *param_6,longlong param_7,undefined8 *param_8,undefined4 *param_9,
            undefined4 *param_10,int *param_11,undefined1 param_12)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res18 [2];
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
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_d0 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
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
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043ea00(local_50,*param_8);
  if (local_50[0] == 0) {
    FUN_00414b50(&local_40,*(undefined8 *)PTR_PTR_02002f18);
  }
  if (DAT_01ef72c4 == '\0') {
    FUN_00ecbb60();
  }
  iVar2 = FUN_004170c0(&DAT_00ecdd34,*param_8,1);
  FUN_00416dc0(DAT_0202ead8 + 0x11d,*param_8,1,iVar2 + -1);
  iVar2 = FUN_004170c0(&DAT_00ecdd34,*param_8,1);
  iVar3 = FUN_004170c0(&DAT_00ecdd44,*param_8,1);
  iVar4 = FUN_004170c0(&DAT_00ecdd34,*param_8,1);
  FUN_00416dc0(DAT_0202ead8 + 0x11e,*param_8,iVar2 + 1,(iVar3 - iVar4) + -1);
  FUN_0043ea00(&local_58,DAT_0202ead8[0x11d]);
  FUN_00414ad0(DAT_0202ead8 + 0x11d,local_58);
  FUN_0043ea00(&local_60,DAT_0202ead8[0x11e]);
  FUN_00414ad0(DAT_0202ead8 + 0x11e,local_60);
  if (DAT_0202ead8[0x11e] != 0) {
    iVar2 = FUN_004170c0(&DAT_00ecdd54,DAT_0202ead8[0x11e],1);
    if (iVar2 < 1) {
      FUN_00414b50(&local_40,L"TINA");
    }
    else {
      iVar2 = FUN_004170c0(&DAT_00ecdd54,DAT_0202ead8[0x11e],1);
      FUN_00416dc0(&local_68,DAT_0202ead8[0x11e],1,iVar2 + -1);
      FUN_00ea9ef0(&local_40,local_68);
      iVar2 = FUN_004170c0(&DAT_00ecdd54,DAT_0202ead8[0x11e],1);
      uVar5 = 0;
      if (DAT_0202ead8[0x11e] != 0) {
        uVar5 = *(undefined4 *)(DAT_0202ead8[0x11e] + -4);
      }
      FUN_00416dc0(DAT_0202ead8 + 0x11e,DAT_0202ead8[0x11e],iVar2 + 1,uVar5);
    }
  }
  FUN_00414480(local_30);
  iVar2 = (**(code **)(*param_4 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_4 + 0x18))(param_4,&local_70,iVar3);
      FUN_00ea9ca0(&local_38,local_70);
      FUN_00416cd0(local_30,3,local_30[0],local_38,&DAT_00ecdd7c);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(byte *)((longlong)DAT_0202ead8 + 0x914) = param_2;
  *(undefined4 *)((longlong)DAT_0202ead8 + 0x904) = *param_9;
  FUN_00414ad0(DAT_0202ead8 + 0x119,local_30[0]);
  uVar5 = (**(code **)(*param_4 + 0x28))(param_4);
  *(undefined4 *)((longlong)DAT_0202ead8 + 0x90c) = uVar5;
  lVar7 = FUN_00eae150(local_40,1);
  DAT_0202ead8[0x111] = lVar7;
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414ad0(DAT_0202ead8 + 0x11a,L"Diode");
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_90,0x84b);
      FUN_0064de00(DAT_0202ead8,local_90);
    }
    else if (param_2 == 0) {
      FUN_00414ad0(DAT_0202ead8 + 0x11a,L"Spice");
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_78,0x848);
      FUN_0064de00(DAT_0202ead8,local_78);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(DAT_0202ead8 + 0x11a,&DAT_00ecdda4);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_80,0x849);
      FUN_0064de00(DAT_0202ead8,local_80);
    }
    else if (param_2 == 2) {
      FUN_00414ad0(DAT_0202ead8 + 0x11a,&DAT_00ecddb8);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_88,0x84a);
      FUN_0064de00(DAT_0202ead8,local_88);
    }
  }
  else if (param_2 == 4) {
    FUN_00414ad0(DAT_0202ead8 + 0x11a,L"Mixed");
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_98,0x84c);
    FUN_0064de00(DAT_0202ead8,local_98);
  }
  else if (param_2 == 5) {
    FUN_00414ad0(DAT_0202ead8 + 0x11a,L"OtherSC");
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_a0,0x84c);
    FUN_0064de00(DAT_0202ead8,local_a0);
  }
  DAT_0202ead8[0x114] = param_7;
  FUN_00414480(DAT_0202ead8 + 0x117);
  FUN_00414480(DAT_0202ead8 + 0x115);
  *(undefined1 *)((longlong)DAT_0202ead8 + 0x901) = param_12;
  iVar2 = FUN_004170c0(&DAT_00ecde18,local_res18[0],1);
  if (0 < iVar2) {
    uVar6 = FUN_004170c0(&DAT_00ecde18,local_res18[0],1);
    uVar5 = 0;
    if (local_res18[0] != 0) {
      uVar5 = *(undefined4 *)(local_res18[0] + -4);
    }
    FUN_00416e20(local_res18,uVar6,uVar5);
  }
  FUN_00414ad0(DAT_0202ead8 + 0x11b,local_res18[0]);
  FUN_00414ad0(DAT_0202ead8 + 0x11c,local_40);
  (**(code **)(*(longlong *)DAT_0202ead8[0xf4] + 0x268))((longlong *)DAT_0202ead8[0xf4],0);
  iVar2 = (**(code **)(*param_6 + 0x28))(param_6);
  *(bool *)(DAT_0202ead8 + 0x120) = 0 < iVar2;
  (**(code **)(*(longlong *)DAT_0202ead8[0x112] + 0x90))((longlong *)DAT_0202ead8[0x112]);
  (**(code **)(*(longlong *)DAT_0202ead8[0x112] + 0x10))((longlong *)DAT_0202ead8[0x112],param_6);
  FUN_00ecc070(DAT_0202ead8,param_2,local_res18[0]);
  if (DAT_0202ead8[0x11e] != 0) {
    iVar2 = (**(code **)(**(longlong **)(DAT_0202ead8[0xe9] + 0x4a0) + 0xb0))
                      (*(longlong **)(DAT_0202ead8[0xe9] + 0x4a0),DAT_0202ead8[0x11e]);
    if (iVar2 == -1) {
      (**(code **)(*(longlong *)DAT_0202ead8[0xf4] + 0x268))((longlong *)DAT_0202ead8[0xf4],1);
      FUN_00ecc070(DAT_0202ead8,param_2,local_res18[0]);
    }
  }
  if (param_7 == 0) {
    *(undefined4 *)(DAT_0202ead8 + 0x122) = 0xffffffff;
  }
  else {
    FUN_007d55b0(DAT_0202ead8[0xfc],*(undefined4 *)(param_7 + 0x94));
    FUN_007d5610(DAT_0202ead8[0xfc],*(undefined4 *)(param_7 + 0x90));
    FUN_007d7690(DAT_0202ead8[0xfc],param_7);
    *(undefined4 *)(DAT_0202ead8 + 0x122) = *param_10;
  }
  FUN_00ed3870(DAT_0202ead8);
  if (param_5 != 0) {
    (**(code **)(*(longlong *)DAT_0202ead8[0x113] + 0x10))((longlong *)DAT_0202ead8[0x113],param_5);
  }
  iVar2 = (**(code **)(*DAT_0202ead8 + 0x2d0))(DAT_0202ead8);
  *param_11 = iVar2;
  if (*param_11 == 1) {
    iVar2 = FUN_00416db0(DAT_0202ead8[0x11c],L"TINA");
    if (iVar2 == 0) {
      FUN_00414480(&local_38);
    }
    else {
      FUN_00ea9ca0(&local_a8,DAT_0202ead8[0x11c]);
      FUN_00416ba0(&local_38,local_a8,&DAT_00ecdd54);
    }
    plVar1 = (longlong *)DAT_0202ead8[0xea];
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_b8,uVar5);
    FUN_00ea9ca0(&local_b0,local_b8);
    plVar1 = (longlong *)DAT_0202ead8[0xe9];
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_c8,uVar5);
    FUN_00ea9ca0(&local_c0,local_c8);
    FUN_00416cd0(param_8,5,local_b0,&LAB_00ecde28,local_38,local_c0,&DAT_00ecdd44);
    FUN_00414ad0(param_1,*param_8);
    FUN_00414ad0(PTR_PTR_02002f18,DAT_0202ead8[0x11c]);
    FUN_0064dd90(DAT_0202ead8[0xf9],&local_d0);
    uVar5 = FUN_0043fc50(local_d0,1);
    *(undefined4 *)((longlong)DAT_0202ead8 + 0x904) = uVar5;
    *param_9 = uVar5;
    *param_10 = (int)DAT_0202ead8[0x122];
    (**(code **)(*param_6 + 0x90))(param_6);
    (**(code **)(*param_6 + 0x10))(param_6,DAT_0202ead8[0x112]);
  }
  else {
    FUN_00414ad0(param_1,*param_8);
  }
  FUN_00414480(&local_d0);
  FUN_00414560(&local_c8,0x10);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_1;
}

