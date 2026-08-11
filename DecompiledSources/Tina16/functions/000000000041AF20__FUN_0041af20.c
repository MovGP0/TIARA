/* Ghidra address: 0041af20 */
/* Ghidra symbol: FUN_0041af20 */


bool FUN_0041af20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined1 local_258 [592];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_00416740(local_res10[0]);
  lVar2 = thunk_FUN_041460a9(uVar1,local_258);
  if (lVar2 != -1) {
    thunk_FUN_03b19720(lVar2);
  }
  FUN_00414480(local_res10);
  return lVar2 != -1;
}

