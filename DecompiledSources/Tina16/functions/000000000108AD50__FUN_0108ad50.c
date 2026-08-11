/* Ghidra address: 0108ad50 */
/* Ghidra symbol: FUN_0108ad50 */


void FUN_0108ad50(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_50,iVar3);
      FUN_0043e1a0(&local_38,local_50[0]);
      FUN_00441a10(local_30,local_38);
      FUN_00441710(&local_40,local_38);
      iVar2 = FUN_00416db0(local_30[0],&DAT_0108af88);
      if ((((iVar2 == 0) || (iVar2 = FUN_00416db0(local_30[0],L".cpp"), iVar2 == 0)) ||
          (iVar2 = FUN_00416db0(local_30[0],&DAT_0108afb4), iVar2 == 0)) ||
         (iVar2 = FUN_00416db0(local_30[0],L".ino"), iVar2 == 0)) {
        iVar3 = iVar3 + 1;
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,iVar3);
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      }
    } while (iVar3 < iVar1);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar3);
      FUN_0043e1a0(&local_60,L"{$PRJ}");
      FUN_00450070(&local_58,local_38,local_res10[0],local_60,1);
      FUN_00414b50(&local_38,local_58);
      (**(code **)(*param_1 + 0x40))(param_1,iVar3,local_38);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return;
}

