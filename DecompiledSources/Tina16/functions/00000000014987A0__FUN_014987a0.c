/* Ghidra address: 014987a0 */
/* Ghidra symbol: FUN_014987a0 */


void FUN_014987a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))(*(longlong **)(param_1 + 0x8b0));
  if (cVar1 == '\0') {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x918));
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x6b0),3);
  }
  return;
}

