/* Ghidra address: 01bbbe00 */
/* Ghidra symbol: FUN_01bbbe00 */


longlong FUN_01bbbe00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_01bbba60(&DAT_01bb8e60,1);
  FUN_00414ad0(lVar1 + 0x18,local_res10[0]);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  FUN_00414480(local_res10);
  return lVar1;
}

