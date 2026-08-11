/* Ghidra address: 00cd98b0 */
/* Ghidra symbol: FUN_00cd98b0 */


void FUN_00cd98b0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = FUN_00cd9800(param_1,param_2);
  if (param_3 == 0) {
    if (-1 < iVar1) {
      if (*(char *)((longlong)param_1 + 0x81) != '\0') {
        FUN_00cd8ca0(param_1,iVar1);
      }
      (**(code **)(*param_1 + 0x98))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,0);
    }
    if (*(char *)((longlong)param_1 + 0x81) == '\0') {
      FUN_00416cd0(&local_28,3,param_2,param_1[0xf],param_3);
      (**(code **)(*param_1 + 0x40))(param_1,iVar1,local_28);
    }
    else {
      FUN_00cd8ca0(param_1,iVar1);
      FUN_00416cd0(local_20,3,param_2,param_1[0xf],param_3);
      FUN_00cd8e90(param_1,local_20[0],iVar1);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

