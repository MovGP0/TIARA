/* Ghidra address: 018b87f0 */
/* Ghidra symbol: FUN_018b87f0 */


int FUN_018b87f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = FUN_018b86b0(param_1,param_2);
  if (lVar1 == 0) {
    local_14 = 1;
  }
  else {
    FUN_01803cc0(lVar1,&local_10,L"page");
    local_14 = FUN_0043fc00(local_10);
    local_14 = local_14 + 1;
  }
  FUN_00414480(&local_10);
  return local_14;
}

