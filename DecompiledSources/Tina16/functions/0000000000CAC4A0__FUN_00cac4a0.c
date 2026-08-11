/* Ghidra address: 00cac4a0 */
/* Ghidra symbol: FUN_00cac4a0 */


longlong FUN_00cac4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  lVar1 = FUN_00cac580(param_1,param_2,param_3);
  if (lVar1 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020040a0);
    FUN_00410ae0(param_2,&local_28);
    local_20 = local_28;
    local_18 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_0086d2e8,1,local_10,&local_20,0);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return lVar1;
}

