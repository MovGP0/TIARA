/* Ghidra address: 007062a0 */
/* Ghidra symbol: FUN_007062a0 */


void FUN_007062a0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))(*(longlong **)(param_1 + 0x40));
  FUN_004b1e70(*(undefined8 *)(param_1 + 0x40));
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 0x38));
  if (cVar1 != '\0') {
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x38),0xb033,0,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))(*(longlong **)(param_1 + 0x40));
  return;
}

