/* Ghidra address: 009e8410 */
/* Ghidra symbol: FUN_009e8410 */


int FUN_009e8410(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
      uVar2 = FUN_009e9660(param_1);
      FUN_00415e60(local_30,uVar2);
      iVar3 = FUN_00417170(local_30[0],local_20,1);
      if (iVar3 != 0) {
        FUN_00416430(&local_38,local_20,1,iVar3 + -1);
        iVar3 = (**(code **)(*param_1 + 0x68))(param_1,local_38,param_2);
        if (iVar3 == 0) goto LAB_009e84f2;
      }
      local_3c = local_3c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_3c = -1;
LAB_009e84f2:
  FUN_004145c0(&local_38,2);
  FUN_00414520(&local_20);
  return local_3c;
}

