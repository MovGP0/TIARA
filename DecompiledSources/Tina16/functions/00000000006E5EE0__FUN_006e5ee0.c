/* Ghidra address: 006e5ee0 */
/* Ghidra symbol: FUN_006e5ee0 */


longlong FUN_006e5ee0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_18 = FUN_006e5fa0(param_1,local_10);
  while (local_20 = local_18, local_18 != 0) {
    cVar1 = FUN_006dd100(local_18);
    if (cVar1 == '\0') break;
    local_18 = FUN_006e5e50(auStack_58,local_20);
    if (local_18 != 0) break;
    local_18 = FUN_006dd390(local_20);
  }
  FUN_00410f20(local_10);
  return local_18;
}

