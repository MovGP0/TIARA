/* Ghidra address: 01179010 */
/* Ghidra symbol: FUN_01179010 */


void FUN_01179010(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0xa8))(*(longlong **)(param_1 + 0x7e0));
  if (cVar1 != '\0') {
    FUN_0064e030(*(undefined8 *)(param_1 + 0x7a8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + 0xd0));
  }
  return;
}

