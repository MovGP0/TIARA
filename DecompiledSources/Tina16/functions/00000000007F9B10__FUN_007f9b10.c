/* Ghidra address: 007f9b10 */
/* Ghidra symbol: FUN_007f9b10 */


longlong FUN_007f9b10(longlong param_1,char param_2)

{
  char cVar1;
  
  for (; ((param_2 != '\0' || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_007ee548), cVar1 == '\0')) &&
         (*(longlong *)(param_1 + 0x78) != 0)); param_1 = *(longlong *)(param_1 + 0x78)) {
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_007ee548);
  if (cVar1 == '\0') {
    param_1 = 0;
  }
  return param_1;
}

