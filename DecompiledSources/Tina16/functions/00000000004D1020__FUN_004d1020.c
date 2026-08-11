/* Ghidra address: 004d1020 */
/* Ghidra symbol: FUN_004d1020 */


void FUN_004d1020(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  int local_18;
  undefined1 local_10;
  
  local_30 = 0;
  if (param_2 != 0) {
    FUN_0044b630(&local_30,param_2,0);
    local_28 = local_30;
    local_20 = 0x11;
    local_10 = 0;
    local_18 = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004831c0,1,PTR_PTR_02003098,&local_28,1);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_30);
  return;
}

