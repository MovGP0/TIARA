/* Ghidra address: 01b83c30 */
/* Ghidra symbol: FUN_01b83c30 */


void FUN_01b83c30(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c [3];
  
  local_38 = 0;
  local_40 = 0;
  *param_5 = 0;
  iVar1 = (**(code **)(*param_3 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_38,iVar2);
      (**(code **)(*param_4 + 0x18))(param_4,&local_40,iVar2);
      FUN_01b83d20(param_1,param_2,local_38,local_40,local_2c);
      *param_5 = *param_5 + local_2c[0];
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,2);
  return;
}

