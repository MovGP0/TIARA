/* Ghidra address: 00e0e710 */
/* Ghidra symbol: FUN_00e0e710 */


undefined8 FUN_00e0e710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(local_30);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00e0ef90(*(undefined8 *)(param_1 + 0x30),local_40,iVar2);
      FUN_00416ad0(local_30,local_40[0]);
      if (iVar2 < iVar1 + -1) {
        FUN_00416ad0(local_30,&DAT_00e0e8a8);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416ad0(local_30,&LAB_00e0e8b8);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00e0ef90(*(undefined8 *)(param_1 + 0x38),&local_48,iVar2);
      FUN_00416ad0(local_30,local_48);
      if (iVar2 < iVar1 + -1) {
        FUN_00416ad0(local_30,&DAT_00e0e8a8);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416ad0(local_30,&LAB_00e0e8b8);
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return param_2;
}

