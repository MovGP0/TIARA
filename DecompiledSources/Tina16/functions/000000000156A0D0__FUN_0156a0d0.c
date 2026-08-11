/* Ghidra address: 0156a0d0 */
/* Ghidra symbol: FUN_0156a0d0 */


void FUN_0156a0d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x918);
  iVar3 = (**(code **)(*plVar1 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar4);
      cVar2 = FUN_00440a20(local_30,1);
      if (cVar2 != '\0') {
        FUN_004412f0(local_30);
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,iVar4);
      FUN_00441920(&local_48,local_50);
      FUN_004414c0(local_40,local_48,L".tmp");
      FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x7a8),&DAT_0156a2c8,local_40[0]);
      cVar2 = FUN_00440a20(local_30,1);
      if (cVar2 != '\0') {
        FUN_004412f0(local_30);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x7a8),&DAT_0156a2c8,L"get_design_file.tmp");
  cVar2 = FUN_00440a20(local_30,1);
  if (cVar2 != '\0') {
    FUN_004412f0(local_30);
  }
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x7a8),&DAT_0156a2c8,L"get_design_file.vhd");
  cVar2 = FUN_00440a20(local_30,1);
  if (cVar2 != '\0') {
    FUN_004412f0(local_30);
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

