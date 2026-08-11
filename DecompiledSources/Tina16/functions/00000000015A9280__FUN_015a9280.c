/* Ghidra address: 015a9280 */
/* Ghidra symbol: FUN_015a9280 */


undefined1 FUN_015a9280(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_9;
  
  local_9 = 1;
  cVar1 = FUN_015ab240(param_2,&PTR_FUN_015a7bf8);
  if (cVar1 != '\0') {
    if (param_2 == *(longlong *)(param_1 + 0x40)) {
      local_9 = 0;
    }
    else {
      local_9 = FUN_015a9280(param_1,*(undefined8 *)(param_2 + 0x18));
    }
  }
  return local_9;
}

