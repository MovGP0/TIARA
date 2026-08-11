/* Ghidra address: 01402f10 */
/* Ghidra symbol: FUN_01402f10 */


void FUN_01402f10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined1 local_90;
  longlong local_80;
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
  undefined8 *local_20;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_80 = param_1;
  local_20 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  iVar3 = FUN_00f04d50(*(undefined8 *)(local_80 + 0x7e0));
  iVar8 = 1;
  if (0 < iVar3) {
    do {
      FUN_0043f750(&local_38,iVar8);
      FUN_00416ba0(&local_30,&DAT_014032a8,local_38);
      FUN_01402e80(auStack_b8,local_30);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00f04d50(*(undefined8 *)(local_80 + 0x7e8));
  iVar8 = 1;
  if (0 < iVar3) {
    do {
      FUN_0043f750(&local_48,iVar8);
      FUN_00416ba0(&local_40,&DAT_014032b8,local_48);
      FUN_01402e80(auStack_b8,local_40);
      FUN_0043f750(&local_58,iVar8);
      local_98 = &DAT_014032c8;
      FUN_00416cd0(&local_50,3,&DAT_014032b8,local_58);
      FUN_01402e80(auStack_b8,local_50);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  cVar2 = (**(code **)(**(longlong **)(local_80 + 0x808) + 0x260))(*(longlong **)(local_80 + 0x808))
  ;
  if (cVar2 == '\0') {
    FUN_00414b50(&local_28,&DAT_014032ec);
  }
  else {
    FUN_00414b50(&local_28,&DAT_014032d8);
  }
  cVar2 = (**(code **)(**(longlong **)(local_80 + 0x818) + 0x260))(*(longlong **)(local_80 + 0x818))
  ;
  if (cVar2 == '\0') {
    FUN_00416ba0(&local_60,&DAT_01403300,local_28);
    FUN_01402e80(auStack_b8,local_60);
  }
  else {
    FUN_00416ba0(&local_68,&DAT_01403300,local_28);
    FUN_01402e80(auStack_b8,local_68);
    FUN_00416ba0(&local_70,&LAB_01403310,local_28);
    FUN_01402e80(auStack_b8,local_70);
  }
  local_98 = (undefined *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_90 = 0;
  plVar5 = (longlong *)FUN_00c86a90(&PTR_FUN_00c85fc8,1,*(undefined8 *)PTR_DAT_02004030,local_20);
  iVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
  if ((iVar3 == 1) &&
     (iVar3 = (**(code **)(*(longlong *)plVar5[0xd6] + 0x260))((longlong *)plVar5[0xd6]),
     iVar3 != -1)) {
    plVar1 = (longlong *)plVar5[0xd6];
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_78,uVar4);
    FUN_0064de00(*(undefined8 *)(local_80 + 0x838),local_78);
    plVar5 = (longlong *)plVar5[0xd6];
    uVar4 = (**(code **)(*plVar5 + 0x260))(plVar5);
    lVar6 = (**(code **)(*(longlong *)plVar5[0x94] + 0x30))((longlong *)plVar5[0x94],uVar4);
    FUN_00414ad0(local_80 + 0x8c8,*(undefined8 *)(lVar6 + 0x20));
  }
  uVar7 = (**(code **)*local_20)(local_20);
  FUN_00418590(uVar7,&DAT_01984da0);
  FUN_00414560(&local_78,0xb);
  return;
}

