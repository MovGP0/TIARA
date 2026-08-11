/* Ghidra address: 00ec7250 */
/* Ghidra symbol: FUN_00ec7250 */


void FUN_00ec7250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00ec6ea0(param_1,local_res10,local_res18,0);
  FUN_0043e130(&local_50,local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
            (*(longlong **)(param_1 + 0x850),&local_48,L"DigitalICs",local_50,0);
  FUN_0043ea00(local_40,local_48);
  FUN_00414ad0(param_1 + 0x868,local_40[0]);
  FUN_00416cd0(param_1 + 0x868,4,*(undefined8 *)(param_1 + 0x868),&DAT_00ec755c,local_res18,
               &DAT_00ec756c);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar4);
      uVar3 = FUN_004170c0(&DAT_00ec7580,local_30[0],1);
      FUN_00416e20(local_30,1,uVar3);
      FUN_0043ea00(&local_58,local_30[0]);
      FUN_00416cd0(param_1 + 0x868,3,*(undefined8 *)(param_1 + 0x868),local_58,&DAT_00ec755c);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0043ea00(&local_60,*(undefined8 *)(param_1 + 0x868));
  FUN_00416ba0(param_1 + 0x868,local_60,&LAB_00ec7590);
  FUN_0043e130(&local_68,local_res10);
  FUN_0043ea00(&local_70,*(undefined8 *)(param_1 + 0x868));
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
            (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_68,local_70);
  FUN_00414560(&local_70,7);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

