/* Ghidra address: 0105ee90 */
/* Ghidra symbol: FUN_0105ee90 */


void FUN_0105ee90(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 local_418 [1024];
  
  local_470 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  local_430 = 0;
  local_438 = 0;
  local_420 = 0;
  local_428 = 0;
  FUN_00416ba0(param_1 + 0x40,*(undefined8 *)(param_1 + 0x20),L"\\libraries\\");
  FUN_00414b50(&local_420,L"arduino");
  if (param_2 == 3) {
    FUN_00414b50(&local_420,L"sandeepmistry");
  }
  if (param_2 == 0) {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x88),&DAT_0105f278);
    if (iVar1 != 0) {
      FUN_00416ba0(param_1 + 0x48,*(undefined8 *)(param_1 + 0x18),
                   L"\\hardware\\arduino\\avr\\libraries\\");
      goto LAB_0105f075;
    }
  }
  FUN_01059df0(&local_438,param_2);
  FUN_00416cd0(&local_430,4,*(undefined8 *)(param_1 + 0x18),L"\\packages\\%s\\hardware\\",local_438,
               &DAT_0105f318);
  local_448 = local_420;
  local_440 = 0x11;
  FUN_00442f70(&local_428,local_430,&local_448,0);
  plVar2 = (longlong *)FUN_0160dab0(local_428,0,0);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (iVar1 < 1) {
    FUN_00416ba0(param_1 + 0x48,local_428,L"libraries\\");
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_450,0);
    FUN_00416cd0(param_1 + 0x48,3,local_428,local_450,L"\\libraries\\");
  }
  FUN_00410f20(plVar2);
LAB_0105f075:
  iVar1 = thunk_FUN_041bde6d(0,5,0,0,local_418);
  if (iVar1 == 0) {
    FUN_004167d0(&local_458,local_418);
    FUN_00416ba0(param_1 + 0x50,local_458,L"\\Arduino\\libraries\\");
  }
  uVar3 = FUN_0160dab0(*(undefined8 *)(param_1 + 0x40),0,0);
  FUN_004b37d0(uVar3,&local_460);
  FUN_00414ad0(param_1 + 0x60,local_460);
  FUN_00410f20(uVar3);
  uVar3 = FUN_0160dab0(*(undefined8 *)(param_1 + 0x48),0,0);
  FUN_004b37d0(uVar3,&local_468);
  FUN_00414ad0(param_1 + 0x68,local_468);
  FUN_00410f20(uVar3);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x50),L"<none>");
  if (iVar1 == 0) {
    uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  }
  else {
    uVar3 = FUN_0160dab0(*(undefined8 *)(param_1 + 0x50),0,0);
  }
  FUN_004b37d0(uVar3,&local_470);
  FUN_00414ad0(param_1 + 0x70,local_470);
  FUN_00410f20(uVar3);
  FUN_00414560(&local_470,5);
  FUN_00414560(&local_438,4);
  return;
}

