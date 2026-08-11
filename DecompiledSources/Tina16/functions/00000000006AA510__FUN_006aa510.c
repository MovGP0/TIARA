/* Ghidra address: 006aa510 */
/* Ghidra symbol: FUN_006aa510 */


undefined8 FUN_006aa510(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x138) != 0) && (param_2 == *(longlong *)(param_1 + 0x138))) ||
      ((*(longlong *)(param_1 + 0x138) == 0 &&
       (cVar1 = FUN_004113d0(param_2,&PTR_FUN_007f0370), cVar1 != '\0')))) &&
     (*(char *)(param_2 + 0x4d6) == '\x02')) {
    return 1;
  }
  return 0;
}

