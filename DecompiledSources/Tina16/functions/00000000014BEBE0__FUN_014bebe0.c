/* Ghidra address: 014bebe0 */
/* Ghidra symbol: FUN_014bebe0 */


void FUN_014bebe0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  longlong local_30 [2];
  undefined8 local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_014beb40(param_1,local_30);
  if (local_30[0] != 0) {
    uVar3 = FUN_014c0b50();
    FUN_014c1770(uVar3,&local_38);
    uVar3 = FUN_014c0b50();
    FUN_014beb40(param_1,&local_50);
    FUN_00416ba0(&local_48,L"EXAMPLESROOT|",local_50);
    FUN_014c1460(uVar3,&local_40,local_48);
    FUN_00416880(&local_58,local_40);
    FUN_0043f750(&local_60,*(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x98));
    FUN_0043f750(&local_68,*(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x9c));
    FUN_00416cd0(&local_20,9,local_38,L"tina4web.dll/schimg?",L"tsc=",local_58,&DAT_014befd0,
                 local_60,&DAT_014befe4,local_68,&DAT_014beff8);
    uVar3 = FUN_014c0b50();
    FUN_014c1210(uVar3,&local_70,local_20);
    FUN_00414b50(&local_20,local_70);
    uVar3 = FUN_014c0b50();
    uVar4 = FUN_014c0b50();
    FUN_014c35c0(uVar4,&local_78);
    FUN_014c37b0(uVar3,local_20,local_78,L"preview.gif",1);
    uVar3 = FUN_014c0b50();
    FUN_014c35c0(uVar3,&local_80);
    FUN_00416ad0(&local_80,L"preview.gif");
    cVar2 = FUN_00440a20(local_80,1);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
      uVar3 = FUN_014c0b50();
      FUN_014c35c0(uVar3,&local_88);
      FUN_00416ad0(&local_88,L"preview.gif");
      (**(code **)(*plVar5 + 0xa8))(plVar5,local_88);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x318);
      (**(code **)(*plVar1 + 0x10))(plVar1,plVar5);
    }
  }
  FUN_00414560(&local_88,9);
  FUN_004144d0(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

