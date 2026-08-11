/* Ghidra address: 01811180 */
/* Ghidra symbol: FUN_01811180 */


void FUN_01811180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar1 = FUN_00410e60(&DAT_01810ed8,1);
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  FUN_00414ad0(lVar1 + 0x18,local_res20);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar1);
  FUN_00414480(&local_res20);
  return;
}

