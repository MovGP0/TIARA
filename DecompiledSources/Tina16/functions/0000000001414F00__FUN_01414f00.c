/* Ghidra address: 01414f00 */
/* Ghidra symbol: FUN_01414f00 */


void FUN_01414f00(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0xa8))(*(longlong **)(param_1 + 0x6c8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c8),&local_10);
    FUN_00414ad0(param_1 + 0x7b0,local_10);
    *(undefined1 *)(param_1 + 0x7cc) = 1;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x7b0));
  }
  FUN_00414480(&local_10);
  return;
}

