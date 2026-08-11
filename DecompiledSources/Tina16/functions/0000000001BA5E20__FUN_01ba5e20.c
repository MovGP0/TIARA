/* Ghidra address: 01ba5e20 */
/* Ghidra symbol: FUN_01ba5e20 */


int FUN_01ba5e20(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [48];
  
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
    FUN_00c3d330(param_2,local_38,local_44);
    FUN_004169a0(&local_40,local_38);
    iVar1 = FUN_00416db0(local_40,local_res20);
    if (iVar1 == 0) break;
  }
  FUN_00414480(&local_40);
  FUN_00414480(&local_res20);
  return local_44;
}

