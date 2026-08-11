/* Ghidra address: 00b2ed70 */
/* Ghidra symbol: FUN_00b2ed70 */


undefined8 FUN_00b2ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00417360(param_2,0,9);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = 0x1f;
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(local_res18,lVar2 + 1,8);
  return param_2;
}

