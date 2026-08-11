/* Ghidra address: 008b26c0 */
/* Ghidra symbol: FUN_008b26c0 */


undefined8 FUN_008b26c0(void)

{
  char cVar1;
  
  cVar1 = (**(code **)PTR_PTR_020029a8)();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)PTR_PTR_02005a88)(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

