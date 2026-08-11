/* Ghidra address: 006d47b0 */
/* Ghidra symbol: FUN_006d47b0 */


void FUN_006d47b0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_58 [2];
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_30 [8];
  undefined8 local_10;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 8;
  local_10 = param_3;
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar2 = thunk_FUN_041b2403(uVar1,0x133d,(longlong)param_2,local_30);
  if (lVar2 == 0) {
    FUN_0041ddd0(&local_48,PTR_PTR_02001758);
    local_50 = 0;
    local_58[0] = param_2;
    FUN_00442f70(local_40,local_48,local_58,0);
    FUN_006d42b0(local_40[0]);
  }
  FUN_00414560(&local_48,2);
  return;
}

