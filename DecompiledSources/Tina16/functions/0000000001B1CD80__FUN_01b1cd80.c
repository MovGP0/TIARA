/* Ghidra address: 01b1cd80 */
/* Ghidra symbol: FUN_01b1cd80 */


int FUN_01b1cd80(longlong param_1,longlong *param_2,char param_3)

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
  local_68 = (**(code **)(*param_2 + 0xb0))(param_2,param_1);
  if (local_68 == -1) {
    iVar5 = 0;
    if (param_1 != 0) {
      iVar5 = *(int *)(param_1 + -4);
    }
    iVar6 = iVar5;
    if (param_3 == '\0') {
      iVar6 = 1;
    }
    iVar4 = 0;
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    local_68 = -1;
    if ((0 < iVar5) && (iVar3 = -1, -1 < iVar1 + -1)) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar4);
        FUN_00416dc0(local_40,local_48,1,iVar6);
        FUN_00416dc0(&local_50,param_1,1,iVar6);
        iVar2 = FUN_0043e6d0(local_40[0],local_50);
        local_68 = iVar3;
        if (iVar2 == 0) {
          local_68 = iVar4;
          if (iVar6 == iVar5) break;
          (**(code **)(*param_2 + 0x18))(param_2,&local_60,iVar4);
          FUN_00416dc0(&local_58,local_60,1,iVar5);
          iVar3 = FUN_0043e6d0(local_58,param_1);
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

