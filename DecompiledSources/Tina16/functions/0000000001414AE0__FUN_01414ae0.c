/* Ghidra address: 01414ae0 */
/* Ghidra symbol: FUN_01414ae0 */


void FUN_01414ae0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0xa8))(*(longlong **)(param_1 + 0x6c8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c8),&local_10);
    FUN_00414ad0(param_1 + 0x790,local_10);
    *(undefined1 *)(param_1 + 0x7c8) = 1;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x790));
  }
  FUN_00414480(&local_10);
  return;
}

