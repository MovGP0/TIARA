/* Ghidra address: 01b8b6e0 */
/* Ghidra symbol: FUN_01b8b6e0 */


bool FUN_01b8b6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *param_5 = -1;
  bVar1 = false;
  iVar2 = (**(code **)(*param_4 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_4 + 0x18))(param_4,&local_38,iVar4);
      FUN_00441920(&local_30,local_38);
      FUN_00416ba0(&local_40,local_res10,local_res18);
      if (local_40 == local_30) {
        bVar5 = true;
      }
      else {
        FUN_00416ba0(&local_48,local_res10,local_res18);
        if ((local_48 == 0) || (local_30 == 0)) {
          bVar5 = false;
        }
        else {
          FUN_00416ba0(&local_50,local_res10,local_res18);
          iVar3 = FUN_0043e420(local_50,local_30);
          bVar5 = iVar3 == 0;
        }
      }
      if (bVar5) {
        bVar1 = true;
        *param_5 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (!bVar1) {
    *param_5 = -1;
    iVar2 = (**(code **)(*param_4 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_4 + 0x18))(param_4,&local_38,iVar4);
        FUN_00441920(&local_30,local_38);
        FUN_0043e1a0(&local_58,local_res10);
        FUN_0043e1a0(&local_60,local_30);
        iVar3 = FUN_004170c0(local_58,local_60,1);
        if (0 < iVar3) {
          *param_5 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = *param_5;
  FUN_00414560(&local_60,7);
  FUN_00414560(&local_res10,2);
  return iVar2 != -1;
}

