/* Ghidra address: 01bbbb60 */
/* Ghidra symbol: FUN_01bbbb60 */


longlong FUN_01bbbb60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_01bbb290(&DAT_01bb8150,1);
  FUN_00414ad0(lVar1 + 8,local_res10[0]);
  FUN_00414480(local_res10);
  return lVar1;
}

