/* Ghidra address: 005d0220 */
/* Ghidra symbol: FUN_005d0220 */


void FUN_005d0220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_res8 [4];
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_005d23a0(&local_10,local_res8[0]);
  FUN_00414b50(local_res8,local_10);
  FUN_0043ea00(&local_18,param_2);
  if (local_18 == 0) {
    uVar1 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_DAT_02002df0);
    FUN_004134c0(uVar1);
  }
  cVar2 = FUN_005d2890(param_2,1);
  if (cVar2 == '\0') {
    uVar1 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_DAT_02002df0);
    FUN_004134c0(uVar1);
  }
  FUN_005d0d30(local_res8[0],1);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res8);
  return;
}

