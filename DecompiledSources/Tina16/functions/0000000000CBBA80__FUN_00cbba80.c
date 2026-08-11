/* Ghidra address: 00cbba80 */
/* Ghidra symbol: FUN_00cbba80 */


longlong * FUN_00cbba80(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  iVar1 = FUN_00cbaf90(param_1);
  if (iVar1 < 1) {
    iVar1 = (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6]);
    if (0 < iVar1) {
      (**(code **)(*plVar3 + 0x88))(plVar3,param_1[6]);
    }
  }
  else {
    FUN_0043f750(local_30,iVar1);
    iVar1 = (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6]);
    if (iVar1 < 1) {
      (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
    }
    else {
      iVar1 = (**(code **)(*(longlong *)param_1[6] + 0x28))();
      iVar4 = 0;
      if (-1 < iVar1 + -1) {
        do {
          iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6]);
          if (iVar4 < iVar2 + -1) {
            (**(code **)(*(longlong *)param_1[6] + 0x18))((longlong *)param_1[6],&local_48,iVar4);
            FUN_00416cd0(local_40,3,local_30[0],&DAT_00cbbc88,local_48);
            (**(code **)(*plVar3 + 0x78))(plVar3,local_40[0]);
          }
          else {
            (**(code **)(*(longlong *)param_1[6] + 0x18))((longlong *)param_1[6],&local_58,iVar4);
            FUN_00416cd0(&local_50,3,local_30[0],&LAB_00cbbc98,local_58);
            (**(code **)(*plVar3 + 0x78))(plVar3,local_50);
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return plVar3;
}

