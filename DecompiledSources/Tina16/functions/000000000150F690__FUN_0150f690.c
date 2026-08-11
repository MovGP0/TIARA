/* Ghidra address: 0150f690 */
/* Ghidra symbol: FUN_0150f690 */


void FUN_0150f690(longlong *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_39 [25];
  
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  param_1[0x1dc] = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmWordGen");
  *(undefined1 *)(param_1 + 0xff) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 6;
  (**(code **)(*param_1 + 0x450))(param_1);
  FUN_01506e40(param_1,param_1);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar4 = FUN_01502d90(&PTR_FUN_015017a0,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1dc] = lVar4;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_0150f9b0;
    lVar4 = FUN_01502d90(&PTR_FUN_01502330,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1dc] = lVar4;
    uVar5 = FUN_004113f0(lVar4,&PTR_FUN_01502330);
    FUN_01503c50(uVar5,local_39);
  }
  (**(code **)(*(longlong *)param_1[0x1dc] + 0x48))((longlong *)param_1[0x1dc],local_39);
  FUN_0064dd90(param_1,&local_58);
  FUN_004169a0(&local_60,param_1[0x1dc] + 0x23);
  FUN_00416cd0(local_50,3,local_58,&DAT_0150fa38,local_60);
  FUN_0064de00(param_1,local_50[0]);
  *(undefined1 *)((longlong)param_1 + 0x9c1) = 1;
  (**(code **)(**(longlong **)(param_1[0x1a0] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x1a0] + 0x4f0));
  uVar5 = (**(code **)(*(longlong *)param_1[0x1dc] + 0x70))((longlong *)param_1[0x1dc]);
  (**(code **)(**(longlong **)(param_1[0x1a0] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x1a0] + 0x4f0),uVar5);
  uVar2 = (**(code **)(*(longlong *)param_1[0x1dc] + 0x78))((longlong *)param_1[0x1dc]);
  (**(code **)(*(longlong *)param_1[0x1a0] + 0x268))((longlong *)param_1[0x1a0],uVar2);
  param_1[0x1dd] = 0x2e656d616e6f6e0a;
  *(undefined2 *)(param_1 + 0x1de) = 0x7364;
  *(undefined1 *)((longlong)param_1 + 0xef2) = 0x67;
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec2) = 1;
  lVar4 = FUN_0150edc0(&DAT_0150a648,1);
  param_1[0x1db] = lVar4;
  param_1[0x18a] = 0;
  dVar6 = (double)(**(code **)(*(longlong *)param_1[0x1dc] + 0xc0))((longlong *)param_1[0x1dc]);
  iVar3 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xe8))((longlong *)param_1[0x1dc]);
  param_1[0x18b] = (longlong)(dVar6 * (double)iVar3);
  lVar4 = param_1[0x1db];
  *(longlong *)(lVar4 + 0x10) = param_1[0x18a];
  *(undefined2 *)(lVar4 + 8) = 0;
  *(longlong *)(lVar4 + 0x18) = param_1[0x18b];
  uVar1 = (**(code **)(*(longlong *)param_1[0x1dc] + 0xe8))((longlong *)param_1[0x1dc]);
  *(undefined2 *)(lVar4 + 10) = uVar1;
  param_1[0x183] = 0;
  *(undefined2 *)(param_1 + 0x184) = 0x5b02;
  *(undefined1 *)((longlong)param_1 + 0xc22) = 0x5d;
  *(undefined2 *)((longlong)param_1 + 0xc42) = 0x30;
  *(undefined1 *)((longlong)param_1 + 0xc44) = 0;
  FUN_0064cf60(param_1,0xfa1);
LAB_0150f9b0:
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,2);
  return;
}

