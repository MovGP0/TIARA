/* Ghidra address: 010dd2f0 */
/* Ghidra symbol: FUN_010dd2f0 */


void FUN_010dd2f0(longlong param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00b8fd60(&local_10,param_2,*PTR_DAT_02005310,0,1);
  if ((*PTR_DAT_02003720 == '\0') || (dVar1 = param_2, *PTR_DAT_02002b78 != '\0')) {
    dVar1 = (double)FUN_0040c850(param_2 / 1e+50);
    if (1.0 - dVar1 <= 1e-10) {
      FUN_00414b50(&local_10,&DAT_010dd4c0);
    }
    FUN_00416cd0(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xa8) + 0xe30,4,local_10,
                 &PTR_DAT_010dd4d4,local_res18[0],&LAB_010dd4e8);
    FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xa8) + 0xe38);
    FUN_00416ba0(local_20,local_10,local_res18[0]);
    (**(code **)(*DAT_0202f9a8 + 0x78))(DAT_0202f9a8,local_20[0]);
    dVar1 = DAT_0202f9b0;
  }
  DAT_0202f9b0 = dVar1;
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

