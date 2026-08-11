/* Ghidra address: 00b914f0 */
/* Ghidra symbol: FUN_00b914f0 */


undefined2 FUN_00b914f0(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 local_res8 [4];
  int local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_0040e860(local_res8[0],&local_c);
  if (local_c != 0) {
    uVar1 = 0;
  }
  FUN_00414480(local_res8);
  return uVar1;
}

