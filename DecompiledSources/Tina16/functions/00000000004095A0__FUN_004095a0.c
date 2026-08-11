/* Ghidra address: 004095a0 */
/* Ghidra symbol: FUN_004095a0 */


undefined8 FUN_004095a0(longlong param_1)

{
  char cVar1;
  
  if ((param_1 != 0) && (cVar1 = (*(code *)PTR_FUN_01db9ca0)(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

