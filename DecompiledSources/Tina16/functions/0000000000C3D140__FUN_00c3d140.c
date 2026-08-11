/* Ghidra address: 00c3d140 */
/* Ghidra symbol: FUN_00c3d140 */


int FUN_00c3d140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [48];
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_68 = 0;
  local_20 = 0;
  FUN_00c3be80(&local_20,param_2);
  local_6c = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (-1 < iVar2 + -1) {
    do {
      FUN_00c3d330(param_1,local_60,local_6c);
      FUN_004169a0(&local_68,local_60);
      FUN_00c3be80(local_30,local_68);
      iVar1 = FUN_00416db0(local_30[0],local_20);
      if (iVar1 == 0) goto LAB_00c3d1f1;
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_6c = -1;
LAB_00c3d1f1:
  FUN_00414480(&local_68);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return local_6c;
}

