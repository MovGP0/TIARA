/* Ghidra address: 008b2670 */
/* Ghidra symbol: FUN_008b2670 */


undefined8 FUN_008b2670(void)

{
  char cVar1;
  
  cVar1 = (**(code **)PTR_PTR_020029a8)();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)PTR_PTR_020039f8)(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

