/* Ghidra address: 01782f90 */
/* Ghidra symbol: FUN_01782f90 */


int FUN_01782f90(undefined8 param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = (**(code **)(*param_3 + 0xb0))(param_3,param_2);
  if (local_68 == -1) {
    iVar5 = 0;
    if (param_2 != 0) {
      iVar5 = *(int *)(param_2 + -4);
    }
    iVar6 = iVar5;
    if (param_4 == '\0') {
      iVar6 = 1;
    }
    iVar4 = 0;
    iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
    local_68 = -1;
    if ((0 < iVar5) && (iVar3 = -1, -1 < iVar1 + -1)) {
      do {
        (**(code **)(*param_3 + 0x18))(param_3,&local_48,iVar4);
        FUN_00416dc0(local_40,local_48,1,iVar6);
        FUN_00416dc0(&local_50,param_2,1,iVar6);
        iVar2 = FUN_0043e6d0(local_40[0],local_50);
        local_68 = iVar3;
        if (iVar2 == 0) {
          local_68 = iVar4;
          if (iVar6 == iVar5) break;
          (**(code **)(*param_3 + 0x18))(param_3,&local_60,iVar4);
          FUN_00416dc0(&local_58,local_60,1,iVar5);
          iVar3 = FUN_0043e6d0(local_58,param_2);
          if (iVar3 == 0) break;
          iVar4 = iVar4 + -1;
          iVar6 = iVar6 + 1;
          if (iVar5 < iVar6) break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = local_68;
      } while (iVar4 <= iVar1 + -1);
    }
  }
  FUN_00414560(&local_60,5);
  return local_68;
}

