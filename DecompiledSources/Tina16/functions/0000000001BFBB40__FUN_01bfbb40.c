/* Ghidra address: 01bfbb40 */
/* Ghidra symbol: FUN_01bfbb40 */


void FUN_01bfbb40(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_58;
  if (*(char *)(param_1 + 0x48) != param_2) {
    *(char *)(param_1 + 0x48) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x38);
    local_28 = param_1;
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x18) == 0)) {
      local_30 = FUN_01bfb920;
      FUN_01bfa3f0(param_1,param_1,&local_30);
    }
    else {
      local_10 = *(longlong *)(lVar1 + 0x18);
      *(short *)(local_10 + 0x318) = *(short *)(local_10 + 0x318) + 1;
      local_30 = FUN_01bfb920;
      local_20 = auStack_58;
      FUN_01bfa3f0(param_1,param_1,&local_30);
      FUN_00654410(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
    }
  }
  return;
}

