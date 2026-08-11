/* Ghidra address: 00d30b80 */
/* Ghidra symbol: FUN_00d30b80 */


void FUN_00d30b80(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0080abe0(*(undefined8 *)PTR_DAT_02004030);
  uVar1 = FUN_00416740(local_res8[0]);
  FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,local_20);
  uVar2 = FUN_00416740(local_20[0]);
  thunk_FUN_041604c6(0,uVar1,uVar2,param_2 | 0x2000);
  FUN_0080ac80(*(undefined8 *)PTR_DAT_02004030);
  FUN_00415dd0(&local_28,local_res8[0],0);
  FUN_00d30c80(local_28);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return;
}

