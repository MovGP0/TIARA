/* Ghidra address: 0044e320 */
/* Ghidra symbol: FUN_0044e320 */


void FUN_0044e320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_50 = 0;
  local_10 = 0;
  local_30 = param_2;
  local_20 = param_3;
  if (param_1 == 0) {
    FUN_0041ddd0(&local_48,PTR_PTR_02004dc8);
    FUN_0041ddd0(&local_50,PTR_PTR_02004480);
    local_40 = local_50;
    local_38 = 0x11;
    local_28 = 0x11;
    local_18 = 0;
    uVar1 = FUN_0044d530(&PTR_FUN_00436a28,1,local_48,&local_40,2);
    FUN_004133b0(uVar1,param_4);
  }
  else {
    FUN_0041ddd0(&local_10,PTR_PTR_02004dc8);
    local_38 = 0x11;
    local_28 = 0x11;
    local_18 = 0;
    local_40 = param_1;
    uVar1 = FUN_0044d530(&PTR_FUN_00436a28,1,local_10,&local_40,2);
    FUN_004133b0(uVar1,param_4);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_10);
  return;
}

