/* Ghidra address: 01bfbc70 */
/* Ghidra symbol: FUN_01bfbc70 */


void FUN_01bfbc70(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x49) != param_2) {
    *(char *)(param_1 + 0x49) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x18) == 0)) {
      FUN_01bfbd50(param_1,param_1,param_2);
    }
    else {
      local_20 = *(longlong *)(lVar1 + 0x18);
      *(short *)(local_20 + 0x318) = *(short *)(local_20 + 0x318) + 1;
      local_30 = auStack_58;
      FUN_01bfbd50(param_1,param_1,param_2);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
      (**(code **)(*plVar2 + 0x108))(plVar2);
      FUN_00654410(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
    }
  }
  return;
}

