/* Ghidra address: 004602f0 */
/* Ghidra symbol: FUN_004602f0 */


void FUN_004602f0(undefined2 param_1,undefined2 param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_0041ddd0(&local_10,PTR_PTR_02003fe8);
  FUN_0046bff0(&local_38,param_1);
  local_30 = local_38;
  local_28 = 0x11;
  FUN_0046bff0(&local_40,param_2);
  local_20 = local_40;
  local_18 = 0x11;
  uVar1 = FUN_0044d530(&PTR_FUN_0045f268,1,local_10,&local_30,1);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_10);
  return;
}

