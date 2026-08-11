/* Ghidra address: 00c2a4a0 */
/* Ghidra symbol: FUN_00c2a4a0 */


undefined8 FUN_00c2a4a0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (cVar1 = FUN_00c2e330(*(longlong *)(param_1 + 0x60)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

