/* Ghidra address: 0055c340 */
/* Ghidra symbol: FUN_0055c340 */


undefined8 FUN_0055c340(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_30;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_0055c0d0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 == (longlong *)0x0) {
      local_30 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x70))(plVar1,local_20);
      lVar2 = 0;
      if (local_20[0] != 0) {
        lVar2 = *(longlong *)(local_20[0] + -8);
      }
      plVar1 = *(longlong **)(local_20[0] + -8 + lVar2 * 8);
      local_30 = (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  else {
    local_30 = (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  FUN_00419430(local_20,&DAT_00531510);
  return local_30;
}

