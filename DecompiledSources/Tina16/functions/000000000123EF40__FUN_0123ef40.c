/* Ghidra address: 0123ef40 */
/* Ghidra symbol: FUN_0123ef40 */


void FUN_0123ef40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = FUN_00410e60(&DAT_0123a0f8,1);
  FUN_00414ad0(lVar1 + 8,local_res18[0]);
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *(undefined4 *)(lVar1 + 0x18) = param_2;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x58),lVar1);
  FUN_00414480(local_res18);
  return;
}

