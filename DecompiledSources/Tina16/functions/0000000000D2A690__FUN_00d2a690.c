/* Ghidra address: 00d2a690 */
/* Ghidra symbol: FUN_00d2a690 */


void FUN_00d2a690(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_00d2a4f0(param_1);
  FUN_00d0d770(uVar1,&local_10,param_2,param_3,0,1);
  FUN_00414bf0(param_1 + 0x88,local_10);
  FUN_004144d0(&local_10);
  return;
}

