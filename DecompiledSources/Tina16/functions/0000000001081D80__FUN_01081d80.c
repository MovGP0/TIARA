/* Ghidra address: 01081d80 */
/* Ghidra symbol: FUN_01081d80 */


void FUN_01081d80(longlong *param_1,longlong param_2,char param_3,undefined8 param_4,
                 longlong param_5,undefined1 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined7 uVar7;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar8;
  undefined8 local_res20;
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
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
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
  local_38 = 0;
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_2c = 0;
  FUN_00414ad0(param_1 + 0x15f,local_res20);
  param_1[0x164] = param_5;
  param_1[0x990] = param_2;
  if (param_1[0x15f] == 0) {
    FUN_015fcb30(local_50,&local_2c);
    FUN_00414ad0(param_1 + 0x15f,local_50[0]);
  }
  *(undefined1 *)((longlong)param_1 + 0x4c34) = param_6;
  *(char *)((longlong)param_1 + 0xb52) = param_3;
  FUN_01081d20(param_1,param_1[0xef],param_3 == '\0');
  FUN_01081d20(param_1,param_1[0x14b],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0xf0],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0x121],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0x14c],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0xf1],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0xfd],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0x12a],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[299],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d20(param_1,param_1[0xe2],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d20(param_1,param_1[300],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d20(param_1,param_1[0x12d],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d20(param_1,param_1[0x12e],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d20(param_1,param_1[0xe3],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d50(param_1,param_1[0x10a],*(char *)((longlong)param_1 + 0xb52) == '\0');
  FUN_01081d50(param_1,param_1[0x10b],*(undefined1 *)((longlong)param_1 + 0xb52));
  FUN_01081d50(param_1,param_1[0x109],*(undefined1 *)((longlong)param_1 + 0xb52));
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if ((*(char *)((longlong)param_1 + 0xb57) == '\0') ||
     (*(char *)((longlong)param_1 + 0xb52) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_01081d50(param_1,param_1[0x145],uVar2);
  if ((*(char *)((longlong)param_1 + 0xb57) == '\0') ||
     (*(char *)((longlong)param_1 + 0xb52) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_01081d50(param_1,param_1[0x146],uVar2);
  (**(code **)(*(longlong *)param_1[0xf3] + 0x278))((longlong *)param_1[0xf3],0);
  FUN_015fcd70(&local_58,param_1[0x15f]);
  FUN_00416cd0(&local_38,3,local_58,&DAT_01082864,L"c_comp");
  FUN_00b96df0(local_38);
  FUN_00416cd0(&local_60,3,local_38,&DAT_01082864,L"noname");
  FUN_00b96df0(local_60);
  uVar2 = 0;
  FUN_00416cd0(&local_68,5,local_38,&DAT_01082864,L"noname",&DAT_01082864,L"Debug");
  FUN_00b96df0(local_68);
  FUN_00416cd0(&local_70,3,local_38,&DAT_01082864,L"noname");
  FUN_010791d0(param_1,local_70);
  FUN_00416ba0(&local_78,param_1[0x168],&DAT_01082864);
  FUN_01b22b20(local_78);
  FUN_00416ba0(&local_80,param_1[0x168],L"\\Debug\\");
  FUN_01b22b20(local_80);
  FUN_01086e90(param_1);
  if (*(char *)((longlong)param_1 + 0x4c34) != '\0') {
    FUN_0082a6c0(param_1[0x12a],0);
    *(undefined1 *)(param_1 + 0x17d) = 1;
    *(undefined1 *)((longlong)param_1 + 0xbd3) = *(undefined1 *)(param_1[0x12a] + 0x328);
    (**(code **)(*param_1 + 0x340))(param_1,0,0);
    FUN_0108b840(param_1,1);
  }
  if (*(char *)((longlong)param_1 + 0xb52) == '\0') {
    iVar3 = FUN_007e2ef0(*(undefined8 *)(param_1[0xde] + 0x80));
    if (3 < iVar3) {
      uVar5 = FUN_007e2f10(*(undefined8 *)(param_1[0xde] + 0x80),3);
      FUN_007e2da0(uVar5,0);
      uVar5 = FUN_007e2f10(*(undefined8 *)(param_1[0xde] + 0x80),3);
      FUN_007e2da0(uVar5,0);
      uVar5 = FUN_007e2f10(*(undefined8 *)(param_1[0xde] + 0x80),3);
      FUN_007e2f80(uVar5,0);
      uVar5 = FUN_007e2f10(*(undefined8 *)(param_1[0xde] + 0x80),3);
      FUN_007e2f80(uVar5,0);
    }
    uVar5 = FUN_007e2f10(*(undefined8 *)(param_1[0xe4] + 0x80),0);
    FUN_007e2da0(uVar5,0);
    uVar5 = FUN_015f3750(param_1[0x171],param_1[0x172],0);
    uVar4 = FUN_00e0fa70(uVar5);
    *(undefined4 *)(param_1 + 0x15b) = uVar4;
    FUN_00e0fa40(uVar5,&local_88);
    FUN_00416880(param_1 + 0x167,local_88);
    *(int *)((longlong)param_1 + 0xadc) = (int)param_1[0x15b];
    cVar1 = FUN_01773f40(param_1[0x15a],0x800);
    if (cVar1 != '\0') {
      *(undefined4 *)((longlong)param_1 + 0xadc) = 0x10000;
      uVar4 = FUN_015fe680(param_1[0x15a],2);
      uVar4 = FUN_015fd5a0(uVar4);
      *(undefined4 *)(param_1 + 0x15b) = uVar4;
      FUN_015fe5d0(&local_90,param_1[0x15a],0);
      FUN_00414ad0(param_1 + 0x167,local_90);
    }
    FUN_015fcd70(&local_98,param_1[0x15f]);
    FUN_010791d0(param_1,local_98);
    FUN_00414ad0(param_1 + 0x989,*(undefined8 *)(param_1[0x171] + 0x790));
    FUN_01086a30(param_1);
    if (*(int *)((longlong)param_1 + 0xadc) != 0x10000) {
      uVar5 = FUN_00442620(param_1 + 0x181,param_1[0x167]);
      _CreateSimulatorObject(param_1[0x164],(int)param_1[0x15b],uVar5);
      if ((int)param_1[0x15b] == 0x800) {
        *(undefined4 *)(param_1 + 0x984) = 0x40;
      }
    }
    FUN_015fbde0(param_1[0x164],(longlong)param_1 + 0x4c14,param_1 + 0x983,param_1 + 0x985,
                 (longlong)param_1 + 0x4c2c,param_1[0x167],
                 CONCAT44(uVar2,*(undefined4 *)((longlong)param_1 + 0xadc)));
    *(int *)((longlong)param_1 + 0x4c1c) =
         ((int)param_1[0x983] - *(int *)((longlong)param_1 + 0x4c14)) + 1;
    *(undefined4 *)((longlong)param_1 + 0x4c24) = *(undefined4 *)((longlong)param_1 + 0x4c14);
    FUN_010b2fc0(param_1[0x159],(int)param_1[0x985]);
    FUN_010b3030(param_1[0x159]);
    cVar1 = FUN_016098e0(param_1[0x167]);
    if (cVar1 == '\0') {
      FUN_006d68c0(param_1[0x139],0);
    }
    else {
      uVar5 = FUN_00442620(param_1 + 0x181,param_1[0x167]);
      uVar5 = _Dbg_XMC_GetAllPeriphNames(param_1[0x164],uVar5);
      FUN_004167d0(&local_40,uVar5);
      plVar6 = (longlong *)FUN_01b21480(local_40);
      iVar3 = (**(code **)(*plVar6 + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_a0,iVar8);
          (**(code **)(**(longlong **)(param_1[0x13d] + 0x4a0) + 0x78))
                    (*(longlong **)(param_1[0x13d] + 0x4a0),local_a0);
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*(longlong *)param_1[0xf3] + 0x278))((longlong *)param_1[0xf3],5);
      FUN_00410f20(plVar6);
    }
  }
  else {
    FUN_006d68c0(param_1[0xf6],0);
    FUN_006d68c0(param_1[0xf7],0);
    FUN_006d68c0(param_1[0xf8],0);
    FUN_006d68c0(param_1[0xf9],0);
    FUN_006d68c0(param_1[0x139],0);
  }
  FUN_00414560(&local_a0,3);
  FUN_004144d0(&local_88);
  FUN_00414560(&local_80,7);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_res20);
  return;
}

