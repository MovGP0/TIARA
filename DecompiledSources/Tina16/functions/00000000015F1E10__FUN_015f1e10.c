/* Ghidra address: 015f1e10 */
/* Ghidra symbol: FUN_015f1e10 */


undefined1
FUN_015f1e10(longlong *param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_51 = 0;
  *param_3 = -1;
  FUN_00414480(param_5);
  iVar3 = *param_4;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar3 <= iVar1 + -1) {
    iVar4 = ((iVar1 + -1) - iVar3) + 1;
    iVar1 = iVar3;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_30,iVar1);
      FUN_00414ad0(param_5,local_30);
      iVar2 = FUN_004170c0(local_res10[0],*param_5,1);
      *param_3 = iVar2;
      if (*param_3 != 0) {
        local_51 = 1;
        *param_4 = iVar1;
        goto LAB_015f203c;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar3 <= iVar1 + -1) {
    iVar4 = ((iVar1 + -1) - iVar3) + 1;
    iVar1 = iVar3;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar1);
      FUN_00414ad0(param_5,local_38);
      FUN_0043e130(&local_40,local_res10[0]);
      iVar2 = FUN_004170c0(local_40,*param_5,1);
      *param_3 = iVar2;
      if (*param_3 != 0) {
        local_51 = 1;
        *param_4 = iVar1;
        goto LAB_015f203c;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar3 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - iVar3) + 1;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_48,iVar3);
      FUN_00414ad0(param_5,local_48);
      FUN_0043e1a0(&local_50,local_res10[0]);
      iVar4 = FUN_004170c0(local_50,*param_5,1);
      *param_3 = iVar4;
      if (*param_3 != 0) {
        local_51 = 1;
        *param_4 = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_015f203c:
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res10);
  return local_51;
}

