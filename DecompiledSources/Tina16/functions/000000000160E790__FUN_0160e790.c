/* Ghidra address: 0160e790 */
/* Ghidra symbol: FUN_0160e790 */


undefined8 FUN_0160e790(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_30,iVar4);
      iVar2 = FUN_004170c0(&LAB_0160e908,local_30,1);
      iVar3 = 0;
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + -4);
      }
      FUN_00416dc0(&local_38,local_30,1,iVar2 + -1);
      FUN_00416dc0(&local_40,local_30,iVar2 + 1,iVar3 - iVar2);
      FUN_0043f750(local_50,param_3);
      iVar3 = FUN_00416db0(local_38,local_50[0]);
      if (iVar3 == 0) {
        FUN_00414ad0(param_1,local_40);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return param_1;
}

