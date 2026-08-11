/* Ghidra address: 006dd770 */
/* Ghidra symbol: FUN_006dd770 */


longlong FUN_006dd770(undefined8 param_1,int param_2)

{
  int local_34;
  longlong local_30;
  int local_28 [2];
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_30 = FUN_006dd580(param_1);
  for (local_34 = param_2; (local_30 != 0 && (0 < local_34)); local_34 = local_34 + -1) {
    local_30 = FUN_006dd540(param_1,local_30);
  }
  if (local_30 == 0) {
    FUN_0041ddd0(&local_18,PTR_PTR_02004940);
    local_28[0] = local_34;
    local_20 = 0;
    FUN_00442f70(&local_10,local_18,local_28,0);
    FUN_006dc500(local_10);
  }
  FUN_00414560(&local_18,2);
  return local_30;
}

