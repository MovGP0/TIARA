/* Ghidra address: 00ee6140 */
/* Ghidra symbol: FUN_00ee6140 */


longlong FUN_00ee6140(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x3a);
  *(undefined4 *)(lVar1 + 0xc) = param_3;
  *(undefined4 *)(lVar1 + 0x10) = param_4;
  *(undefined1 *)(lVar1 + 0xd1) = param_5;
  FUN_017bf050(lVar1,0,local_res10[0]);
  FUN_00414480(local_res10);
  return lVar1;
}

