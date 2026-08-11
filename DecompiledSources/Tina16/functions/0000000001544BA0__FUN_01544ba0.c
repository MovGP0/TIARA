/* Ghidra address: 01544ba0 */
/* Ghidra symbol: FUN_01544ba0 */


void FUN_01544ba0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  FUN_0153dc10(L">> Logging a block ... <<");
  FUN_01544f20(param_1,&local_48);
  FUN_00416ba0(local_40,L"typ: ",local_48);
  FUN_0153dc10(local_40[0]);
  FUN_0153dc10(L"--interface nodes--");
  FUN_01d43440(&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  FUN_00416ba0(&local_50,L"interface nodes count: ",local_58);
  FUN_0153dc10(local_50);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),iVar3);
      FUN_01d43440(&local_68,*(undefined4 *)(lVar1 + 8));
      uVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),iVar3);
      FUN_0153f7b0(uVar2,&local_70);
      FUN_00416cd0(&local_60,3,local_68,&DAT_01544ef4,local_70);
      FUN_0153dc10(local_60);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0153dc10(0);
  FUN_0153dc10(L"--comps--");
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x28),iVar3);
      FUN_01d43440(&local_80,*(undefined4 *)(lVar1 + 8));
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x288))(*(longlong **)(lVar1 + 0x18),&local_88);
      FUN_00416cd0(&local_78,3,local_80,&DAT_01544ef4,local_88);
      FUN_0153dc10(local_78);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0153dc10(0);
  FUN_0153dc10(0);
  FUN_0153dc10(0);
  FUN_00414560(&local_88,10);
  FUN_00414480(local_30);
  return;
}

