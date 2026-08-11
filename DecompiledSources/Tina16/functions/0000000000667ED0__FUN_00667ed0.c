/* Ghidra address: 00667ed0 */
/* Ghidra symbol: FUN_00667ed0 */


void FUN_00667ed0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != *(longlong *)(param_1 + 0x10)) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 8),&PTR_FUN_00640c18);
    if ((cVar1 != '\0') &&
       (*(longlong *)(param_1 + 0x10) = param_2, *(longlong *)(param_1 + 0x10) != 0)) {
      cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
      if ((cVar1 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 8) + 0xa0) & 0x200000) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
      }
    }
  }
  return;
}

