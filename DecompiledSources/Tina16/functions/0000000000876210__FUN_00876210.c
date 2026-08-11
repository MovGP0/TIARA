/* Ghidra address: 00876210 */
/* Ghidra symbol: FUN_00876210 */


void FUN_00876210(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  char local_9;
  
  local_20[0] = 0;
  FUN_008762c0(param_1,param_2,&local_9);
  if (local_9 != '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_020031b0);
    local_28 = 0x11;
    local_30 = param_1;
    uVar1 = FUN_0044d530(&PTR_FUN_0086ef60,1,local_20[0],&local_30,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(local_20);
  return;
}

