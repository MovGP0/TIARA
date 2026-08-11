/* Ghidra address: 0160d750 */
/* Ghidra symbol: FUN_0160d750 */


undefined8 FUN_0160d750(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = 0;
  cVar2 = FUN_01d3f2a0(param_1);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 8);
    local_9 = 0;
    if (lVar1 != 0) {
      local_20 = FUN_019a0f30(lVar1,L"ifsz_v",&local_9);
    }
  }
  FUN_00414480(local_res10);
  return local_20;
}

