/* Ghidra address: 00621370 */
/* Ghidra symbol: FUN_00621370 */


void FUN_00621370(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  code *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_28 = (code *)*param_3;
  local_20 = param_3[1];
  FUN_004520b0(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 8);
  while (local_30 = lVar1, local_30 != 0) {
    local_38 = *(longlong *)(local_30 + 8);
    lVar1 = local_38;
    if (*(longlong *)(local_30 + 0x10) == param_2) {
      (*local_28)(local_20,local_30);
      lVar1 = local_38;
    }
  }
  FUN_00452190(*(undefined8 *)(param_1 + 0x10));
  return;
}

