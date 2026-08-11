/* Ghidra address: 018b9cb0 */
/* Ghidra symbol: FUN_018b9cb0 */


void FUN_018b9cb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_30[0] = 0;
  uVar1 = FUN_01810fa0(&DAT_018103d8,1,0);
  uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x88),
                       *(int *)(*(longlong *)(param_1 + 0x88) + 0x10) + -1);
  plVar3 = (longlong *)(**(code **)(*param_2 + -0x30))(*param_2);
  (**(code **)(*plVar3 + 0x78))(plVar3,0xff,uVar2);
  FUN_0194f9a0(plVar3,param_2);
  FUN_01951630(plVar3,0);
  FUN_00416780(&local_48,*(undefined2 *)plVar3[0x20]);
  FUN_0043e1a0(local_40,local_48);
  FUN_0043f750(&local_58,*(int *)(*(longlong *)(param_1 + 0x88) + 0x10) + -1);
  FUN_00416cd0(&local_50,4,L"Page",local_58,&LAB_018b9ed0,plVar3[2]);
  FUN_018b7700(*(undefined8 *)(param_1 + 0x58),local_30,local_40[0],local_50,plVar3);
  if ((*(byte *)(plVar3 + 0x1a) & 4) == 0) {
    FUN_01814710(uVar1,&local_60,plVar3,0);
    FUN_00414ad0(plVar3 + 0x20,local_60);
  }
  else {
    FUN_00410ae0(*plVar3,plVar3 + 0x20);
  }
  param_2[0x22] = (longlong)plVar3;
  FUN_00414ad0(param_2 + 0x1f,local_30[0]);
  FUN_00414ad0(plVar3 + 0x1f,local_30[0]);
  FUN_00410f20(uVar1);
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  return;
}

