/* Ghidra address: 0151e740 */
/* Ghidra symbol: FUN_0151e740 */


void FUN_0151e740(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmLogAn");
  param_1[0x1d9] = 0;
  *(undefined1 *)(param_1 + 0xff) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 5;
  (**(code **)(*param_1 + 0x450))(param_1);
  FUN_01506e40(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar2 = FUN_01516f10(&PTR_FUN_01514820,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1d9] = lVar2;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_0151eab8;
    lVar2 = FUN_01516b90(&PTR_FUN_01515cb0,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x1d9] = lVar2;
    uVar3 = FUN_004113f0(lVar2,&PTR_FUN_01515cb0);
    FUN_01518dd0(uVar3,&local_31);
  }
  (**(code **)(*(longlong *)param_1[0x1d9] + 0x48))((longlong *)param_1[0x1d9],&local_31);
  FUN_0064dd90(param_1,&local_48);
  FUN_004169a0(&local_50,param_1[0x1d9] + 0x23);
  FUN_00416cd0(&local_40,3,local_48,&DAT_0151eb4c,local_50);
  FUN_0064de00(param_1,local_40);
  *(undefined4 *)(param_1 + 0x184) = 0x5b2e3104;
  *(undefined1 *)((longlong)param_1 + 0xc24) = 0x5d;
  *(undefined2 *)((longlong)param_1 + 0xc42) = *(undefined2 *)(PTR_DAT_020025a0 + 4);
  *(undefined4 *)((longlong)param_1 + 0xc44) = 0x6e455b05;
  *(undefined2 *)(param_1 + 0x189) = 0x5d64;
  uVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x78))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x1b1] + 0x128))
            ((longlong *)param_1[0x1b1],
             CONCAT71((int7)((ulonglong)uVar3 >> 8),(int)uVar3 == 1) & 0xffffffff);
  uVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x78))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x1b2] + 0x128))
            ((longlong *)param_1[0x1b2],
             CONCAT71((int7)((ulonglong)uVar3 >> 8),(int)uVar3 == 1) & 0xffffffff);
  (**(code **)(**(longlong **)(param_1[0x197] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x197] + 0x4f0));
  *(undefined1 *)(param_1 + 0x1d7) = 1;
  uVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x88))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x197] + 0x2f0))((longlong *)param_1[0x197],uVar3);
  uVar1 = (**(code **)(*(longlong *)param_1[0x1d9] + 0x90))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x197] + 0x268))((longlong *)param_1[0x197],uVar1);
  (**(code **)(**(longlong **)(param_1[0x19d] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x19d] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xeb9) = 1;
  uVar3 = (**(code **)(*(longlong *)param_1[0x1d9] + 0xe0))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x19d] + 0x2f0))((longlong *)param_1[0x19d],uVar3);
  uVar1 = (**(code **)(*(longlong *)param_1[0x1d9] + 0xe8))((longlong *)param_1[0x1d9]);
  (**(code **)(*(longlong *)param_1[0x19d] + 0x268))((longlong *)param_1[0x19d],uVar1);
  *(undefined1 *)((longlong)param_1 + 0xeba) = 1;
  *(undefined4 *)((longlong)param_1 + 0xebc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xebb) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  FUN_0064cf60(param_1,0x7d1);
LAB_0151eab8:
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

