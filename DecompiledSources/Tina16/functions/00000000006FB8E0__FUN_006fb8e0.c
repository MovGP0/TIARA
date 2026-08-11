/* Ghidra address: 006fb8e0 */
/* Ghidra symbol: FUN_006fb8e0 */


void FUN_006fb8e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0x78),&PTR_FUN_006cb0d0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x1b8))(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}

