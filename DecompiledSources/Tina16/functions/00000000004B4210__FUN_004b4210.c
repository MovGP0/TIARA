/* Ghidra address: 004b4210 */
/* Ghidra symbol: FUN_004b4210 */


int FUN_004b4210(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  local_3c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_20,local_3c);
      FUN_00416780(local_30,(short)param_1[6]);
      iVar2 = FUN_0044f900(local_30[0],local_20);
      if (iVar2 != 0) {
        FUN_00416dc0(&local_38,local_20,1,iVar2 + -1);
        iVar2 = (**(code **)(*param_1 + 0x70))(param_1,local_38,param_2);
        if (iVar2 == 0) goto LAB_004b42e6;
      }
      local_3c = local_3c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_3c = -1;
LAB_004b42e6:
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return local_3c;
}

