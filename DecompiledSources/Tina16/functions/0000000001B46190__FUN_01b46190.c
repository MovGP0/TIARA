/* Ghidra address: 01b46190 */
/* Ghidra symbol: FUN_01b46190 */


undefined8 FUN_01b46190(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 local_res20;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414520(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      FUN_01d3a8c0(*(undefined8 *)PTR_DAT_020036c8,&local_10,(int)param_1[4] + param_3,local_res20);
      FUN_00b0d1f0(local_20,local_10,&DAT_01b462f4,&DAT_01b462fc);
      FUN_00414be0(&local_10,local_20[0]);
      iVar1 = FUN_00417170(&DAT_01b462fc,local_10,1);
      uVar2 = 0;
      if (local_10 != 0) {
        uVar2 = *(uint *)(local_10 + -4) >> 1;
      }
      FUN_00416430(&local_10,local_10,iVar1 + 1,uVar2);
      FUN_00414b90(param_2,local_10);
    }
  }
  FUN_00414520(local_20);
  FUN_00414520(&local_10);
  FUN_00414480(&local_res20);
  return param_2;
}

