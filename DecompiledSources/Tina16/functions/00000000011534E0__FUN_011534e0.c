/* Ghidra address: 011534e0 */
/* Ghidra symbol: FUN_011534e0 */


void FUN_011534e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  local_18 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0xa8))(*(longlong **)(param_1 + 0x8f8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x8f8),&local_18);
    FUN_00414ad0(param_1 + 0x8d0,local_18);
    cVar1 = FUN_00724300(*(undefined8 *)(param_1 + 0x8f8));
    local_28 = 0;
    FUN_014aeb50(*(undefined8 *)(param_1 + 0x8d0),cVar1 + -1,param_1 + 0x740,param_1 + 0x8d8);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6b8),0);
    FUN_01152760(param_1,param_2);
  }
  FUN_00414480(&local_18);
  return;
}

