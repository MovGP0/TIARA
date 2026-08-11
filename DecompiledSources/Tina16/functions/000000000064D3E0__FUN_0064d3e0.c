/* Ghidra address: 0064d3e0 */
/* Ghidra symbol: FUN_0064d3e0 */


void FUN_0064d3e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x78)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_007ee548);
    if (cVar1 != '\0') {
      FUN_00802770(param_1,param_2);
    }
  }
  return;
}

