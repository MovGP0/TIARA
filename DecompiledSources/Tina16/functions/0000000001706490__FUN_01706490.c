/* Ghidra address: 01706490 */
/* Ghidra symbol: FUN_01706490 */


void FUN_01706490(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_3 + 0x10))(param_3,param_2);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar2);
      FUN_0043e1a0(local_30,local_38);
      FUN_015f4420(local_50,local_38,*(int *)(param_1 + 0x6ec) + 2);
      FUN_00414b50(&local_38,local_50[0]);
      if (*(char *)(param_1 + 0x6e8) == '\0') {
        FUN_01705640(*(undefined8 *)(param_1 + 0x720),&local_40,local_30[0]);
      }
      else {
        FUN_00414480(&local_40);
      }
      FUN_00416ad0(&local_38,local_40);
      (**(code **)(*param_3 + 0x40))(param_3,iVar2,local_38);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

