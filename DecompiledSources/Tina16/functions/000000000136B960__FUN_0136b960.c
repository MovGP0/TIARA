/* Ghidra address: 0136b960 */
/* Ghidra symbol: FUN_0136b960 */


longlong FUN_0136b960(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01364e80(local_res8,0,param_3);
  local_28 = *(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x27a8);
  if ((*(longlong *)(local_28 + 0x488) != 0) &&
     (*(longlong *)(*(longlong *)(local_28 + 0x488) + 0xf10) != 0)) {
    uVar2 = FUN_0065b870(param_3);
    thunk_FUN_04154efc(uVar2,0xffffffff);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

