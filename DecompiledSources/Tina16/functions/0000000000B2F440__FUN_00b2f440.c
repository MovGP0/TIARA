/* Ghidra address: 00b2f440 */
/* Ghidra symbol: FUN_00b2f440 */


undefined8 FUN_00b2f440(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined2 local_1c;
  undefined2 local_1a [5];
  
  local_1a[0] = *(undefined2 *)(param_3 + 9);
  local_1c = *(undefined2 *)(param_3 + 0x15);
  FUN_00417360(param_2,0,7);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = 0x39;
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(local_1a,lVar2 + 1,2);
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(&local_1c,lVar2 + 3,2);
  return param_2;
}

