/* Ghidra address: 01bae230 */
/* Ghidra symbol: FUN_01bae230 */


void FUN_01bae230(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x700));
  FUN_00441920(&local_48,local_30[0]);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  FUN_01bae0d0(&local_50,uVar4);
  FUN_00416ad0(&local_50,plVar1[0x20]);
  FUN_004414c0(local_40,local_48,local_50);
  FUN_00724380(plVar1,local_40[0]);
  FUN_00441640(&local_58,local_30[0]);
  cVar2 = FUN_01b22cb0(local_58);
  if (cVar2 == '\0') {
    FUN_00416ba0(&local_68,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples\\");
    FUN_00724420(plVar1,local_68);
  }
  else {
    FUN_00441640(&local_60,local_30[0]);
    FUN_00724420(plVar1,local_60);
  }
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    bVar6 = cVar2 != '\0';
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8))
    ;
    if (cVar2 != '\0') {
      bVar6 = bVar6 | 4;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    if (cVar2 != '\0') {
      bVar6 = bVar6 | 2;
    }
    uVar5 = FUN_01a1efc0(&DAT_019ec6a8,1,0,&LAB_01bae534);
    FUN_00724270(plVar1,&local_70);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    FUN_01a1f1b0(uVar5,local_70,*(undefined8 *)(param_1 + 0x708),0,uVar3,bVar6,
                 *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4a8) == 1,0,
                 *(undefined8 *)(param_1 + 0x710));
    FUN_00410f20(uVar5);
  }
  FUN_00414480(&local_70);
  FUN_00414560(&local_68,6);
  FUN_00414480(local_30);
  return;
}

