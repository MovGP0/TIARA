/* Ghidra address: 01509840 */
/* Ghidra symbol: FUN_01509840 */


void FUN_01509840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x6d0);
    lVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x6d8),&PTR_FUN_0150a9d8);
    FUN_00414ad0(lVar2 + 0x100,&DAT_01509b90);
    FUN_004169a0(&local_38,lVar4 + 0xee8);
    FUN_00441920(local_30,local_38);
    FUN_00724380(lVar2,local_30[0]);
    FUN_00414ad0(lVar2 + 0xe0,L"Digital data (*.dsg)|*.dsg");
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa8))(*(longlong **)(param_1 + 0x6d0));
    if (cVar3 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x6d0),&local_48);
      FUN_0043e1a0(&local_40,local_48);
      FUN_00416910(local_148,local_40,0xff);
      FUN_00415020(lVar4 + 0xee8,local_148,0x50);
      FUN_01510cb0(lVar4,lVar4 + 0xee8);
    }
  }
  else if (iVar1 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x6d0);
    lVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x6d8),&PTR_FUN_0150a9d8);
    FUN_00414ad0(lVar2 + 0x100,&DAT_01509be8);
    FUN_004169a0(&local_158,lVar4 + 0xee8);
    FUN_00441920(&local_150,local_158);
    FUN_00724380(lVar2,local_150);
    FUN_00414ad0(lVar2 + 0xe0,L"Digital data (*.dgb)|*.dgb");
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa8))(*(longlong **)(param_1 + 0x6d0));
    if (cVar3 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x6d0),&local_168);
      FUN_0043e1a0(&local_160,local_168);
      FUN_00416910(local_148,local_160,0xff);
      FUN_00415020(lVar4 + 0xee8,local_148,0x50);
      FUN_01511240(lVar4,lVar4 + 0xee8);
    }
  }
  else {
    uVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x6d8),&PTR_FUN_0150a9d8);
    FUN_015103a0(uVar5);
  }
  FUN_00414480(&local_168);
  FUN_00414560(&local_160,3);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  return;
}

