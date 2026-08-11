/* Ghidra address: 00567c10 */
/* Ghidra symbol: FUN_00567c10 */


void FUN_00567c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,param_2);
  local_20 = &local_28;
  local_18 = 0x10;
  local_28 = param_3;
  uVar1 = FUN_0044d530(&PTR_FUN_004347c0,1,local_10,&local_20,0);
  FUN_004133b0(uVar1,unaff_retaddr);
  FUN_00414480(&local_10);
  return;
}

