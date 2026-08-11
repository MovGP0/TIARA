/* Ghidra address: 014b5430 */
/* Ghidra symbol: FUN_014b5430 */


void FUN_014b5430(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x896) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x7c0);
    FUN_00724270(plVar1,&local_28);
    FUN_00441640(local_20,local_28);
    FUN_00441920(&local_38,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00416ba0(&local_40,&LAB_014b5618,plVar1[0x20]);
    FUN_004414c0(&local_30,local_38,local_40);
    FUN_00416ad0(local_20,local_30);
    FUN_00724380(plVar1,local_20[0]);
    cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar2 != '\0') {
      FUN_00724270(plVar1,&local_48);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0x4e8);
      (**(code **)(*plVar1 + 0x100))(plVar1,local_48);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) + 0xb0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8));
    cVar2 = FUN_014a1f90(1,0,0,0);
    if (cVar2 != '\0') {
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x860),0);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

