/* Ghidra address: 006d42e0 */
/* Ghidra symbol: FUN_006d42e0 */


void FUN_006d42e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar2 = thunk_FUN_041b2403(uVar1,0x1309,0,0);
  if (lVar2 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004088);
    FUN_006d42b0(local_10);
  }
  FUN_006d5880(*(undefined8 *)(param_1 + 0x38));
  FUN_00414480(&local_10);
  return;
}

