/* Ghidra address: 00451a20 */
/* Ghidra symbol: FUN_00451a20 */


void FUN_00451a20(uint param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 unaff_retaddr;
  undefined8 local_40;
  uint local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_40 = 0;
  if (param_1 == 0) {
    lVar1 = FUN_0044d710(&PTR_FUN_00436dd0,1,PTR_PTR_020053d8);
  }
  else {
    local_30 = 0;
    local_38[0] = param_1;
    FUN_0044b630(&local_40,param_1,0);
    local_28 = local_40;
    local_20 = 0x11;
    local_10 = 0x11;
    local_18 = param_2;
    lVar1 = FUN_0044d8d0(&PTR_FUN_00436dd0,1,PTR_PTR_02004338,local_38,2);
  }
  *(uint *)(lVar1 + 0x30) = param_1;
  FUN_004133b0(lVar1,unaff_retaddr);
  FUN_00414480(&local_40);
  return;
}

