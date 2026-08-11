/* Ghidra address: 01814650 */
/* Ghidra symbol: FUN_01814650 */


void FUN_01814650(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x88) == '\0') {
    FUN_01811220(*(undefined8 *)(param_2 + 0x70));
  }
  else {
    FUN_004be2c0(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x20));
    FUN_01811140(*(undefined8 *)(param_2 + 0x70));
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x48) + 0xc0) = 0;
  cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0x48),&PTR_FUN_0193aeb8);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x20))(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}

