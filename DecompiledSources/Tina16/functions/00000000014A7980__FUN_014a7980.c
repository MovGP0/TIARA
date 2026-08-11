/* Ghidra address: 014a7980 */
/* Ghidra symbol: FUN_014a7980 */


void FUN_014a7980(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_2 + 0xd8) != *(longlong *)(param_2 + 0xd0)) &&
     (*(longlong *)(param_2 + 0xd0) != 0)) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0xd0),&PTR_FUN_0047c498);
    if (cVar1 != '\0') {
      FUN_00414b50(param_2 + 200,*(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x10));
    }
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd0));
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_004412f0(*(undefined8 *)(param_2 + 200));
  }
  return;
}

