/* Ghidra address: 01575270 */
/* Ghidra symbol: FUN_01575270 */


undefined8 FUN_01575270(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar3 = 0;
  iVar4 = -1;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_30,iVar3);
      iVar2 = FUN_004170c0(local_res18[0],local_30,1);
      iVar4 = iVar3;
      if ((0 < iVar2) ||
         ((param_4 != '\0' &&
          (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                             (*(longlong **)(param_1 + 0x10)), iVar3 == iVar2 + -1)))) break;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
      iVar4 = -1;
    } while (iVar1 != 0);
  }
  if (iVar4 < 0) {
    FUN_01d43440(&local_40,*(undefined4 *)(param_1 + 8));
    FUN_00416cd0(&local_38,4,L"Signal not found with prefix ",local_res18[0],L" on node ",local_40);
    FUN_015fcf20(local_38,0,0,0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),param_2,iVar4);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_2;
}

