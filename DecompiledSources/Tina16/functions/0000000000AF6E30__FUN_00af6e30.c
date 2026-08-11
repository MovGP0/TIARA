/* Ghidra address: 00af6e30 */
/* Ghidra symbol: FUN_00af6e30 */


undefined8 FUN_00af6e30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  int local_3c;
  longlong local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x8c8);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_24 = *(int *)(*(longlong *)(lVar1 + 0x28) + 8) - *(int *)(lVar1 + 8);
    local_3c = *(int *)(lVar1 + 0x34);
    *(longlong *)(*(longlong *)(lVar1 + 0x28) + 8) = *(longlong *)(lVar1 + 8) + (longlong)local_3c;
    local_60 = auStack_88;
    local_38 = lVar1;
    local_30 = lVar1;
    FUN_00414480(local_20);
    local_48 = *(longlong *)(param_1 + 0x8c8);
    (**(code **)(**(longlong **)(local_48 + 0x28) + 0x18))(*(longlong **)(local_48 + 0x28),local_20)
    ;
    FUN_00414ad0(param_2,local_20[0]);
    FUN_00414480(local_20);
    local_50 = *(longlong *)(param_1 + 0x8c8);
    *(longlong *)(*(longlong *)(local_50 + 0x28) + 8) =
         *(longlong *)(local_50 + 8) + (longlong)local_24;
  }
  FUN_00414480(local_20);
  return param_2;
}

