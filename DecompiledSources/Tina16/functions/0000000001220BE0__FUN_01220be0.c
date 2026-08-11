/* Ghidra address: 01220be0 */
/* Ghidra symbol: FUN_01220be0 */


void FUN_01220be0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x6c8) + 0xe0,L"All files|*.*|Tina TLC files|*.TLC");
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0xa8))(*(longlong **)(param_1 + 0x6c8));
  if (cVar2 != '\0') {
    DAT_02107680 = 1;
    FUN_00724270(*(undefined8 *)(param_1 + 0x6c8),local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_20[0]);
    FUN_011d4970(param_1,DAT_02107678);
  }
  FUN_00414480(local_20);
  return;
}

