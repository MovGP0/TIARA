/* Ghidra address: 0160eaf0 */
/* Ghidra symbol: FUN_0160eaf0 */


void FUN_0160eaf0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00414480(&local_38);
  if (0 < param_2) {
    do {
      FUN_00416ad0(&local_38,&DAT_0160ec18);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
      FUN_00450070(&local_40,local_30[0],&DAT_0160ec28,local_38,1);
      FUN_00414b50(local_30,local_40);
      (**(code **)(*param_1 + 0x40))(param_1,iVar2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

