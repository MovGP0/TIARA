/* Ghidra address: 015084f0 */
/* Ghidra symbol: FUN_015084f0 */


void FUN_015084f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [268];
  undefined1 local_41c [256];
  undefined1 local_31c [256];
  undefined1 local_21c [256];
  byte local_11c [256];
  undefined1 local_1c [12];
  
  local_558 = 0;
  local_580 = 0;
  local_560 = 0;
  local_568 = 0;
  local_570 = 0;
  local_578 = 0;
  local_530 = 0;
  local_550 = 0;
  local_538 = 0;
  local_540 = 0;
  local_548 = 0;
  if (*(int *)(param_1 + 0xc10) == *(int *)(param_1 + 0xc0c)) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0xbf8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x870) + 8));
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,*(int *)(param_1 + 0xc0c));
    lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
    FUN_00416910(local_528,*(undefined8 *)(lVar4 + 8),0xff);
    FUN_010c0760(local_11c,local_528,local_21c,local_1c);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(param_1 + 0xc10));
    lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
    FUN_00416910(local_528,*(undefined8 *)(lVar4 + 8),0xff);
    FUN_010c0760(local_31c,local_528,local_41c,local_1c);
    iVar2 = FUN_00414f50(local_11c,local_31c,(ulonglong)local_11c[0] + 1);
    if (iVar2 == 0) {
      FUN_004154b0(&local_538,local_11c,0);
      FUN_004154b0(&local_540,local_21c,0);
      FUN_004154b0(&local_548,local_41c,0);
      FUN_00415980(&local_530,4,local_538,local_540,&LAB_01508870,local_548);
      FUN_00416880(&local_550,local_530);
      FUN_0064de00(*(undefined8 *)(param_1 + 0xbf8),local_550);
    }
    else {
      FUN_004154b0(&local_560,local_11c,0);
      FUN_004154b0(&local_568,local_21c,0);
      FUN_004154b0(&local_570,local_31c,0);
      FUN_004154b0(&local_578,local_41c,0);
      FUN_00415980(&local_558,5,local_560,local_568,&LAB_01508870,local_570,local_578);
      FUN_00416880(&local_580,local_558);
      FUN_0064de00(*(undefined8 *)(param_1 + 0xbf8),local_580);
    }
  }
  FUN_00414480(&local_580);
  FUN_00414590(&local_578,5);
  FUN_00414480(&local_550);
  FUN_00414590(&local_548,4);
  return;
}

