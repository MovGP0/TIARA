/* Ghidra address: 01575480 */
/* Ghidra symbol: FUN_01575480 */


undefined8 FUN_01575480(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_01d43440(&local_40,*(undefined4 *)(param_1 + 8));
  FUN_00416ba0(&local_38,local_40,&DAT_015755b8);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),local_30,iVar3);
      FUN_00416ad0(&local_38,local_30[0]);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
      if (iVar3 < iVar2 + -1) {
        FUN_00416ad0(&local_38,&LAB_015755cc);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_2,local_38);
  FUN_00414560(&local_40,3);
  return param_2;
}

