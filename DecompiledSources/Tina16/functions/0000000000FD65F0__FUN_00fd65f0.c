/* Ghidra address: 00fd65f0 */
/* Ghidra symbol: FUN_00fd65f0 */


void FUN_00fd65f0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),uVar2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),local_20);
    if (local_20[0] == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Interrupt_1");
    }
  }
  FUN_00414480(local_20);
  return;
}

