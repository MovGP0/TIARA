/* Ghidra address: 01a31b90 */
/* Ghidra symbol: FUN_01a31b90 */


undefined1 FUN_01a31b90(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_61 = 1;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar4);
      FUN_0043e1a0(local_40,local_30[0]);
      iVar3 = FUN_00416db0(local_40[0],L"current");
      if (iVar3 == 0) {
LAB_01a31cba:
        bVar1 = true;
      }
      else {
        FUN_0043e1a0(&local_48,local_30[0]);
        iVar3 = FUN_00416db0(local_48,L"voltage");
        if (iVar3 == 0) goto LAB_01a31cba;
        FUN_0043e1a0(&local_50,local_30[0]);
        iVar3 = FUN_00416db0(local_50,L"impedance");
        if (iVar3 == 0) goto LAB_01a31cba;
        FUN_0043e1a0(&local_58,local_30[0]);
        iVar3 = FUN_00416db0(local_58,L"resistance");
        if (iVar3 == 0) goto LAB_01a31cba;
        FUN_0043e1a0(&local_60,local_30[0]);
        iVar3 = FUN_00416db0(local_60,L"total resistance");
        if (iVar3 == 0) goto LAB_01a31cba;
        bVar1 = false;
      }
      if (!bVar1) {
        local_61 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  return local_61;
}

