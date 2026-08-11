/* Ghidra address: 006d4370 */
/* Ghidra symbol: FUN_006d4370 */


void FUN_006d4370(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_28 [2];
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar2 = thunk_FUN_041b2403(uVar1,0x1308,(longlong)param_2,0);
  if (lVar2 == 0) {
    FUN_0041ddd0(&local_18,PTR_PTR_02003d38);
    local_20 = 0;
    local_28[0] = param_2;
    FUN_00442f70(&local_10,local_18,local_28,0);
    FUN_006d42b0(local_10);
  }
  FUN_006d5880(*(undefined8 *)(param_1 + 0x38));
  FUN_00414560(&local_18,2);
  return;
}

