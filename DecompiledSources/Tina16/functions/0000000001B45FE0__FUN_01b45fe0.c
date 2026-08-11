/* Ghidra address: 01b45fe0 */
/* Ghidra symbol: FUN_01b45fe0 */


undefined8 FUN_01b45fe0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res20;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,&local_10,(int)param_1[4] + param_3,local_res20);
      FUN_00450070(local_20,local_10,&DAT_01b46170,&DAT_01b46180,0);
      FUN_00414b50(&local_10,local_20[0]);
      iVar1 = FUN_004170c0(&DAT_01b46180,local_10,1);
      uVar2 = 0;
      if (local_10 != 0) {
        uVar2 = *(undefined4 *)(local_10 + -4);
      }
      FUN_00416dc0(&local_10,local_10,iVar1 + 1,uVar2);
      FUN_00414ad0(param_2,local_10);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res20);
  return param_2;
}

