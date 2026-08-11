/* Ghidra address: 0153be60 */
/* Ghidra symbol: FUN_0153be60 */


void FUN_0153be60(longlong param_1,int param_2,undefined4 param_3)

{
  int local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_28 = param_2;
  if ((param_2 == 0) && (param_1 != 0)) {
    FUN_00441920(&local_10,*(undefined8 *)(param_1 + 0x360));
    FUN_004414c0(local_20,local_10,0);
    FUN_00414b50(&local_10,local_20[0]);
    local_28 = FUN_00b91e50(local_10);
  }
  if (local_28 != 0) {
    FUN_00e1ddd0(local_28);
  }
  FUN_00e1de50(param_3);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

