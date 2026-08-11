/* Ghidra address: 00b2f3e0 */
/* Ghidra symbol: FUN_00b2f3e0 */


undefined8 FUN_00b2f3e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined2 local_1a [5];
  
  local_1a[0] = *(undefined2 *)(param_3 + 0x15);
  FUN_00417360(param_2,0,5);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = 0x23;
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(local_1a,lVar2 + 1,2);
  return param_2;
}

