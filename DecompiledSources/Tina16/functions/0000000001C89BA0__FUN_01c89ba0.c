/* Ghidra address: 01c89ba0 */
/* Ghidra symbol: FUN_01c89ba0 */


void FUN_01c89ba0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18f8) + 0xa8))
                      (*(longlong **)(param_1 + 0x18f8));
    if (cVar1 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x18f8),&local_10);
      FUN_00414ad0(param_1 + 0x2760,local_10);
      FUN_01c6ec30(param_1,0x39,1,1,*(undefined1 *)(*(longlong *)(param_1 + 0x18f8) + 0x413));
    }
  }
  FUN_00414480(&local_10);
  return;
}

